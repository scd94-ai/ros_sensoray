#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "sensoray826_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sensoray826_msgs__msg__PotentiometerState() -> *const std::ffi::c_void;
}

#[link(name = "sensoray826_msgs__rosidl_generator_c")]
extern "C" {
    fn sensoray826_msgs__msg__PotentiometerState__init(msg: *mut PotentiometerState) -> bool;
    fn sensoray826_msgs__msg__PotentiometerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PotentiometerState>, size: usize) -> bool;
    fn sensoray826_msgs__msg__PotentiometerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PotentiometerState>);
    fn sensoray826_msgs__msg__PotentiometerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PotentiometerState>, out_seq: *mut rosidl_runtime_rs::Sequence<PotentiometerState>) -> bool;
}

// Corresponds to sensoray826_msgs__msg__PotentiometerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Raw ADC capture. Header and sequence identify acquisition, never publication.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PotentiometerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sensoray826_msgs__msg__PotentiometerState__init(&mut msg as *mut _) {
        panic!("Call to sensoray826_msgs__msg__PotentiometerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PotentiometerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sensoray826_msgs__msg__PotentiometerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sensoray826_msgs__msg__PotentiometerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sensoray826_msgs__msg__PotentiometerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PotentiometerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PotentiometerState where Self: Sized {
  const TYPE_NAME: &'static str = "sensoray826_msgs/msg/PotentiometerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sensoray826_msgs__msg__PotentiometerState() }
  }
}


