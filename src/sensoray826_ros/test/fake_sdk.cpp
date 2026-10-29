// In-memory SDK/ownership for ROS lifecycle tests. This file opens no device.
#include "Sensoray826.h"
#include "826api.h"
#include <array>
#include <atomic>
#include <chrono>
#include <cstdlib>
#include <fstream>
#include <mutex>
#include <string>
#include <thread>

namespace {
std::mutex log_mutex;
std::array<std::array<uint,3>,16> config{};
uint mask=8, trigger=16, enabled=0;
std::atomic<unsigned> counter{0};
void event(const std::string& value) {
    const char* path=std::getenv("SENSORAY_FAKE_EVENT_LOG");
    if(path){std::lock_guard<std::mutex> lock(log_mutex);std::ofstream stream(path,std::ios::app);stream<<value<<'\n';}
}
bool barrier(const char* variable, const char* label) {
    const char* path=std::getenv(variable);
    if(!path)return true;
    event(label);
    const auto deadline=std::chrono::steady_clock::now()+std::chrono::seconds(3);
    while(std::chrono::steady_clock::now()<deadline) {
        if(std::ifstream(path).good())return true;
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
    event("barrier_timeout");return false;
}
}
BoardOwnership::~BoardOwnership(){release();}
bool BoardOwnership::audit(unsigned){return true;}
bool BoardOwnership::acquire(unsigned){event("lock");return true;}
void BoardOwnership::release(){event("unlock");}
extern "C" {
int S826_SystemOpen(){
    event("sdk_open");
    if(std::getenv("SENSORAY_FAKE_ENABLED"))enabled=1;
    return barrier("SENSORAY_FAKE_OPEN_RELEASE_FILE","sdk_open_waiting")?1:-5;
}
int S826_SystemClose(){
    event("sdk_close");
    return barrier("SENSORAY_FAKE_CLOSE_RELEASE_FILE","sdk_close_waiting")?0:-5;
}
int S826_AdcEnableRead(uint,uint* value){*value=enabled;return 0;}
int S826_AdcEnableWrite(uint,uint value){event(value?"adc_start":"adc_stop");enabled=value;return 0;}
int S826_AdcSlotlistRead(uint,uint* value){*value=mask;return 0;}
int S826_AdcSlotlistWrite(uint,uint value,uint mode){mask=mode==S826_BITSET?mask|value:value;event("adc_mask_"+std::to_string(mask));return 0;}
int S826_AdcTrigModeRead(uint,uint* value){*value=trigger;return 0;}
int S826_AdcTrigModeWrite(uint,uint value){trigger=value;return 0;}
int S826_AdcSlotConfigRead(uint,uint slot,uint* channel,uint* settle,uint* gain){*channel=config[slot][0];*settle=config[slot][1];*gain=config[slot][2];return 0;}
int S826_AdcSlotConfigWrite(uint,uint slot,uint channel,uint settle,uint gain){
    if(std::getenv("SENSORAY_FAKE_FAIL_ADC") && slot==5 && channel==10){event("adc_config_failed");return -5;}
    config[slot]={channel,settle,gain};event("adc_config_"+std::to_string(slot));return 0;
}
int S826_AdcRead(uint,int* values,uint* timestamps,uint* slots,uint timeout){
    if(timeout){event("FORBIDDEN_BLOCKING_READ");return -5;}
    if(!enabled){*slots=0;return -3;}
    const auto count=++counter;
    event("adc_read");
    for(unsigned i=0;i<16;++i){if(values)values[i]=i==4?11333:(i==5?6720:16384);if(timestamps)timestamps[i]=count*5000+i*102;}
    return 0;
}
int S826_DacRangeWrite(uint,uint,uint,uint){event("DAC_CONFIG");return 0;}
int S826_DacDataWrite(uint,uint,uint value,uint){event("DAC_WRITE_"+std::to_string(value));return 0;}
}
