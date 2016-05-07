/** @file This file was autogenerated. All changes will be undone. */

#ifndef _PROTOCOL_H_
#define _PROTOCOL_H_

#include <comnet_message.h>
#include <message/Enter.h>
#include <message/Ping.h>
#include <message/Pong.h>
#include <message/Exit.h>
#include <message/RawData.h>
#include <message/ConnectionRequest.h>
#include <message/ConnectionReply.h>
#include <message/VehicleIdentification.h>
#include <message/VehicleAuthorizationRequest.h>
#include <message/VehicleAuthorizationReply.h>
#include <message/VehicleModeCommand.h>
#include <message/VehicleJoystickCommand.h>
#include <message/VehicleTerminationCommand.h>
#include <message/VehicleTelemetryCommand.h>
#include <message/VehicleSystemStatus.h>
#include <message/VehicleInertialState.h>
#include <message/VehicleGlobalPosition.h>
#include <message/VehicleBodySensedState.h>
#include <message/VehicleAttitude.h>
#include <message/AirVehicleGroundRelativeState.h>
#include <message/PayloadBayCommand.h>
#include <message/PayloadDataRecorderCommand.h>
#include <message/PayloadOperationCommand.h>
#include <message/CommunicationsPayloadCommand.h>
#include <message/CommunicationsPayloadConfigurationCommand.h>
#include <message/PayloadBayModeCommand.h>
#include <message/PayloadBayStatus.h>
#include <message/PayloadDataRecorderStatus.h>
#include <message/PayloadOperatingStatus.h>
#include <message/CommunicationsPayloadStatus.h>
#include <message/TargetStatus.h>
#include <message/TargetAcknowledgement.h>
#include <message/UAVLocation.h>
#include <message/UAVSpeed.h>
#include <message/UAVHeading.h>
#include <message/UAVBattery.h>
#include <message/UAVCollisionAvodianceStatus.h>
#include <message/UAVMissionStatus.h>
#include <message/UAVCollisionAvodianceMessage.h>
#include <message/UUVStatus.h>
#include <message/ROVStatusMessage.h>
const uint8_t MSG_DATA_OFFSET = 26;


/**Global typdef union with all message types declared as com_msg_bug_t.
Used to easily transmit data as same variable. Could of used base class as message and created derived classes for polymorphism.
Would have lost C ability if done so.*/
typedef union {
   enter_t enter;
   ping_t ping;
   pong_t pong;
   exit_t exit;
   raw_data_t raw_data;
   connection_request_t connection_request;
   connection_reply_t connection_reply;
   vehicle_identification_t vehicle_identification;
   vehicle_authorization_request_t vehicle_authorization_request;
   vehicle_authorization_reply_t vehicle_authorization_reply;
   vehicle_mode_command_t vehicle_mode_command;
   vehicle_joystick_command_t vehicle_joystick_command;
   vehicle_termination_command_t vehicle_termination_command;
   vehicle_telemetry_command_t vehicle_telemetry_command;
   vehicle_system_status_t vehicle_system_status;
   vehicle_inertial_state_t vehicle_inertial_state;
   vehicle_global_position_t vehicle_global_position;
   vehicle_body_sensed_state_t vehicle_body_sensed_state;
   vehicle_attitude_t vehicle_attitude;
   air_vehicle_ground_relative_state_t air_vehicle_ground_relative_state;
   payload_bay_command_t payload_bay_command;
   payload_data_recorder_command_t payload_data_recorder_command;
   payload_operation_command_t payload_operation_command;
   communications_payload_command_t communications_payload_command;
   communications_payload_configuration_command_t communications_payload_configuration_command;
   payload_bay_mode_command_t payload_bay_mode_command;
   payload_bay_status_t payload_bay_status;
   payload_data_recorder_status_t payload_data_recorder_status;
   payload_operating_status_t payload_operating_status;
   communications_payload_status_t communications_payload_status;
   target_status_t target_status;
   target_acknowledgement_t target_acknowledgement;
   UAV_location_t UAV_location;
   UAV_speed_t UAV_speed;
   UAV_heading_t UAV_heading;
   UAV_battery_t UAV_battery;
   UAV_collision_avodiance_status_t UAV_collision_avodiance_status;
   UAV_mission_status_t UAV_mission_status;
   UAV_collision_avodiance_message_t UAV_collision_avodiance_message;
   UUV_status_t UUV_status;
   ROV_status_message_t ROV_status_message;
} com_msg_buf_t;

/**Global function to unpack message with com_msg and com_msg_bug_t union.*/
void unpack_com_msg_t(
   com_msg_t* msg,
   com_msg_buf_t* buf);

/**Global function which returns the message string description*/
const char* com_typestr(com_msg_type_t msg_type);

#endif