// MESSAGE UALBERTA_POSITION PACKING

#define MAVLINK_MSG_ID_UALBERTA_POSITION 224

typedef struct __mavlink_ualberta_position_t
{
 float llh_pos[3]; ///< Postion in lat long height
 float ned_pos[3]; ///< Position in local tangent frame
 float ned_vel[3]; ///< Velocity in local tangent frame
 float ned_origin[3]; ///< Local tangent frame origin in LLH
 uint32_t time_boot_ms; ///< 
} mavlink_ualberta_position_t;

#define MAVLINK_MSG_ID_UALBERTA_POSITION_LEN 52
#define MAVLINK_MSG_ID_224_LEN 52

#define MAVLINK_MSG_UALBERTA_POSITION_FIELD_LLH_POS_LEN 3
#define MAVLINK_MSG_UALBERTA_POSITION_FIELD_NED_POS_LEN 3
#define MAVLINK_MSG_UALBERTA_POSITION_FIELD_NED_VEL_LEN 3
#define MAVLINK_MSG_UALBERTA_POSITION_FIELD_NED_ORIGIN_LEN 3

#define MAVLINK_MESSAGE_INFO_UALBERTA_POSITION { \
	"UALBERTA_POSITION", \
	5, \
	{  { "llh_pos", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_ualberta_position_t, llh_pos) }, \
         { "ned_pos", NULL, MAVLINK_TYPE_FLOAT, 3, 12, offsetof(mavlink_ualberta_position_t, ned_pos) }, \
         { "ned_vel", NULL, MAVLINK_TYPE_FLOAT, 3, 24, offsetof(mavlink_ualberta_position_t, ned_vel) }, \
         { "ned_origin", NULL, MAVLINK_TYPE_FLOAT, 3, 36, offsetof(mavlink_ualberta_position_t, ned_origin) }, \
         { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 48, offsetof(mavlink_ualberta_position_t, time_boot_ms) }, \
         } \
}


/**
 * @brief Pack a ualberta_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param llh_pos Postion in lat long height
 * @param ned_pos Position in local tangent frame
 * @param ned_vel Velocity in local tangent frame
 * @param ned_origin Local tangent frame origin in LLH
 * @param time_boot_ms 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ualberta_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const float *llh_pos, const float *ned_pos, const float *ned_vel, const float *ned_origin, uint32_t time_boot_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[52];
	_mav_put_uint32_t(buf, 48, time_boot_ms);
	_mav_put_float_array(buf, 0, llh_pos, 3);
	_mav_put_float_array(buf, 12, ned_pos, 3);
	_mav_put_float_array(buf, 24, ned_vel, 3);
	_mav_put_float_array(buf, 36, ned_origin, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 52);
#else
	mavlink_ualberta_position_t packet;
	packet.time_boot_ms = time_boot_ms;
	mav_array_memcpy(packet.llh_pos, llh_pos, sizeof(float)*3);
	mav_array_memcpy(packet.ned_pos, ned_pos, sizeof(float)*3);
	mav_array_memcpy(packet.ned_vel, ned_vel, sizeof(float)*3);
	mav_array_memcpy(packet.ned_origin, ned_origin, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 52);
#endif

	msg->msgid = MAVLINK_MSG_ID_UALBERTA_POSITION;
	return mavlink_finalize_message(msg, system_id, component_id, 52, 124);
}

/**
 * @brief Pack a ualberta_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param llh_pos Postion in lat long height
 * @param ned_pos Position in local tangent frame
 * @param ned_vel Velocity in local tangent frame
 * @param ned_origin Local tangent frame origin in LLH
 * @param time_boot_ms 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ualberta_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const float *llh_pos,const float *ned_pos,const float *ned_vel,const float *ned_origin,uint32_t time_boot_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[52];
	_mav_put_uint32_t(buf, 48, time_boot_ms);
	_mav_put_float_array(buf, 0, llh_pos, 3);
	_mav_put_float_array(buf, 12, ned_pos, 3);
	_mav_put_float_array(buf, 24, ned_vel, 3);
	_mav_put_float_array(buf, 36, ned_origin, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 52);
#else
	mavlink_ualberta_position_t packet;
	packet.time_boot_ms = time_boot_ms;
	mav_array_memcpy(packet.llh_pos, llh_pos, sizeof(float)*3);
	mav_array_memcpy(packet.ned_pos, ned_pos, sizeof(float)*3);
	mav_array_memcpy(packet.ned_vel, ned_vel, sizeof(float)*3);
	mav_array_memcpy(packet.ned_origin, ned_origin, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 52);
#endif

	msg->msgid = MAVLINK_MSG_ID_UALBERTA_POSITION;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 52, 124);
}

/**
 * @brief Encode a ualberta_position struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ualberta_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ualberta_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ualberta_position_t* ualberta_position)
{
	return mavlink_msg_ualberta_position_pack(system_id, component_id, msg, ualberta_position->llh_pos, ualberta_position->ned_pos, ualberta_position->ned_vel, ualberta_position->ned_origin, ualberta_position->time_boot_ms);
}

/**
 * @brief Send a ualberta_position message
 * @param chan MAVLink channel to send the message
 *
 * @param llh_pos Postion in lat long height
 * @param ned_pos Position in local tangent frame
 * @param ned_vel Velocity in local tangent frame
 * @param ned_origin Local tangent frame origin in LLH
 * @param time_boot_ms 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ualberta_position_send(mavlink_channel_t chan, const float *llh_pos, const float *ned_pos, const float *ned_vel, const float *ned_origin, uint32_t time_boot_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[52];
	_mav_put_uint32_t(buf, 48, time_boot_ms);
	_mav_put_float_array(buf, 0, llh_pos, 3);
	_mav_put_float_array(buf, 12, ned_pos, 3);
	_mav_put_float_array(buf, 24, ned_vel, 3);
	_mav_put_float_array(buf, 36, ned_origin, 3);
	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UALBERTA_POSITION, buf, 52, 124);
#else
	mavlink_ualberta_position_t packet;
	packet.time_boot_ms = time_boot_ms;
	mav_array_memcpy(packet.llh_pos, llh_pos, sizeof(float)*3);
	mav_array_memcpy(packet.ned_pos, ned_pos, sizeof(float)*3);
	mav_array_memcpy(packet.ned_vel, ned_vel, sizeof(float)*3);
	mav_array_memcpy(packet.ned_origin, ned_origin, sizeof(float)*3);
	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UALBERTA_POSITION, (const char *)&packet, 52, 124);
#endif
}

#endif

// MESSAGE UALBERTA_POSITION UNPACKING


/**
 * @brief Get field llh_pos from ualberta_position message
 *
 * @return Postion in lat long height
 */
static inline uint16_t mavlink_msg_ualberta_position_get_llh_pos(const mavlink_message_t* msg, float *llh_pos)
{
	return _MAV_RETURN_float_array(msg, llh_pos, 3,  0);
}

/**
 * @brief Get field ned_pos from ualberta_position message
 *
 * @return Position in local tangent frame
 */
static inline uint16_t mavlink_msg_ualberta_position_get_ned_pos(const mavlink_message_t* msg, float *ned_pos)
{
	return _MAV_RETURN_float_array(msg, ned_pos, 3,  12);
}

/**
 * @brief Get field ned_vel from ualberta_position message
 *
 * @return Velocity in local tangent frame
 */
static inline uint16_t mavlink_msg_ualberta_position_get_ned_vel(const mavlink_message_t* msg, float *ned_vel)
{
	return _MAV_RETURN_float_array(msg, ned_vel, 3,  24);
}

/**
 * @brief Get field ned_origin from ualberta_position message
 *
 * @return Local tangent frame origin in LLH
 */
static inline uint16_t mavlink_msg_ualberta_position_get_ned_origin(const mavlink_message_t* msg, float *ned_origin)
{
	return _MAV_RETURN_float_array(msg, ned_origin, 3,  36);
}

/**
 * @brief Get field time_boot_ms from ualberta_position message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_ualberta_position_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  48);
}

/**
 * @brief Decode a ualberta_position message into a struct
 *
 * @param msg The message to decode
 * @param ualberta_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_ualberta_position_decode(const mavlink_message_t* msg, mavlink_ualberta_position_t* ualberta_position)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_ualberta_position_get_llh_pos(msg, ualberta_position->llh_pos);
	mavlink_msg_ualberta_position_get_ned_pos(msg, ualberta_position->ned_pos);
	mavlink_msg_ualberta_position_get_ned_vel(msg, ualberta_position->ned_vel);
	mavlink_msg_ualberta_position_get_ned_origin(msg, ualberta_position->ned_origin);
	ualberta_position->time_boot_ms = mavlink_msg_ualberta_position_get_time_boot_ms(msg);
#else
	memcpy(ualberta_position, _MAV_PAYLOAD(msg), 52);
#endif
}
