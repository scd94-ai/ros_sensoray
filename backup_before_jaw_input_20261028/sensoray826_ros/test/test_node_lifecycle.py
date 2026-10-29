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
        pressure=mode!='adc_only'
        adc=mode!='pressure_only'
        process=subprocess.Popen([executable,'--ros-args','-p','enable_pressure:='+str(pressure).lower(),
            '-p','enable_potentiometers:='+str(adc).lower()],env=environment,
            stdout=subprocess.PIPE,stderr=subprocess.PIPE,text=True)
        try:
            deadline=time.monotonic()+8
            while time.monotonic()<deadline:
                events=log.read_text().splitlines() if log.exists() else []
                if (adc and events.count('adc_read')>=20) or (not adc and events.count('DAC_WRITE_16384')>=6):break
                if process.poll() is not None:raise AssertionError(process.communicate())
                time.sleep(.02)
            else:raise AssertionError('Node failed to initialize fake hardware')
            process.send_signal(signal.SIGTERM)
            stdout,stderr=process.communicate(timeout=6)
            assert process.returncode==0,(stdout,stderr)
            events=log.read_text().splitlines()
            assert 'FORBIDDEN_BLOCKING_READ' not in events
            assert events.index('sdk_close')>events.index('adc_stop')
            assert events[-1]=='unlock'
            if not pressure:assert not any(value.startswith('DAC_') for value in events)
            else:assert events.count('DAC_WRITE_16384')>=9
            if adc:
                last_read=max(index for index,value in enumerate(events) if value=='adc_read')
                assert last_read<events.index('adc_stop')<events.index('sdk_close')
                assert 'adc_mask_8' in events[events.index('adc_stop'):]
            else:assert 'adc_start' not in events and 'adc_read' not in events
            print('PASS',mode,len(events),'in-memory SDK events; no hardware operations')
        finally:
            if process.poll() is None:process.kill();process.communicate(timeout=3)


if __name__=='__main__':main()
