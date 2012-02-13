// MESSAGE UALBERTA_SYS_STATUS PACKING

#define MAVLINK_MSG_ID_UALBERTA_SYS_STATUS 222

typedef struct __mavlink_ualberta_sys_status_t
{
 uint8_t mode; ///< System mode, see UALBERTA_AUTOPILOT_MODE ENUM
 uint8_t gx3_mode; ///< Navigation mode, see UALBERTA_GX3_MODE ENUM
 uint8_t pilot_mode; ///< Pilot mode, see UALBERTA_PILOT_MODE
 uint8_t control_mode; ///< Controller Mode
 uint8_t attitude_source; ///< 
} mavlink_ualberta_sys_status_t;

#define MAVLINK_MSG_ID_UALBERTA_SYS_STATUS_LEN 5
#define MAVLINK_MSG_ID_222_LEN 5



#define MAVLINK_MESSAGE_INFO_UALBERTA_SYS_STATUS { \
	"UALBERTA_SYS_STATUS", \
	5, \
	{  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ualberta_sys_status_t, mode) }, \
         { "gx3_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ualberta_sys_status_t, gx3_mode) }, \
         { "pilot_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ualberta_sys_status_t, pilot_mode) }, \
         { "control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ualberta_sys_status_t, control_mode) }, \
         { "attitude_source", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ualberta_sys_status_t, attitude_source) }, \
         } \
}


/**
 * @brief Pack a ualberta_sys_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode System mode, see UALBERTA_AUTOPILOT_MODE ENUM
 * @param gx3_mode Navigation mode, see UALBERTA_GX3_MODE ENUM
 * @param pilot_mode Pilot mode, see UALBERTA_PILOT_MODE
 * @param control_mode Controller Mode
 * @param attitude_source 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ualberta_sys_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t mode, uint8_t gx3_mode, uint8_t pilot_mode, uint8_t control_mode, uint8_t attitude_source)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[5];
	_mav_put_uint8_t(buf, 0, mode);
	_mav_put_uint8_t(buf, 1, gx3_mode);
	_mav_put_uint8_t(buf, 2, pilot_mode);
	_mav_put_uint8_t(buf, 3, control_mode);
	_mav_put_uint8_t(buf, 4, attitude_source);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 5);
#else
	mavlink_ualberta_sys_status_t packet;
	packet.mode = mode;
	packet.gx3_mode = gx3_mode;
	packet.pilot_mode = pilot_mode;
	packet.control_mode = control_mode;
	packet.attitude_source = attitude_source;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 5);
#endif

	msg->msgid = MAVLINK_MSG_ID_UALBERTA_SYS_STATUS;
	return mavlink_finalize_message(msg, system_id, component_id, 5, 71);
}

/**
 * @brief Pack a ualberta_sys_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param mode System mode, see UALBERTA_AUTOPILOT_MODE ENUM
 * @param gx3_mode Navigation mode, see UALBERTA_GX3_MODE ENUM
 * @param pilot_mode Pilot mode, see UALBERTA_PILOT_MODE
 * @param control_mode Controller Mode
 * @param attitude_source 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ualberta_sys_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t mode,uint8_t gx3_mode,uint8_t pilot_mode,uint8_t control_mode,uint8_t attitude_source)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[5];
	_mav_put_uint8_t(buf, 0, mode);
	_mav_put_uint8_t(buf, 1, gx3_mode);
	_mav_put_uint8_t(buf, 2, pilot_mode);
	_mav_put_uint8_t(buf, 3, control_mode);
	_mav_put_uint8_t(buf, 4, attitude_source);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 5);
#else
	mavlink_ualberta_sys_status_t packet;
	packet.mode = mode;
	packet.gx3_mode = gx3_mode;
	packet.pilot_mode = pilot_mode;
	packet.control_mode = control_mode;
	packet.attitude_source = attitude_source;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 5);
#endif

	msg->msgid = MAVLINK_MSG_ID_UALBERTA_SYS_STATUS;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 5, 71);
}

/**
 * @brief Encode a ualberta_sys_status struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ualberta_sys_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ualberta_sys_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ualberta_sys_status_t* ualberta_sys_status)
{
	return mavlink_msg_ualberta_sys_status_pack(system_id, component_id, msg, ualberta_sys_status->mode, ualberta_sys_status->gx3_mode, ualberta_sys_status->pilot_mode, ualberta_sys_status->control_mode, ualberta_sys_status->attitude_source);
}

/**
 * @brief Send a ualberta_sys_status message
 * @param chan MAVLink channel to send the message
 *
 * @param mode System mode, see UALBERTA_AUTOPILOT_MODE ENUM
 * @param gx3_mode Navigation mode, see UALBERTA_GX3_MODE ENUM
 * @param pilot_mode Pilot mode, see UALBERTA_PILOT_MODE
 * @param control_mode Controller Mode
 * @param attitude_source 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ualberta_sys_status_send(mavlink_channel_t chan, uint8_t mode, uint8_t gx3_mode, uint8_t pilot_mode, uint8_t control_mode, uint8_t attitude_source)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[5];
	_mav_put_uint8_t(buf, 0, mode);
	_mav_put_uint8_t(buf, 1, gx3_mode);
	_mav_put_uint8_t(buf, 2, pilot_mode);
	_mav_put_uint8_t(buf, 3, control_mode);
	_mav_put_uint8_t(buf, 4, attitude_source);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UALBERTA_SYS_STATUS, buf, 5, 71);
#else
	mavlink_ualberta_sys_status_t packet;
	packet.mode = mode;
	packet.gx3_mode = gx3_mode;
	packet.pilot_mode = pilot_mode;
	packet.control_mode = control_mode;
	packet.attitude_source = attitude_source;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UALBERTA_SYS_STATUS, (const char *)&packet, 5, 71);
#endif
}

#endif

// MESSAGE UALBERTA_SYS_STATUS UNPACKING


/**
 * @brief Get field mode from ualberta_sys_status message
 *
 * @return System mode, see UALBERTA_AUTOPILOT_MODE ENUM
 */
static inline uint8_t mavlink_msg_ualberta_sys_status_get_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field gx3_mode from ualberta_sys_status message
 *
 * @return Navigation mode, see UALBERTA_GX3_MODE ENUM
 */
static inline uint8_t mavlink_msg_ualberta_sys_status_get_gx3_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field pilot_mode from ualberta_sys_status message
 *
 * @return Pilot mode, see UALBERTA_PILOT_MODE
 */
static inline uint8_t mavlink_msg_ualberta_sys_status_get_pilot_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field control_mode from ualberta_sys_status message
 *
 * @return Controller Mode
 */
static inline uint8_t mavlink_msg_ualberta_sys_status_get_control_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field attitude_source from ualberta_sys_status message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_ualberta_sys_status_get_attitude_source(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a ualberta_sys_status message into a struct
 *
 * @param msg The message to decode
 * @param ualberta_sys_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_ualberta_sys_status_decode(const mavlink_message_t* msg, mavlink_ualberta_sys_status_t* ualberta_sys_status)
{
#if MAVLINK_NEED_BYTE_SWAP
	ualberta_sys_status->mode = mavlink_msg_ualberta_sys_status_get_mode(msg);
	ualberta_sys_status->gx3_mode = mavlink_msg_ualberta_sys_status_get_gx3_mode(msg);
	ualberta_sys_status->pilot_mode = mavlink_msg_ualberta_sys_status_get_pilot_mode(msg);
	ualberta_sys_status->control_mode = mavlink_msg_ualberta_sys_status_get_control_mode(msg);
	ualberta_sys_status->attitude_source = mavlink_msg_ualberta_sys_status_get_attitude_source(msg);
#else
	memcpy(ualberta_sys_status, _MAV_PAYLOAD(msg), 5);
#endif
}
