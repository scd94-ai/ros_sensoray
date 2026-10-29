#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to sensoray826_msgs__msg__PotentiometerState
/// Raw ADC capture. Header and sequence identify acquisition, never publication.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PotentiometerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub board: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub settling_us: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub adc_channels: [u8; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub adc_timestamps_us: [u32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage_v: [f64; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: [bool; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub sdk_status: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub supply_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub supply_voltage_v: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub supply_adc_timestamp_us: u32,

}



impl Default for PotentiometerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PotentiometerState::default())
  }
}

impl rosidl_runtime_rs::Message for PotentiometerState {
  type RmwMsg = super::msg::rmw::PotentiometerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        session_id: msg.session_id.as_str().into(),
        sequence: msg.sequence,
        board: msg.board,
        settling_us: msg.settling_us,
        adc_channels: msg.adc_channels,
        adc_timestamps_us: msg.adc_timestamps_us,
        voltage_v: msg.voltage_v,
        valid: msg.valid,
        sdk_status: msg.sdk_status,
        supply_valid: msg.supply_valid,
        supply_voltage_v: msg.supply_voltage_v,
        supply_adc_timestamp_us: msg.supply_adc_timestamp_us,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        session_id: msg.session_id.as_str().into(),
      sequence: msg.sequence,
      board: msg.board,
      settling_us: msg.settling_us,
        adc_channels: msg.adc_channels,
        adc_timestamps_us: msg.adc_timestamps_us,
        voltage_v: msg.voltage_v,
        valid: msg.valid,
      sdk_status: msg.sdk_status,
      supply_valid: msg.supply_valid,
      supply_voltage_v: msg.supply_voltage_v,
      supply_adc_timestamp_us: msg.supply_adc_timestamp_us,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      session_id: msg.session_id.to_string(),
      sequence: msg.sequence,
      board: msg.board,
      settling_us: msg.settling_us,
      adc_channels: msg.adc_channels,
      adc_timestamps_us: msg.adc_timestamps_us,
      voltage_v: msg.voltage_v,
      valid: msg.valid,
      sdk_status: msg.sdk_status,
      supply_valid: msg.supply_valid,
      supply_voltage_v: msg.supply_voltage_v,
      supply_adc_timestamp_us: msg.supply_adc_timestamp_us,
    }
  }
}


