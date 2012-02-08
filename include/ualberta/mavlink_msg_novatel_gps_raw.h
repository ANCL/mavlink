// MESSAGE NOVATEL_GPS_RAW PACKING

#define MAVLINK_MSG_ID_NOVATEL_GPS_RAW 223

typedef struct __mavlink_novatel_gps_raw_t
{
 float pos_type; ///< Position solution type
 float pos_x; ///< 
 float pos_y; ///< 
 float pos_z; ///< 
 float vel_type; ///< Velocity solution type
 float vel_x; ///< 
 float vel_y; ///< 
 float vel_z; ///< 
 uint32_t time_boot_ms; ///< 
} mavlink_novatel_gps_raw_t;

#define MAVLINK_MSG_ID_NOVATEL_GPS_RAW_LEN 36
#define MAVLINK_MSG_ID_223_LEN 36



#define MAVLINK_MESSAGE_INFO_NOVATEL_GPS_RAW { \
	"NOVATEL_GPS_RAW", \
	9, \
	{  { "pos_type", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_novatel_gps_raw_t, pos_type) }, \
         { "pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_novatel_gps_raw_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_novatel_gps_raw_t, pos_y) }, \
         { "pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_novatel_gps_raw_t, pos_z) }, \
         { "vel_type", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_novatel_gps_raw_t, vel_type) }, \
         { "vel_x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_novatel_gps_raw_t, vel_x) }, \
         { "vel_y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_novatel_gps_raw_t, vel_y) }, \
         { "vel_z", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_novatel_gps_raw_t, vel_z) }, \
         { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_novatel_gps_raw_t, time_boot_ms) }, \
         } \
}


/**
 * @brief Pack a novatel_gps_raw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pos_type Position solution type
 * @param pos_x 
 * @param pos_y 
 * @param pos_z 
 * @param vel_type Velocity solution type
 * @param vel_x 
 * @param vel_y 
 * @param vel_z 
 * @param time_boot_ms 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_novatel_gps_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float pos_type, float pos_x, float pos_y, float pos_z, float vel_type, float vel_x, float vel_y, float vel_z, uint32_t time_boot_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[36];
	_mav_put_float(buf, 0, pos_type);
	_mav_put_float(buf, 4, pos_x);
	_mav_put_float(buf, 8, pos_y);
	_mav_put_float(buf, 12, pos_z);
	_mav_put_float(buf, 16, vel_type);
	_mav_put_float(buf, 20, vel_x);
	_mav_put_float(buf, 24, vel_y);
	_mav_put_float(buf, 28, vel_z);
	_mav_put_uint32_t(buf, 32, time_boot_ms);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 36);
#else
	mavlink_novatel_gps_raw_t packet;
	packet.pos_type = pos_type;
	packet.pos_x = pos_x;
	packet.pos_y = pos_y;
	packet.pos_z = pos_z;
	packet.vel_type = vel_type;
	packet.vel_x = vel_x;
	packet.vel_y = vel_y;
	packet.vel_z = vel_z;
	packet.time_boot_ms = time_boot_ms;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 36);
#endif

	msg->msgid = MAVLINK_MSG_ID_NOVATEL_GPS_RAW;
	return mavlink_finalize_message(msg, system_id, component_id, 36, 243);
}

/**
 * @brief Pack a novatel_gps_raw message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param pos_type Position solution type
 * @param pos_x 
 * @param pos_y 
 * @param pos_z 
 * @param vel_type Velocity solution type
 * @param vel_x 
 * @param vel_y 
 * @param vel_z 
 * @param time_boot_ms 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_novatel_gps_raw_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float pos_type,float pos_x,float pos_y,float pos_z,float vel_type,float vel_x,float vel_y,float vel_z,uint32_t time_boot_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[36];
	_mav_put_float(buf, 0, pos_type);
	_mav_put_float(buf, 4, pos_x);
	_mav_put_float(buf, 8, pos_y);
	_mav_put_float(buf, 12, pos_z);
	_mav_put_float(buf, 16, vel_type);
	_mav_put_float(buf, 20, vel_x);
	_mav_put_float(buf, 24, vel_y);
	_mav_put_float(buf, 28, vel_z);
	_mav_put_uint32_t(buf, 32, time_boot_ms);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 36);
#else
	mavlink_novatel_gps_raw_t packet;
	packet.pos_type = pos_type;
	packet.pos_x = pos_x;
	packet.pos_y = pos_y;
	packet.pos_z = pos_z;
	packet.vel_type = vel_type;
	packet.vel_x = vel_x;
	packet.vel_y = vel_y;
	packet.vel_z = vel_z;
	packet.time_boot_ms = time_boot_ms;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 36);
#endif

	msg->msgid = MAVLINK_MSG_ID_NOVATEL_GPS_RAW;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 36, 243);
}

/**
 * @brief Encode a novatel_gps_raw struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param novatel_gps_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_novatel_gps_raw_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_novatel_gps_raw_t* novatel_gps_raw)
{
	return mavlink_msg_novatel_gps_raw_pack(system_id, component_id, msg, novatel_gps_raw->pos_type, novatel_gps_raw->pos_x, novatel_gps_raw->pos_y, novatel_gps_raw->pos_z, novatel_gps_raw->vel_type, novatel_gps_raw->vel_x, novatel_gps_raw->vel_y, novatel_gps_raw->vel_z, novatel_gps_raw->time_boot_ms);
}

/**
 * @brief Send a novatel_gps_raw message
 * @param chan MAVLink channel to send the message
 *
 * @param pos_type Position solution type
 * @param pos_x 
 * @param pos_y 
 * @param pos_z 
 * @param vel_type Velocity solution type
 * @param vel_x 
 * @param vel_y 
 * @param vel_z 
 * @param time_boot_ms 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_novatel_gps_raw_send(mavlink_channel_t chan, float pos_type, float pos_x, float pos_y, float pos_z, float vel_type, float vel_x, float vel_y, float vel_z, uint32_t time_boot_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[36];
	_mav_put_float(buf, 0, pos_type);
	_mav_put_float(buf, 4, pos_x);
	_mav_put_float(buf, 8, pos_y);
	_mav_put_float(buf, 12, pos_z);
	_mav_put_float(buf, 16, vel_type);
	_mav_put_float(buf, 20, vel_x);
	_mav_put_float(buf, 24, vel_y);
	_mav_put_float(buf, 28, vel_z);
	_mav_put_uint32_t(buf, 32, time_boot_ms);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NOVATEL_GPS_RAW, buf, 36, 243);
#else
	mavlink_novatel_gps_raw_t packet;
	packet.pos_type = pos_type;
	packet.pos_x = pos_x;
	packet.pos_y = pos_y;
	packet.pos_z = pos_z;
	packet.vel_type = vel_type;
	packet.vel_x = vel_x;
	packet.vel_y = vel_y;
	packet.vel_z = vel_z;
	packet.time_boot_ms = time_boot_ms;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NOVATEL_GPS_RAW, (const char *)&packet, 36, 243);
#endif
}

#endif

// MESSAGE NOVATEL_GPS_RAW UNPACKING


/**
 * @brief Get field pos_type from novatel_gps_raw message
 *
 * @return Position solution type
 */
static inline float mavlink_msg_novatel_gps_raw_get_pos_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pos_x from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_pos_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pos_y from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_pos_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pos_z from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_pos_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vel_type from novatel_gps_raw message
 *
 * @return Velocity solution type
 */
static inline float mavlink_msg_novatel_gps_raw_get_vel_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vel_x from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_vel_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vel_y from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_vel_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field vel_z from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_vel_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field time_boot_ms from novatel_gps_raw message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_novatel_gps_raw_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Decode a novatel_gps_raw message into a struct
 *
 * @param msg The message to decode
 * @param novatel_gps_raw C-struct to decode the message contents into
 */
static inline void mavlink_msg_novatel_gps_raw_decode(const mavlink_message_t* msg, mavlink_novatel_gps_raw_t* novatel_gps_raw)
{
#if MAVLINK_NEED_BYTE_SWAP
	novatel_gps_raw->pos_type = mavlink_msg_novatel_gps_raw_get_pos_type(msg);
	novatel_gps_raw->pos_x = mavlink_msg_novatel_gps_raw_get_pos_x(msg);
	novatel_gps_raw->pos_y = mavlink_msg_novatel_gps_raw_get_pos_y(msg);
	novatel_gps_raw->pos_z = mavlink_msg_novatel_gps_raw_get_pos_z(msg);
	novatel_gps_raw->vel_type = mavlink_msg_novatel_gps_raw_get_vel_type(msg);
	novatel_gps_raw->vel_x = mavlink_msg_novatel_gps_raw_get_vel_x(msg);
	novatel_gps_raw->vel_y = mavlink_msg_novatel_gps_raw_get_vel_y(msg);
	novatel_gps_raw->vel_z = mavlink_msg_novatel_gps_raw_get_vel_z(msg);
	novatel_gps_raw->time_boot_ms = mavlink_msg_novatel_gps_raw_get_time_boot_ms(msg);
#else
	memcpy(novatel_gps_raw, _MAV_PAYLOAD(msg), 36);
#endif
}
