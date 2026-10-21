#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to soft_actuator_msgs__msg__PressureCommand
/// One three-channel pressure command for one actuator.
/// header.stamp is ROS publication time, not a core monotonic timestamp.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PressureCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Identifies one controller process session; reject acknowledgements from other sessions.
    pub session_id: std::string::String,

    /// Increases within this session. A writer must acknowledge the exact command it wrote.
    pub sequence: u64,

    /// Requested channel pressures [channel 1, channel 2, channel 3], in kPa.
    pub pressure_kpa: [f64; 3],

    /// Request the writer's emergency-zero path, bypassing ordinary slew/hold policies.
    pub force_zero: bool,

    /// Maximum command validity duration; the writer must enforce command expiry/watchdog.
    pub valid_for: builtin_interfaces::msg::Duration,

    /// Human-readable command purpose or reason, not a machine-readable status code.
    pub reason: std::string::String,

}



impl Default for PressureCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PressureCommand::default())
  }
}

impl rosidl_runtime_rs::Message for PressureCommand {
  type RmwMsg = super::msg::rmw::PressureCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        session_id: msg.session_id.as_str().into(),
        sequence: msg.sequence,
        pressure_kpa: msg.pressure_kpa,
        force_zero: msg.force_zero,
        valid_for: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.valid_for)).into_owned(),
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        session_id: msg.session_id.as_str().into(),
      sequence: msg.sequence,
        pressure_kpa: msg.pressure_kpa,
      force_zero: msg.force_zero,
        valid_for: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.valid_for)).into_owned(),
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      session_id: msg.session_id.to_string(),
      sequence: msg.sequence,
      pressure_kpa: msg.pressure_kpa,
      force_zero: msg.force_zero,
      valid_for: builtin_interfaces::msg::Duration::from_rmw_message(msg.valid_for),
      reason: msg.reason.to_string(),
    }
  }
}


// Corresponds to soft_actuator_msgs__msg__PressureState
/// Writer acknowledgement/status for one actuator.
/// header.stamp is the writer's ROS publication time for observation.
/// The controller uses the acknowledged command's local send time as a conservative
/// lower bound for write time; delayed/repeated ACKs never refresh an old command.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PressureState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Echo the session_id of the command acknowledged by this message.
    pub session_id: std::string::String,

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
    pub fault: std::string::String,

}



impl Default for PressureState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PressureState::default())
  }
}

impl rosidl_runtime_rs::Message for PressureState {
  type RmwMsg = super::msg::rmw::PressureState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        session_id: msg.session_id.as_str().into(),
        command_sequence: msg.command_sequence,
        written_pressure_kpa: msg.written_pressure_kpa,
        write_success: msg.write_success,
        ready: msg.ready,
        fault: msg.fault.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        session_id: msg.session_id.as_str().into(),
      command_sequence: msg.command_sequence,
        written_pressure_kpa: msg.written_pressure_kpa,
      write_success: msg.write_success,
      ready: msg.ready,
        fault: msg.fault.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      session_id: msg.session_id.to_string(),
      command_sequence: msg.command_sequence,
      written_pressure_kpa: msg.written_pressure_kpa,
      write_success: msg.write_success,
      ready: msg.ready,
      fault: msg.fault.to_string(),
    }
  }
}


// Corresponds to soft_actuator_msgs__msg__ControllerStatus
/// Controller diagnostics for one actuator. Position vectors use the PCC base frame, in mm.
/// header.frame_id names the PCC base frame; header.stamp is ROS publication time.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControllerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_id: std::string::String,

    /// Adapter-level state (for example disabled, waiting for input, or running).
    pub state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,

    /// Requested mode and mode actually used by the current core step.
    pub requested_mode: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effective_mode: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback_reason: std::string::String,


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
    pub contact_state: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ControllerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ControllerStatus {
  type RmwMsg = super::msg::rmw::ControllerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        session_id: msg.session_id.as_str().into(),
        state: msg.state.as_str().into(),
        enabled: msg.enabled,
        requested_mode: msg.requested_mode.as_str().into(),
        effective_mode: msg.effective_mode.as_str().into(),
        feedback_reason: msg.feedback_reason.as_str().into(),
        numeric_valid: msg.numeric_valid,
        pressure_limited: msg.pressure_limited,
        measured_error_valid: msg.measured_error_valid,
        contact_state: msg.contact_state.as_str().into(),
        target_mm: msg.target_mm,
        predicted_mm: msg.predicted_mm,
        error_mm: msg.error_mm,
        requested_pressure_kpa: msg.requested_pressure_kpa,
        core_pressure_kpa: msg.core_pressure_kpa,
        output_pressure_kpa: msg.output_pressure_kpa,
        last_written_pressure_kpa: msg.last_written_pressure_kpa,
        writer_fresh: msg.writer_fresh,
        feedback_sequence: msg.feedback_sequence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        session_id: msg.session_id.as_str().into(),
        state: msg.state.as_str().into(),
      enabled: msg.enabled,
        requested_mode: msg.requested_mode.as_str().into(),
        effective_mode: msg.effective_mode.as_str().into(),
        feedback_reason: msg.feedback_reason.as_str().into(),
      numeric_valid: msg.numeric_valid,
      pressure_limited: msg.pressure_limited,
      measured_error_valid: msg.measured_error_valid,
        contact_state: msg.contact_state.as_str().into(),
        target_mm: msg.target_mm,
        predicted_mm: msg.predicted_mm,
        error_mm: msg.error_mm,
        requested_pressure_kpa: msg.requested_pressure_kpa,
        core_pressure_kpa: msg.core_pressure_kpa,
        output_pressure_kpa: msg.output_pressure_kpa,
        last_written_pressure_kpa: msg.last_written_pressure_kpa,
      writer_fresh: msg.writer_fresh,
      feedback_sequence: msg.feedback_sequence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      session_id: msg.session_id.to_string(),
      state: msg.state.to_string(),
      enabled: msg.enabled,
      requested_mode: msg.requested_mode.to_string(),
      effective_mode: msg.effective_mode.to_string(),
      feedback_reason: msg.feedback_reason.to_string(),
      numeric_valid: msg.numeric_valid,
      pressure_limited: msg.pressure_limited,
      measured_error_valid: msg.measured_error_valid,
      contact_state: msg.contact_state.to_string(),
      target_mm: msg.target_mm,
      predicted_mm: msg.predicted_mm,
      error_mm: msg.error_mm,
      requested_pressure_kpa: msg.requested_pressure_kpa,
      core_pressure_kpa: msg.core_pressure_kpa,
      output_pressure_kpa: msg.output_pressure_kpa,
      last_written_pressure_kpa: msg.last_written_pressure_kpa,
      writer_fresh: msg.writer_fresh,
      feedback_sequence: msg.feedback_sequence,
    }
  }
}


