"""Exercise the real ROS node with a fake SDK binary; no hardware is loaded."""
import os
from pathlib import Path
import signal
import subprocess
import sys
import tempfile
import time


def main():
    executable, mode = sys.argv[1:]
    with tempfile.TemporaryDirectory(prefix='sensoray-node-fake-') as directory:
        log=Path(directory)/'events.txt'
        environment=dict(os.environ, SENSORAY_FAKE_EVENT_LOG=str(log), ROS_DOMAIN_ID='184',
                         ROS_AUTOMATIC_DISCOVERY_RANGE='LOCALHOST', ROS_LOCALHOST_ONLY='1')
        # Confine discovery to this test process's local host/domain.
        environment.pop('FASTRTPS_DEFAULT_PROFILES_FILE',None)
        environment.pop('FASTDDS_DEFAULT_PROFILES_FILE',None)
        failed=mode.endswith('_failure')
        if failed:environment['SENSORAY_FAKE_FAIL_ADC']='1'
        refused=mode=='enabled_refused'
        if refused:environment['SENSORAY_FAKE_ENABLED']='1'
        pressure=not (mode.startswith('adc_') or refused)
        adc=mode!='pressure_only'
        open_release=Path(directory)/'open.release'
        close_release=Path(directory)/'close.release'
        if mode=='adc_hangup_startup':environment['SENSORAY_FAKE_OPEN_RELEASE_FILE']=str(open_release)
        if mode=='adc_hangup_cleanup':environment['SENSORAY_FAKE_CLOSE_RELEASE_FILE']=str(close_release)
        process=subprocess.Popen([executable,'--ros-args','-p','enable_pressure:='+str(pressure).lower(),
            '-p','enable_potentiometers:='+str(adc).lower()],env=environment,
            stdout=subprocess.PIPE,stderr=subprocess.PIPE,text=True)
        try:
            if refused:
                stdout,stderr=process.communicate(timeout=6)
                assert process.returncode==1,(stdout,stderr)
                assert 'ADC is already enabled (state=1)' in stderr,(stdout,stderr)
                assert 'refusing to stop or reconfigure' in stderr
                events=log.read_text().splitlines()
                assert 'adc_stop' not in events and 'adc_start' not in events
                assert not any(value.startswith(('DAC_','adc_config_','adc_mask_')) for value in events)
                assert 'sdk_close' in events and events[-1]=='unlock'
                print('PASS',mode,'precise ROS error; unknown acquisition untouched')
                return
            if mode=='adc_hangup_startup':
                deadline=time.monotonic()+2
                while time.monotonic()<deadline:
                    if log.exists() and 'sdk_open_waiting' in log.read_text().splitlines():break
                    if process.poll() is not None:raise AssertionError(process.communicate())
                    time.sleep(.005)
                else:raise AssertionError('Fake SDK startup barrier not reached')
                process.send_signal(signal.SIGHUP)
                open_release.touch()
            if failed:
                stdout,stderr=process.communicate(timeout=6)
                assert process.returncode==1,(stdout,stderr)
                events=log.read_text().splitlines()
                assert 'adc_config_failed' in events
                assert 'adc_start' not in events
                assert events.index('adc_stop')<events.index('sdk_close')
                if not pressure:assert not any(value.startswith('DAC_') for value in events)
                else:assert events.count('DAC_WRITE_16384')>=9
                print('PASS',mode,'failed startup restored/closed in-memory ADC without hardware')
                return
            deadline=time.monotonic()+8
            while time.monotonic()<deadline:
                events=log.read_text().splitlines() if log.exists() else []
                if (mode=='adc_hangup_startup' and 'sdk_close' in events) or (adc and events.count('adc_read')>=20) or (not adc and events.count('DAC_WRITE_16384')>=6):break
                if process.poll() is not None:raise AssertionError(process.communicate())
                time.sleep(.02)
            else:raise AssertionError('Node failed to initialize fake hardware')
            if mode!='adc_hangup_startup':
                process.send_signal(signal.SIGHUP if 'hangup' in mode else signal.SIGTERM)
            if mode=='adc_hangup_cleanup':
                deadline=time.monotonic()+2
                while time.monotonic()<deadline:
                    if log.exists() and 'sdk_close_waiting' in log.read_text().splitlines():break
                    if process.poll() is not None:raise AssertionError(process.communicate())
                    time.sleep(.005)
                else:raise AssertionError('Fake SDK cleanup barrier not reached')
                process.send_signal(signal.SIGHUP)
                close_release.touch()
            stdout,stderr=process.communicate(timeout=6)
            assert process.returncode==0,(stdout,stderr)
            events=log.read_text().splitlines()
            assert 'FORBIDDEN_BLOCKING_READ' not in events and 'barrier_timeout' not in events
            assert events.index('sdk_close')>events.index('adc_stop')
            assert events[-1]=='unlock'
            if not pressure:assert not any(value.startswith('DAC_') for value in events)
            else:assert events.count('DAC_WRITE_16384')>=9
            if adc:
                reads=[index for index,value in enumerate(events) if value=='adc_read']
                if mode!='adc_hangup_startup':assert reads
                if reads:assert max(reads)<events.index('adc_stop')<events.index('sdk_close')
                assert 'adc_mask_8' in events[events.index('adc_stop'):]
            else:assert 'adc_start' not in events and 'adc_read' not in events
            print('PASS',mode,len(events),'in-memory SDK events; no hardware operations')
        finally:
            if process.poll() is None:process.kill();process.communicate(timeout=3)


if __name__=='__main__':main()
