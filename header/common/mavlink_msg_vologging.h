#pragma once
// MESSAGE VOLOGGING PACKING

#define MAVLINK_MSG_ID_VOLOGGING 270

MAVPACKED(
typedef struct __mavlink_vologging_t {
 uint32_t time_boot_ms; /*< Timestamp in milliseconds since system boot*/
 float port_A_1[3]; /*< omega*/
 float port_A_2[3]; /*< omega*/
 float port_A_3[3]; /*< omega*/
 float port_A_4[3]; /*< omega*/
 float port_A_5[3]; /*< omega*/
 float port_A_6[3]; /*< omega*/
}) mavlink_vologging_t;

#define MAVLINK_MSG_ID_VOLOGGING_LEN 76
#define MAVLINK_MSG_ID_VOLOGGING_MIN_LEN 76
#define MAVLINK_MSG_ID_270_LEN 76
#define MAVLINK_MSG_ID_270_MIN_LEN 76

#define MAVLINK_MSG_ID_VOLOGGING_CRC 79
#define MAVLINK_MSG_ID_270_CRC 79

#define MAVLINK_MSG_VOLOGGING_FIELD_PORT_A_1_LEN 3
#define MAVLINK_MSG_VOLOGGING_FIELD_PORT_A_2_LEN 3
#define MAVLINK_MSG_VOLOGGING_FIELD_PORT_A_3_LEN 3
#define MAVLINK_MSG_VOLOGGING_FIELD_PORT_A_4_LEN 3
#define MAVLINK_MSG_VOLOGGING_FIELD_PORT_A_5_LEN 3
#define MAVLINK_MSG_VOLOGGING_FIELD_PORT_A_6_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLOGGING { \
    270, \
    "VOLOGGING", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_vologging_t, time_boot_ms) }, \
         { "port_A_1", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_vologging_t, port_A_1) }, \
         { "port_A_2", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_vologging_t, port_A_2) }, \
         { "port_A_3", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_vologging_t, port_A_3) }, \
         { "port_A_4", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_vologging_t, port_A_4) }, \
         { "port_A_5", NULL, MAVLINK_TYPE_FLOAT, 3, 52, offsetof(mavlink_vologging_t, port_A_5) }, \
         { "port_A_6", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_vologging_t, port_A_6) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLOGGING { \
    "VOLOGGING", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_vologging_t, time_boot_ms) }, \
         { "port_A_1", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_vologging_t, port_A_1) }, \
         { "port_A_2", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_vologging_t, port_A_2) }, \
         { "port_A_3", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_vologging_t, port_A_3) }, \
         { "port_A_4", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_vologging_t, port_A_4) }, \
         { "port_A_5", NULL, MAVLINK_TYPE_FLOAT, 3, 52, offsetof(mavlink_vologging_t, port_A_5) }, \
         { "port_A_6", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_vologging_t, port_A_6) }, \
         } \
}
#endif

/**
 * @brief Pack a vologging message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param port_A_1 omega
 * @param port_A_2 omega
 * @param port_A_3 omega
 * @param port_A_4 omega
 * @param port_A_5 omega
 * @param port_A_6 omega
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vologging_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, const float *port_A_1, const float *port_A_2, const float *port_A_3, const float *port_A_4, const float *port_A_5, const float *port_A_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLOGGING_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, port_A_1, 3);
    _mav_put_float_array(buf, 16, port_A_2, 3);
    _mav_put_float_array(buf, 28, port_A_3, 3);
    _mav_put_float_array(buf, 40, port_A_4, 3);
    _mav_put_float_array(buf, 52, port_A_5, 3);
    _mav_put_float_array(buf, 64, port_A_6, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLOGGING_LEN);
#else
    mavlink_vologging_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.port_A_1, port_A_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_2, port_A_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_3, port_A_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_4, port_A_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_5, port_A_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_6, port_A_6, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLOGGING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLOGGING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLOGGING_MIN_LEN, MAVLINK_MSG_ID_VOLOGGING_LEN, MAVLINK_MSG_ID_VOLOGGING_CRC);
}

/**
 * @brief Pack a vologging message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param port_A_1 omega
 * @param port_A_2 omega
 * @param port_A_3 omega
 * @param port_A_4 omega
 * @param port_A_5 omega
 * @param port_A_6 omega
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vologging_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,const float *port_A_1,const float *port_A_2,const float *port_A_3,const float *port_A_4,const float *port_A_5,const float *port_A_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLOGGING_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, port_A_1, 3);
    _mav_put_float_array(buf, 16, port_A_2, 3);
    _mav_put_float_array(buf, 28, port_A_3, 3);
    _mav_put_float_array(buf, 40, port_A_4, 3);
    _mav_put_float_array(buf, 52, port_A_5, 3);
    _mav_put_float_array(buf, 64, port_A_6, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLOGGING_LEN);
#else
    mavlink_vologging_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.port_A_1, port_A_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_2, port_A_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_3, port_A_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_4, port_A_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_5, port_A_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_6, port_A_6, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLOGGING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLOGGING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLOGGING_MIN_LEN, MAVLINK_MSG_ID_VOLOGGING_LEN, MAVLINK_MSG_ID_VOLOGGING_CRC);
}

/**
 * @brief Encode a vologging struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vologging C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vologging_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vologging_t* vologging)
{
    return mavlink_msg_vologging_pack(system_id, component_id, msg, vologging->time_boot_ms, vologging->port_A_1, vologging->port_A_2, vologging->port_A_3, vologging->port_A_4, vologging->port_A_5, vologging->port_A_6);
}

/**
 * @brief Encode a vologging struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vologging C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vologging_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vologging_t* vologging)
{
    return mavlink_msg_vologging_pack_chan(system_id, component_id, chan, msg, vologging->time_boot_ms, vologging->port_A_1, vologging->port_A_2, vologging->port_A_3, vologging->port_A_4, vologging->port_A_5, vologging->port_A_6);
}

/**
 * @brief Send a vologging message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param port_A_1 omega
 * @param port_A_2 omega
 * @param port_A_3 omega
 * @param port_A_4 omega
 * @param port_A_5 omega
 * @param port_A_6 omega
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vologging_send(mavlink_channel_t chan, uint32_t time_boot_ms, const float *port_A_1, const float *port_A_2, const float *port_A_3, const float *port_A_4, const float *port_A_5, const float *port_A_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLOGGING_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, port_A_1, 3);
    _mav_put_float_array(buf, 16, port_A_2, 3);
    _mav_put_float_array(buf, 28, port_A_3, 3);
    _mav_put_float_array(buf, 40, port_A_4, 3);
    _mav_put_float_array(buf, 52, port_A_5, 3);
    _mav_put_float_array(buf, 64, port_A_6, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLOGGING, buf, MAVLINK_MSG_ID_VOLOGGING_MIN_LEN, MAVLINK_MSG_ID_VOLOGGING_LEN, MAVLINK_MSG_ID_VOLOGGING_CRC);
#else
    mavlink_vologging_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.port_A_1, port_A_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_2, port_A_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_3, port_A_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_4, port_A_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_5, port_A_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_6, port_A_6, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLOGGING, (const char *)&packet, MAVLINK_MSG_ID_VOLOGGING_MIN_LEN, MAVLINK_MSG_ID_VOLOGGING_LEN, MAVLINK_MSG_ID_VOLOGGING_CRC);
#endif
}

/**
 * @brief Send a vologging message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vologging_send_struct(mavlink_channel_t chan, const mavlink_vologging_t* vologging)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vologging_send(chan, vologging->time_boot_ms, vologging->port_A_1, vologging->port_A_2, vologging->port_A_3, vologging->port_A_4, vologging->port_A_5, vologging->port_A_6);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLOGGING, (const char *)vologging, MAVLINK_MSG_ID_VOLOGGING_MIN_LEN, MAVLINK_MSG_ID_VOLOGGING_LEN, MAVLINK_MSG_ID_VOLOGGING_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLOGGING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vologging_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, const float *port_A_1, const float *port_A_2, const float *port_A_3, const float *port_A_4, const float *port_A_5, const float *port_A_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, port_A_1, 3);
    _mav_put_float_array(buf, 16, port_A_2, 3);
    _mav_put_float_array(buf, 28, port_A_3, 3);
    _mav_put_float_array(buf, 40, port_A_4, 3);
    _mav_put_float_array(buf, 52, port_A_5, 3);
    _mav_put_float_array(buf, 64, port_A_6, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLOGGING, buf, MAVLINK_MSG_ID_VOLOGGING_MIN_LEN, MAVLINK_MSG_ID_VOLOGGING_LEN, MAVLINK_MSG_ID_VOLOGGING_CRC);
#else
    mavlink_vologging_t *packet = (mavlink_vologging_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet->port_A_1, port_A_1, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_2, port_A_2, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_3, port_A_3, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_4, port_A_4, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_5, port_A_5, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_6, port_A_6, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLOGGING, (const char *)packet, MAVLINK_MSG_ID_VOLOGGING_MIN_LEN, MAVLINK_MSG_ID_VOLOGGING_LEN, MAVLINK_MSG_ID_VOLOGGING_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLOGGING UNPACKING


/**
 * @brief Get field time_boot_ms from vologging message
 *
 * @return Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_vologging_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field port_A_1 from vologging message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_vologging_get_port_A_1(const mavlink_message_t* msg, float *port_A_1)
{
    return _MAV_RETURN_float_array(msg, port_A_1, 3,  4);
}

/**
 * @brief Get field port_A_2 from vologging message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_vologging_get_port_A_2(const mavlink_message_t* msg, float *port_A_2)
{
    return _MAV_RETURN_float_array(msg, port_A_2, 3,  16);
}

/**
 * @brief Get field port_A_3 from vologging message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_vologging_get_port_A_3(const mavlink_message_t* msg, float *port_A_3)
{
    return _MAV_RETURN_float_array(msg, port_A_3, 3,  28);
}

/**
 * @brief Get field port_A_4 from vologging message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_vologging_get_port_A_4(const mavlink_message_t* msg, float *port_A_4)
{
    return _MAV_RETURN_float_array(msg, port_A_4, 3,  40);
}

/**
 * @brief Get field port_A_5 from vologging message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_vologging_get_port_A_5(const mavlink_message_t* msg, float *port_A_5)
{
    return _MAV_RETURN_float_array(msg, port_A_5, 3,  52);
}

/**
 * @brief Get field port_A_6 from vologging message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_vologging_get_port_A_6(const mavlink_message_t* msg, float *port_A_6)
{
    return _MAV_RETURN_float_array(msg, port_A_6, 3,  64);
}

/**
 * @brief Decode a vologging message into a struct
 *
 * @param msg The message to decode
 * @param vologging C-struct to decode the message contents into
 */
static inline void mavlink_msg_vologging_decode(const mavlink_message_t* msg, mavlink_vologging_t* vologging)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vologging->time_boot_ms = mavlink_msg_vologging_get_time_boot_ms(msg);
    mavlink_msg_vologging_get_port_A_1(msg, vologging->port_A_1);
    mavlink_msg_vologging_get_port_A_2(msg, vologging->port_A_2);
    mavlink_msg_vologging_get_port_A_3(msg, vologging->port_A_3);
    mavlink_msg_vologging_get_port_A_4(msg, vologging->port_A_4);
    mavlink_msg_vologging_get_port_A_5(msg, vologging->port_A_5);
    mavlink_msg_vologging_get_port_A_6(msg, vologging->port_A_6);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLOGGING_LEN? msg->len : MAVLINK_MSG_ID_VOLOGGING_LEN;
        memset(vologging, 0, MAVLINK_MSG_ID_VOLOGGING_LEN);
    memcpy(vologging, _MAV_PAYLOAD(msg), len);
#endif
}
