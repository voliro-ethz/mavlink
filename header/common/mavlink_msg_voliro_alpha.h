#pragma once
// MESSAGE VOLIRO_ALPHA PACKING

#define MAVLINK_MSG_ID_VOLIRO_ALPHA 271

MAVPACKED(
typedef struct __mavlink_voliro_alpha_t {
 uint32_t time_boot_ms; /*< Timestamp in milliseconds since system boot*/
 float alpha[6]; /*< alpha*/
}) mavlink_voliro_alpha_t;

#define MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN 28
#define MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN 28
#define MAVLINK_MSG_ID_271_LEN 28
#define MAVLINK_MSG_ID_271_MIN_LEN 28

#define MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC 25
#define MAVLINK_MSG_ID_271_CRC 25

#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_ALPHA_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_ALPHA { \
    271, \
    "VOLIRO_ALPHA", \
    2, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_alpha_t, time_boot_ms) }, \
         { "alpha", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_voliro_alpha_t, alpha) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_ALPHA { \
    "VOLIRO_ALPHA", \
    2, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_alpha_t, time_boot_ms) }, \
         { "alpha", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_voliro_alpha_t, alpha) }, \
         } \
}
#endif

/**
 * @brief Pack a voliro_alpha message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param alpha alpha
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_alpha_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN);
#else
    mavlink_voliro_alpha_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_ALPHA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
}

/**
 * @brief Pack a voliro_alpha message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param alpha alpha
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_alpha_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN);
#else
    mavlink_voliro_alpha_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_ALPHA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
}

/**
 * @brief Encode a voliro_alpha struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param voliro_alpha C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_alpha_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_voliro_alpha_t* voliro_alpha)
{
    return mavlink_msg_voliro_alpha_pack(system_id, component_id, msg, voliro_alpha->time_boot_ms, voliro_alpha->alpha);
}

/**
 * @brief Encode a voliro_alpha struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voliro_alpha C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_alpha_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_voliro_alpha_t* voliro_alpha)
{
    return mavlink_msg_voliro_alpha_pack_chan(system_id, component_id, chan, msg, voliro_alpha->time_boot_ms, voliro_alpha->alpha);
}

/**
 * @brief Send a voliro_alpha message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param alpha alpha
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_alpha_send(mavlink_channel_t chan, uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_ALPHA, buf, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
#else
    mavlink_voliro_alpha_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_ALPHA, (const char *)&packet, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
#endif
}

/**
 * @brief Send a voliro_alpha message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_voliro_alpha_send_struct(mavlink_channel_t chan, const mavlink_voliro_alpha_t* voliro_alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_voliro_alpha_send(chan, voliro_alpha->time_boot_ms, voliro_alpha->alpha);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_ALPHA, (const char *)voliro_alpha, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_voliro_alpha_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_ALPHA, buf, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
#else
    mavlink_voliro_alpha_t *packet = (mavlink_voliro_alpha_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet->alpha, alpha, sizeof(float)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_ALPHA, (const char *)packet, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLIRO_ALPHA UNPACKING


/**
 * @brief Get field time_boot_ms from voliro_alpha message
 *
 * @return Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_voliro_alpha_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field alpha from voliro_alpha message
 *
 * @return alpha
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_alpha(const mavlink_message_t* msg, float *alpha)
{
    return _MAV_RETURN_float_array(msg, alpha, 6,  4);
}

/**
 * @brief Decode a voliro_alpha message into a struct
 *
 * @param msg The message to decode
 * @param voliro_alpha C-struct to decode the message contents into
 */
static inline void mavlink_msg_voliro_alpha_decode(const mavlink_message_t* msg, mavlink_voliro_alpha_t* voliro_alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    voliro_alpha->time_boot_ms = mavlink_msg_voliro_alpha_get_time_boot_ms(msg);
    mavlink_msg_voliro_alpha_get_alpha(msg, voliro_alpha->alpha);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN;
        memset(voliro_alpha, 0, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN);
    memcpy(voliro_alpha, _MAV_PAYLOAD(msg), len);
#endif
}
