# Raw ADC capture. Header and sequence identify acquisition, never publication.
std_msgs/Header header
string session_id
uint64 sequence
uint8 board
uint32 settling_us
uint8[2] adc_channels
uint32[2] adc_timestamps_us
float64[2] voltage_v
bool[2] valid
int32 sdk_status
bool supply_valid
float64 supply_voltage_v
uint32 supply_adc_timestamp_us
