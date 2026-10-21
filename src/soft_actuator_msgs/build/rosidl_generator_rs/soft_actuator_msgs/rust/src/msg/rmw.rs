#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "soft_actuator_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__soft_actuator_msgs__msg__PressureCommand() -> *const std::ffi::c_void;
}

#[link(name = "soft_actuator_msgs__rosidl_generator_c")]
extern "C" {
    fn soft_actuator_msgs__msg__PressureCommand__init(msg: *mut PressureCommand) -> bool;
    fn soft_actuator_msgs__msg__PressureCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PressureCommand>, size: usize) -> bool;
    fn soft_actuator_msgs__msg__PressureCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PressureCommand>);
    fn soft_actuator_msgs__msg__PressureCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PressureCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<PressureCommand>) -> bool;
}

// Corresponds to soft_actuator_msgs__msg__PressureCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// One three-channel pressure command for one actuator.
/// header.stamp is ROS publication time, not a core monotonic timestamp.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PressureCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Identifies one controller process session; reject acknowledgements from other sessions.
    pub session_id: rosidl_runtime_rs::String,

    /// Increases within this session. A writer must acknowledge the exact command it wrote.
    pub sequence: u64,

    /// Requested channel pressures [channel 1, channel 2, channel 3], in kPa.
    pub pressure_kpa: [f64; 3],

    /// Request the writer's emergency-zero path, bypassing ordinary slew/hold policies.
    pub force_zero: bool,

    /// Maximum command validity duration; the writer must enforce command expiry/watchdog.
    pub valid_for: builtin_interfaces::msg::rmw::Duration,

    /// Human-readable command purpose or reason, not a machine-readable status code.
    pub reason: rosidl_runtime_rs::String,

}



impl Default for PressureCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !soft_actuator_msgs__msg__PressureCommand__init(&mut msg as *mut _) {
        panic!("Call to soft_actuator_msgs__msg__PressureCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PressureCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__PressureCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__PressureCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__PressureCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PressureCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PressureCommand where Self: Sized {
  const TYPE_NAME: &'static str = "soft_actuator_msgs/msg/PressureCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__soft_actuator_msgs__msg__PressureCommand() }
  }
}


#[link(name = "soft_actuator_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__soft_actuator_msgs__msg__PressureState() -> *const std::ffi::c_void;
}

#[link(name = "soft_actuator_msgs__rosidl_generator_c")]
extern "C" {
    fn soft_actuator_msgs__msg__PressureState__init(msg: *mut PressureState) -> bool;
    fn soft_actuator_msgs__msg__PressureState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PressureState>, size: usize) -> bool;
    fn soft_actuator_msgs__msg__PressureState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PressureState>);
    fn soft_actuator_msgs__msg__PressureState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PressureState>, out_seq: *mut rosidl_runtime_rs::Sequence<PressureState>) -> bool;
}

// Corresponds to soft_actuator_msgs__msg__PressureState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Writer acknowledgement/status for one actuator.
/// header.stamp is the writer's ROS publication time for observation.
/// The controller uses the acknowledged command's local send time as a conservative
/// lower bound for write time; delayed/repeated ACKs never refresh an old command.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PressureState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Echo the session_id of the command acknowledged by this message.
    pub session_id: rosidl_runtime_rs::String,

    /// Echo the sequence of the command acknowledged by this message.
    pub command_sequence: u64,

    /// The three pressure commands actually written successfully to the board, in kPa.
    /// These values are NOT measured chamber pressures and do not prove physical pressure response.
    /// If write_success is false, this field must not update the controller's write history.
    pub written_pressure_kpa: [f64; 3],

    /// True only after the actual board write succeeds, never merely after ROS message receipt.
    pub write_success: bool,

    /// True when the writer is ready to accept output commands.
    pub ready: bool,

    /// Empty when no writer fault is active; otherwise a human-readable fault description.
    pub fault: rosidl_runtime_rs::String,

}



impl Default for PressureState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !soft_actuator_msgs__msg__PressureState__init(&mut msg as *mut _) {
        panic!("Call to soft_actuator_msgs__msg__PressureState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PressureState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__PressureState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__PressureState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__PressureState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PressureState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PressureState where Self: Sized {
  const TYPE_NAME: &'static str = "soft_actuator_msgs/msg/PressureState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__soft_actuator_msgs__msg__PressureState() }
  }
}


#[link(name = "soft_actuator_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__soft_actuator_msgs__msg__ControllerStatus() -> *const std::ffi::c_void;
}

#[link(name = "soft_actuator_msgs__rosidl_generator_c")]
extern "C" {
    fn soft_actuator_msgs__msg__ControllerStatus__init(msg: *mut ControllerStatus) -> bool;
    fn soft_actuator_msgs__msg__ControllerStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControllerStatus>, size: usize) -> bool;
    fn soft_actuator_msgs__msg__ControllerStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControllerStatus>);
    fn soft_actuator_msgs__msg__ControllerStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControllerStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<ControllerStatus>) -> bool;
}

// Corresponds to soft_actuator_msgs__msg__ControllerStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Controller diagnostics for one actuator. Position vectors use the PCC base frame, in mm.
/// header.frame_id names the PCC base frame; header.stamp is ROS publication time.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControllerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: rosidl_runtime_rs::String,

    /// Adapter-level state (for example disabled, waiting for input, or running).
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,

    /// Requested mode and mode actually used by the current core step.
    pub requested_mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effective_mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback_reason: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub numeric_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pressure_limited: bool,

    /// True only when error_mm is based on actual valid feedback rather than model prediction.
    pub measured_error_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_mm: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub predicted_mm: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_mm: [f64; 3],

    /// Core pressure before its internal limits, in kPa.
    pub requested_pressure_kpa: [f64; 3],

    /// Core pressure after its internal limits, in kPa.
    pub core_pressure_kpa: [f64; 3],

    /// Adapter output-policy result sent to the writer, in kPa; not proof of a successful write.
    pub output_pressure_kpa: [f64; 3],

    /// Most recent acknowledged successful board write, in kPa; not measured chamber pressure.
    pub last_written_pressure_kpa: [f64; 3],

    /// Whether the last accepted writer report is fresh according to local monotonic receipt time.
    pub writer_fresh: bool,

    /// Adapter-assigned sequence of the latest distinct feedback source frame.
    pub feedback_sequence: u64,

}



impl Default for ControllerStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !soft_actuator_msgs__msg__ControllerStatus__init(&mut msg as *mut _) {
        panic!("Call to soft_actuator_msgs__msg__ControllerStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControllerStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__ControllerStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__ControllerStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { soft_actuator_msgs__msg__ControllerStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControllerStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControllerStatus where Self: Sized {
  const TYPE_NAME: &'static str = "soft_actuator_msgs/msg/ControllerStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__soft_actuator_msgs__msg__ControllerStatus() }
  }
}


