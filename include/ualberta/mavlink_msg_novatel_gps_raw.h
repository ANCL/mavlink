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

} mavlink_novatel_gps_raw_t;



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
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_novatel_gps_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, float pos_type, float pos_x, float pos_y, float pos_z, float vel_type, float vel_x, float vel_y, float vel_z)
{
	uint16_t i = 0;
	msg->msgid = MAVLINK_MSG_ID_NOVATEL_GPS_RAW;

	i += put_float_by_index(pos_type, i, msg->payload); // Position solution type
	i += put_float_by_index(pos_x, i, msg->payload); // 
	i += put_float_by_index(pos_y, i, msg->payload); // 
	i += put_float_by_index(pos_z, i, msg->payload); // 
	i += put_float_by_index(vel_type, i, msg->payload); // Velocity solution type
	i += put_float_by_index(vel_x, i, msg->payload); // 
	i += put_float_by_index(vel_y, i, msg->payload); // 
	i += put_float_by_index(vel_z, i, msg->payload); // 

	return mavlink_finalize_message(msg, system_id, component_id, i);
}

/**
 * @brief Pack a novatel_gps_raw message
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
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_novatel_gps_raw_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, float pos_type, float pos_x, float pos_y, float pos_z, float vel_type, float vel_x, float vel_y, float vel_z)
{
	uint16_t i = 0;
	msg->msgid = MAVLINK_MSG_ID_NOVATEL_GPS_RAW;

	i += put_float_by_index(pos_type, i, msg->payload); // Position solution type
	i += put_float_by_index(pos_x, i, msg->payload); // 
	i += put_float_by_index(pos_y, i, msg->payload); // 
	i += put_float_by_index(pos_z, i, msg->payload); // 
	i += put_float_by_index(vel_type, i, msg->payload); // Velocity solution type
	i += put_float_by_index(vel_x, i, msg->payload); // 
	i += put_float_by_index(vel_y, i, msg->payload); // 
	i += put_float_by_index(vel_z, i, msg->payload); // 

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, i);
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
	return mavlink_msg_novatel_gps_raw_pack(system_id, component_id, msg, novatel_gps_raw->pos_type, novatel_gps_raw->pos_x, novatel_gps_raw->pos_y, novatel_gps_raw->pos_z, novatel_gps_raw->vel_type, novatel_gps_raw->vel_x, novatel_gps_raw->vel_y, novatel_gps_raw->vel_z);
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
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_novatel_gps_raw_send(mavlink_channel_t chan, float pos_type, float pos_x, float pos_y, float pos_z, float vel_type, float vel_x, float vel_y, float vel_z)
{
	mavlink_message_t msg;
	mavlink_msg_novatel_gps_raw_pack_chan(mavlink_system.sysid, mavlink_system.compid, chan, &msg, pos_type, pos_x, pos_y, pos_z, vel_type, vel_x, vel_y, vel_z);
	mavlink_send_uart(chan, &msg);
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
	generic_32bit r;
	r.b[3] = (msg->payload)[0];
	r.b[2] = (msg->payload)[1];
	r.b[1] = (msg->payload)[2];
	r.b[0] = (msg->payload)[3];
	return (float)r.f;
}

/**
 * @brief Get field pos_x from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_pos_x(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(float))[0];
	r.b[2] = (msg->payload+sizeof(float))[1];
	r.b[1] = (msg->payload+sizeof(float))[2];
	r.b[0] = (msg->payload+sizeof(float))[3];
	return (float)r.f;
}

/**
 * @brief Get field pos_y from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_pos_y(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(float)+sizeof(float))[0];
	r.b[2] = (msg->payload+sizeof(float)+sizeof(float))[1];
	r.b[1] = (msg->payload+sizeof(float)+sizeof(float))[2];
	r.b[0] = (msg->payload+sizeof(float)+sizeof(float))[3];
	return (float)r.f;
}

/**
 * @brief Get field pos_z from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_pos_z(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float))[0];
	r.b[2] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float))[1];
	r.b[1] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float))[2];
	r.b[0] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float))[3];
	return (float)r.f;
}

/**
 * @brief Get field vel_type from novatel_gps_raw message
 *
 * @return Velocity solution type
 */
static inline float mavlink_msg_novatel_gps_raw_get_vel_type(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[0];
	r.b[2] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[1];
	r.b[1] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[2];
	r.b[0] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[3];
	return (float)r.f;
}

/**
 * @brief Get field vel_x from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_vel_x(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[0];
	r.b[2] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[1];
	r.b[1] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[2];
	r.b[0] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[3];
	return (float)r.f;
}

/**
 * @brief Get field vel_y from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_vel_y(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[0];
	r.b[2] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[1];
	r.b[1] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[2];
	r.b[0] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[3];
	return (float)r.f;
}

/**
 * @brief Get field vel_z from novatel_gps_raw message
 *
 * @return 
 */
static inline float mavlink_msg_novatel_gps_raw_get_vel_z(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[0];
	r.b[2] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[1];
	r.b[1] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[2];
	r.b[0] = (msg->payload+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float)+sizeof(float))[3];
	return (float)r.f;
}

/**
 * @brief Decode a novatel_gps_raw message into a struct
 *
 * @param msg The message to decode
 * @param novatel_gps_raw C-struct to decode the message contents into
 */
static inline void mavlink_msg_novatel_gps_raw_decode(const mavlink_message_t* msg, mavlink_novatel_gps_raw_t* novatel_gps_raw)
{
	novatel_gps_raw->pos_type = mavlink_msg_novatel_gps_raw_get_pos_type(msg);
	novatel_gps_raw->pos_x = mavlink_msg_novatel_gps_raw_get_pos_x(msg);
	novatel_gps_raw->pos_y = mavlink_msg_novatel_gps_raw_get_pos_y(msg);
	novatel_gps_raw->pos_z = mavlink_msg_novatel_gps_raw_get_pos_z(msg);
	novatel_gps_raw->vel_type = mavlink_msg_novatel_gps_raw_get_vel_type(msg);
	novatel_gps_raw->vel_x = mavlink_msg_novatel_gps_raw_get_vel_x(msg);
	novatel_gps_raw->vel_y = mavlink_msg_novatel_gps_raw_get_vel_y(msg);
	novatel_gps_raw->vel_z = mavlink_msg_novatel_gps_raw_get_vel_z(msg);
}
