// MESSAGE SYS_STATUS PACKING

#define MAVLINK_MSG_ID_SYS_STATUS 103

typedef struct __sys_status_t 
{
	uint8_t mode; ///< System mode
	uint8_t status; ///< System status flag
	uint16_t vbat; ///< Battery voltage
	uint8_t motor_block; ///< Motor block status flag
	uint16_t packet_drop; ///< Dropped packets

} sys_status_t;

/**
 * @brief Send a sys_status message
 *
 * @param mode System mode
 * @param status System status flag
 * @param vbat Battery voltage
 * @param motor_block Motor block status flag
 * @param packet_drop Dropped packets
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t message_sys_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, uint8_t mode, uint8_t status, uint16_t vbat, uint8_t motor_block, uint16_t packet_drop)
{
	msg->msgid = MAVLINK_MSG_ID_SYS_STATUS;
	uint16_t i = 0;

	i += put_uint8_t_by_index(mode, i, msg->payload); //System mode
	i += put_uint8_t_by_index(status, i, msg->payload); //System status flag
	i += put_uint16_t_by_index(vbat, i, msg->payload); //Battery voltage
	i += put_uint8_t_by_index(motor_block, i, msg->payload); //Motor block status flag
	i += put_uint16_t_by_index(packet_drop, i, msg->payload); //Dropped packets

	return finalize_message(msg, system_id, component_id, i);
}

static inline uint16_t message_sys_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const sys_status_t* sys_status)
{
	return message_sys_status_pack(system_id, component_id, msg, sys_status->mode, sys_status->status, sys_status->vbat, sys_status->motor_block, sys_status->packet_drop);
}

#if !defined(_WIN32) && !defined(__linux) && !defined(__APPLE__)

#include "global_data.h"

static inline void message_sys_status_send(mavlink_channel_t chan, uint8_t mode, uint8_t status, uint16_t vbat, uint8_t motor_block, uint16_t packet_drop)
{
	mavlink_message_t msg;
	message_sys_status_pack(global_data.param[PARAM_SYSTEM_ID], global_data.param[PARAM_COMPONENT_ID], &msg, mode, status, vbat, motor_block, packet_drop);
	mavlink_send_uart(chan, &msg);
}

#endif
// MESSAGE SYS_STATUS UNPACKING

/**
 * @brief Get field mode from sys_status message
 *
 * @return System mode
 */
static inline uint8_t message_sys_status_get_mode(const mavlink_message_t* msg)
{
	return (uint8_t)(msg->payload)[0];
}

/**
 * @brief Get field status from sys_status message
 *
 * @return System status flag
 */
static inline uint8_t message_sys_status_get_status(const mavlink_message_t* msg)
{
	return (uint8_t)(msg->payload+sizeof(uint8_t))[0];
}

/**
 * @brief Get field vbat from sys_status message
 *
 * @return Battery voltage
 */
static inline uint16_t message_sys_status_get_vbat(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(uint8_t)+sizeof(uint8_t))[0];
	r.b[1] = (msg->payload+sizeof(uint8_t)+sizeof(uint8_t))[1];
	return (uint16_t)r.s;
}

/**
 * @brief Get field motor_block from sys_status message
 *
 * @return Motor block status flag
 */
static inline uint8_t message_sys_status_get_motor_block(const mavlink_message_t* msg)
{
	return (uint8_t)(msg->payload+sizeof(uint8_t)+sizeof(uint8_t)+sizeof(uint16_t))[0];
}

/**
 * @brief Get field packet_drop from sys_status message
 *
 * @return Dropped packets
 */
static inline uint16_t message_sys_status_get_packet_drop(const mavlink_message_t* msg)
{
	generic_32bit r;
	r.b[3] = (msg->payload+sizeof(uint8_t)+sizeof(uint8_t)+sizeof(uint16_t)+sizeof(uint8_t))[0];
	r.b[1] = (msg->payload+sizeof(uint8_t)+sizeof(uint8_t)+sizeof(uint16_t)+sizeof(uint8_t))[1];
	return (uint16_t)r.s;
}

static inline void message_sys_status_decode(const mavlink_message_t* msg, sys_status_t* sys_status)
{
	sys_status->mode = message_sys_status_get_mode(msg);
	sys_status->status = message_sys_status_get_status(msg);
	sys_status->vbat = message_sys_status_get_vbat(msg);
	sys_status->motor_block = message_sys_status_get_motor_block(msg);
	sys_status->packet_drop = message_sys_status_get_packet_drop(msg);
}