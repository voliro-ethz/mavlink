#pragma once
// MESSAGE VOLIRO_ALPHA PACKING

#define MAVLINK_MSG_ID_VOLIRO_ALPHA 271

MAVPACKED(
typedef struct __mavlink_voliro_alpha_t {
 uint32_t time_boot_ms; /*< Timestamp in milliseconds since system boot*/
 float alpha[6]; /*< alpha*/
 float port_A_1[3]; /*< omega*/
 float port_A_2[3]; /*< omega*/
 float port_A_3[3]; /*< omega*/
 float port_A_4[3]; /*< omega*/
 float port_A_5[3]; /*< omega*/
 float port_A_6[3]; /*< omega*/
 float port_A_7[3]; /*< omega*/
 float port_A_8[3]; /*< omega*/
 float port_A_9[3]; /*< omega*/
 float port_B_1[3]; /*< omega*/
 float port_B_2[3]; /*< omega*/
 float port_B_3[3]; /*< omega*/
 float port_B_4[3]; /*< omega*/
 float port_B_5[3]; /*< omega*/
 float port_B_6[3]; /*< omega*/
 float port_B_7[3]; /*< omega*/
 float port_B_8[3]; /*< omega*/
 float port_B_9[3]; /*< omega*/
}) mavlink_voliro_alpha_t;

#define MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN 244
#define MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN 244
#define MAVLINK_MSG_ID_271_LEN 244
#define MAVLINK_MSG_ID_271_MIN_LEN 244

#define MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC 121
#define MAVLINK_MSG_ID_271_CRC 121

#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_ALPHA_LEN 6
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_1_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_2_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_3_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_4_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_5_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_6_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_7_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_8_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_A_9_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_1_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_2_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_3_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_4_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_5_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_6_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_7_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_8_LEN 3
#define MAVLINK_MSG_VOLIRO_ALPHA_FIELD_PORT_B_9_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_ALPHA { \
    271, \
    "VOLIRO_ALPHA", \
    20, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_alpha_t, time_boot_ms) }, \
         { "alpha", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_voliro_alpha_t, alpha) }, \
         { "port_A_1", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_voliro_alpha_t, port_A_1) }, \
         { "port_A_2", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_voliro_alpha_t, port_A_2) }, \
         { "port_A_3", NULL, MAVLINK_TYPE_FLOAT, 3, 52, offsetof(mavlink_voliro_alpha_t, port_A_3) }, \
         { "port_A_4", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_voliro_alpha_t, port_A_4) }, \
         { "port_A_5", NULL, MAVLINK_TYPE_FLOAT, 3, 76, offsetof(mavlink_voliro_alpha_t, port_A_5) }, \
         { "port_A_6", NULL, MAVLINK_TYPE_FLOAT, 3, 88, offsetof(mavlink_voliro_alpha_t, port_A_6) }, \
         { "port_A_7", NULL, MAVLINK_TYPE_FLOAT, 3, 100, offsetof(mavlink_voliro_alpha_t, port_A_7) }, \
         { "port_A_8", NULL, MAVLINK_TYPE_FLOAT, 3, 112, offsetof(mavlink_voliro_alpha_t, port_A_8) }, \
         { "port_A_9", NULL, MAVLINK_TYPE_FLOAT, 3, 124, offsetof(mavlink_voliro_alpha_t, port_A_9) }, \
         { "port_B_1", NULL, MAVLINK_TYPE_FLOAT, 3, 136, offsetof(mavlink_voliro_alpha_t, port_B_1) }, \
         { "port_B_2", NULL, MAVLINK_TYPE_FLOAT, 3, 148, offsetof(mavlink_voliro_alpha_t, port_B_2) }, \
         { "port_B_3", NULL, MAVLINK_TYPE_FLOAT, 3, 160, offsetof(mavlink_voliro_alpha_t, port_B_3) }, \
         { "port_B_4", NULL, MAVLINK_TYPE_FLOAT, 3, 172, offsetof(mavlink_voliro_alpha_t, port_B_4) }, \
         { "port_B_5", NULL, MAVLINK_TYPE_FLOAT, 3, 184, offsetof(mavlink_voliro_alpha_t, port_B_5) }, \
         { "port_B_6", NULL, MAVLINK_TYPE_FLOAT, 3, 196, offsetof(mavlink_voliro_alpha_t, port_B_6) }, \
         { "port_B_7", NULL, MAVLINK_TYPE_FLOAT, 3, 208, offsetof(mavlink_voliro_alpha_t, port_B_7) }, \
         { "port_B_8", NULL, MAVLINK_TYPE_FLOAT, 3, 220, offsetof(mavlink_voliro_alpha_t, port_B_8) }, \
         { "port_B_9", NULL, MAVLINK_TYPE_FLOAT, 3, 232, offsetof(mavlink_voliro_alpha_t, port_B_9) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_ALPHA { \
    "VOLIRO_ALPHA", \
    20, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_alpha_t, time_boot_ms) }, \
         { "alpha", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_voliro_alpha_t, alpha) }, \
         { "port_A_1", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_voliro_alpha_t, port_A_1) }, \
         { "port_A_2", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_voliro_alpha_t, port_A_2) }, \
         { "port_A_3", NULL, MAVLINK_TYPE_FLOAT, 3, 52, offsetof(mavlink_voliro_alpha_t, port_A_3) }, \
         { "port_A_4", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_voliro_alpha_t, port_A_4) }, \
         { "port_A_5", NULL, MAVLINK_TYPE_FLOAT, 3, 76, offsetof(mavlink_voliro_alpha_t, port_A_5) }, \
         { "port_A_6", NULL, MAVLINK_TYPE_FLOAT, 3, 88, offsetof(mavlink_voliro_alpha_t, port_A_6) }, \
         { "port_A_7", NULL, MAVLINK_TYPE_FLOAT, 3, 100, offsetof(mavlink_voliro_alpha_t, port_A_7) }, \
         { "port_A_8", NULL, MAVLINK_TYPE_FLOAT, 3, 112, offsetof(mavlink_voliro_alpha_t, port_A_8) }, \
         { "port_A_9", NULL, MAVLINK_TYPE_FLOAT, 3, 124, offsetof(mavlink_voliro_alpha_t, port_A_9) }, \
         { "port_B_1", NULL, MAVLINK_TYPE_FLOAT, 3, 136, offsetof(mavlink_voliro_alpha_t, port_B_1) }, \
         { "port_B_2", NULL, MAVLINK_TYPE_FLOAT, 3, 148, offsetof(mavlink_voliro_alpha_t, port_B_2) }, \
         { "port_B_3", NULL, MAVLINK_TYPE_FLOAT, 3, 160, offsetof(mavlink_voliro_alpha_t, port_B_3) }, \
         { "port_B_4", NULL, MAVLINK_TYPE_FLOAT, 3, 172, offsetof(mavlink_voliro_alpha_t, port_B_4) }, \
         { "port_B_5", NULL, MAVLINK_TYPE_FLOAT, 3, 184, offsetof(mavlink_voliro_alpha_t, port_B_5) }, \
         { "port_B_6", NULL, MAVLINK_TYPE_FLOAT, 3, 196, offsetof(mavlink_voliro_alpha_t, port_B_6) }, \
         { "port_B_7", NULL, MAVLINK_TYPE_FLOAT, 3, 208, offsetof(mavlink_voliro_alpha_t, port_B_7) }, \
         { "port_B_8", NULL, MAVLINK_TYPE_FLOAT, 3, 220, offsetof(mavlink_voliro_alpha_t, port_B_8) }, \
         { "port_B_9", NULL, MAVLINK_TYPE_FLOAT, 3, 232, offsetof(mavlink_voliro_alpha_t, port_B_9) }, \
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
 * @param port_A_1 omega
 * @param port_A_2 omega
 * @param port_A_3 omega
 * @param port_A_4 omega
 * @param port_A_5 omega
 * @param port_A_6 omega
 * @param port_A_7 omega
 * @param port_A_8 omega
 * @param port_A_9 omega
 * @param port_B_1 omega
 * @param port_B_2 omega
 * @param port_B_3 omega
 * @param port_B_4 omega
 * @param port_B_5 omega
 * @param port_B_6 omega
 * @param port_B_7 omega
 * @param port_B_8 omega
 * @param port_B_9 omega
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_alpha_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, const float *alpha, const float *port_A_1, const float *port_A_2, const float *port_A_3, const float *port_A_4, const float *port_A_5, const float *port_A_6, const float *port_A_7, const float *port_A_8, const float *port_A_9, const float *port_B_1, const float *port_B_2, const float *port_B_3, const float *port_B_4, const float *port_B_5, const float *port_B_6, const float *port_B_7, const float *port_B_8, const float *port_B_9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
    _mav_put_float_array(buf, 28, port_A_1, 3);
    _mav_put_float_array(buf, 40, port_A_2, 3);
    _mav_put_float_array(buf, 52, port_A_3, 3);
    _mav_put_float_array(buf, 64, port_A_4, 3);
    _mav_put_float_array(buf, 76, port_A_5, 3);
    _mav_put_float_array(buf, 88, port_A_6, 3);
    _mav_put_float_array(buf, 100, port_A_7, 3);
    _mav_put_float_array(buf, 112, port_A_8, 3);
    _mav_put_float_array(buf, 124, port_A_9, 3);
    _mav_put_float_array(buf, 136, port_B_1, 3);
    _mav_put_float_array(buf, 148, port_B_2, 3);
    _mav_put_float_array(buf, 160, port_B_3, 3);
    _mav_put_float_array(buf, 172, port_B_4, 3);
    _mav_put_float_array(buf, 184, port_B_5, 3);
    _mav_put_float_array(buf, 196, port_B_6, 3);
    _mav_put_float_array(buf, 208, port_B_7, 3);
    _mav_put_float_array(buf, 220, port_B_8, 3);
    _mav_put_float_array(buf, 232, port_B_9, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN);
#else
    mavlink_voliro_alpha_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
    mav_array_memcpy(packet.port_A_1, port_A_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_2, port_A_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_3, port_A_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_4, port_A_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_5, port_A_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_6, port_A_6, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_7, port_A_7, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_8, port_A_8, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_9, port_A_9, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_1, port_B_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_2, port_B_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_3, port_B_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_4, port_B_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_5, port_B_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_6, port_B_6, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_7, port_B_7, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_8, port_B_8, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_9, port_B_9, sizeof(float)*3);
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
 * @param port_A_1 omega
 * @param port_A_2 omega
 * @param port_A_3 omega
 * @param port_A_4 omega
 * @param port_A_5 omega
 * @param port_A_6 omega
 * @param port_A_7 omega
 * @param port_A_8 omega
 * @param port_A_9 omega
 * @param port_B_1 omega
 * @param port_B_2 omega
 * @param port_B_3 omega
 * @param port_B_4 omega
 * @param port_B_5 omega
 * @param port_B_6 omega
 * @param port_B_7 omega
 * @param port_B_8 omega
 * @param port_B_9 omega
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_alpha_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,const float *alpha,const float *port_A_1,const float *port_A_2,const float *port_A_3,const float *port_A_4,const float *port_A_5,const float *port_A_6,const float *port_A_7,const float *port_A_8,const float *port_A_9,const float *port_B_1,const float *port_B_2,const float *port_B_3,const float *port_B_4,const float *port_B_5,const float *port_B_6,const float *port_B_7,const float *port_B_8,const float *port_B_9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
    _mav_put_float_array(buf, 28, port_A_1, 3);
    _mav_put_float_array(buf, 40, port_A_2, 3);
    _mav_put_float_array(buf, 52, port_A_3, 3);
    _mav_put_float_array(buf, 64, port_A_4, 3);
    _mav_put_float_array(buf, 76, port_A_5, 3);
    _mav_put_float_array(buf, 88, port_A_6, 3);
    _mav_put_float_array(buf, 100, port_A_7, 3);
    _mav_put_float_array(buf, 112, port_A_8, 3);
    _mav_put_float_array(buf, 124, port_A_9, 3);
    _mav_put_float_array(buf, 136, port_B_1, 3);
    _mav_put_float_array(buf, 148, port_B_2, 3);
    _mav_put_float_array(buf, 160, port_B_3, 3);
    _mav_put_float_array(buf, 172, port_B_4, 3);
    _mav_put_float_array(buf, 184, port_B_5, 3);
    _mav_put_float_array(buf, 196, port_B_6, 3);
    _mav_put_float_array(buf, 208, port_B_7, 3);
    _mav_put_float_array(buf, 220, port_B_8, 3);
    _mav_put_float_array(buf, 232, port_B_9, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN);
#else
    mavlink_voliro_alpha_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
    mav_array_memcpy(packet.port_A_1, port_A_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_2, port_A_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_3, port_A_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_4, port_A_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_5, port_A_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_6, port_A_6, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_7, port_A_7, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_8, port_A_8, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_9, port_A_9, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_1, port_B_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_2, port_B_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_3, port_B_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_4, port_B_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_5, port_B_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_6, port_B_6, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_7, port_B_7, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_8, port_B_8, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_9, port_B_9, sizeof(float)*3);
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
    return mavlink_msg_voliro_alpha_pack(system_id, component_id, msg, voliro_alpha->time_boot_ms, voliro_alpha->alpha, voliro_alpha->port_A_1, voliro_alpha->port_A_2, voliro_alpha->port_A_3, voliro_alpha->port_A_4, voliro_alpha->port_A_5, voliro_alpha->port_A_6, voliro_alpha->port_A_7, voliro_alpha->port_A_8, voliro_alpha->port_A_9, voliro_alpha->port_B_1, voliro_alpha->port_B_2, voliro_alpha->port_B_3, voliro_alpha->port_B_4, voliro_alpha->port_B_5, voliro_alpha->port_B_6, voliro_alpha->port_B_7, voliro_alpha->port_B_8, voliro_alpha->port_B_9);
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
    return mavlink_msg_voliro_alpha_pack_chan(system_id, component_id, chan, msg, voliro_alpha->time_boot_ms, voliro_alpha->alpha, voliro_alpha->port_A_1, voliro_alpha->port_A_2, voliro_alpha->port_A_3, voliro_alpha->port_A_4, voliro_alpha->port_A_5, voliro_alpha->port_A_6, voliro_alpha->port_A_7, voliro_alpha->port_A_8, voliro_alpha->port_A_9, voliro_alpha->port_B_1, voliro_alpha->port_B_2, voliro_alpha->port_B_3, voliro_alpha->port_B_4, voliro_alpha->port_B_5, voliro_alpha->port_B_6, voliro_alpha->port_B_7, voliro_alpha->port_B_8, voliro_alpha->port_B_9);
}

/**
 * @brief Send a voliro_alpha message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param alpha alpha
 * @param port_A_1 omega
 * @param port_A_2 omega
 * @param port_A_3 omega
 * @param port_A_4 omega
 * @param port_A_5 omega
 * @param port_A_6 omega
 * @param port_A_7 omega
 * @param port_A_8 omega
 * @param port_A_9 omega
 * @param port_B_1 omega
 * @param port_B_2 omega
 * @param port_B_3 omega
 * @param port_B_4 omega
 * @param port_B_5 omega
 * @param port_B_6 omega
 * @param port_B_7 omega
 * @param port_B_8 omega
 * @param port_B_9 omega
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_alpha_send(mavlink_channel_t chan, uint32_t time_boot_ms, const float *alpha, const float *port_A_1, const float *port_A_2, const float *port_A_3, const float *port_A_4, const float *port_A_5, const float *port_A_6, const float *port_A_7, const float *port_A_8, const float *port_A_9, const float *port_B_1, const float *port_B_2, const float *port_B_3, const float *port_B_4, const float *port_B_5, const float *port_B_6, const float *port_B_7, const float *port_B_8, const float *port_B_9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
    _mav_put_float_array(buf, 28, port_A_1, 3);
    _mav_put_float_array(buf, 40, port_A_2, 3);
    _mav_put_float_array(buf, 52, port_A_3, 3);
    _mav_put_float_array(buf, 64, port_A_4, 3);
    _mav_put_float_array(buf, 76, port_A_5, 3);
    _mav_put_float_array(buf, 88, port_A_6, 3);
    _mav_put_float_array(buf, 100, port_A_7, 3);
    _mav_put_float_array(buf, 112, port_A_8, 3);
    _mav_put_float_array(buf, 124, port_A_9, 3);
    _mav_put_float_array(buf, 136, port_B_1, 3);
    _mav_put_float_array(buf, 148, port_B_2, 3);
    _mav_put_float_array(buf, 160, port_B_3, 3);
    _mav_put_float_array(buf, 172, port_B_4, 3);
    _mav_put_float_array(buf, 184, port_B_5, 3);
    _mav_put_float_array(buf, 196, port_B_6, 3);
    _mav_put_float_array(buf, 208, port_B_7, 3);
    _mav_put_float_array(buf, 220, port_B_8, 3);
    _mav_put_float_array(buf, 232, port_B_9, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_ALPHA, buf, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
#else
    mavlink_voliro_alpha_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
    mav_array_memcpy(packet.port_A_1, port_A_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_2, port_A_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_3, port_A_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_4, port_A_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_5, port_A_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_6, port_A_6, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_7, port_A_7, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_8, port_A_8, sizeof(float)*3);
    mav_array_memcpy(packet.port_A_9, port_A_9, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_1, port_B_1, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_2, port_B_2, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_3, port_B_3, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_4, port_B_4, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_5, port_B_5, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_6, port_B_6, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_7, port_B_7, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_8, port_B_8, sizeof(float)*3);
    mav_array_memcpy(packet.port_B_9, port_B_9, sizeof(float)*3);
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
    mavlink_msg_voliro_alpha_send(chan, voliro_alpha->time_boot_ms, voliro_alpha->alpha, voliro_alpha->port_A_1, voliro_alpha->port_A_2, voliro_alpha->port_A_3, voliro_alpha->port_A_4, voliro_alpha->port_A_5, voliro_alpha->port_A_6, voliro_alpha->port_A_7, voliro_alpha->port_A_8, voliro_alpha->port_A_9, voliro_alpha->port_B_1, voliro_alpha->port_B_2, voliro_alpha->port_B_3, voliro_alpha->port_B_4, voliro_alpha->port_B_5, voliro_alpha->port_B_6, voliro_alpha->port_B_7, voliro_alpha->port_B_8, voliro_alpha->port_B_9);
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
static inline void mavlink_msg_voliro_alpha_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, const float *alpha, const float *port_A_1, const float *port_A_2, const float *port_A_3, const float *port_A_4, const float *port_A_5, const float *port_A_6, const float *port_A_7, const float *port_A_8, const float *port_A_9, const float *port_B_1, const float *port_B_2, const float *port_B_3, const float *port_B_4, const float *port_B_5, const float *port_B_6, const float *port_B_7, const float *port_B_8, const float *port_B_9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
    _mav_put_float_array(buf, 28, port_A_1, 3);
    _mav_put_float_array(buf, 40, port_A_2, 3);
    _mav_put_float_array(buf, 52, port_A_3, 3);
    _mav_put_float_array(buf, 64, port_A_4, 3);
    _mav_put_float_array(buf, 76, port_A_5, 3);
    _mav_put_float_array(buf, 88, port_A_6, 3);
    _mav_put_float_array(buf, 100, port_A_7, 3);
    _mav_put_float_array(buf, 112, port_A_8, 3);
    _mav_put_float_array(buf, 124, port_A_9, 3);
    _mav_put_float_array(buf, 136, port_B_1, 3);
    _mav_put_float_array(buf, 148, port_B_2, 3);
    _mav_put_float_array(buf, 160, port_B_3, 3);
    _mav_put_float_array(buf, 172, port_B_4, 3);
    _mav_put_float_array(buf, 184, port_B_5, 3);
    _mav_put_float_array(buf, 196, port_B_6, 3);
    _mav_put_float_array(buf, 208, port_B_7, 3);
    _mav_put_float_array(buf, 220, port_B_8, 3);
    _mav_put_float_array(buf, 232, port_B_9, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_ALPHA, buf, MAVLINK_MSG_ID_VOLIRO_ALPHA_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN, MAVLINK_MSG_ID_VOLIRO_ALPHA_CRC);
#else
    mavlink_voliro_alpha_t *packet = (mavlink_voliro_alpha_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet->alpha, alpha, sizeof(float)*6);
    mav_array_memcpy(packet->port_A_1, port_A_1, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_2, port_A_2, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_3, port_A_3, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_4, port_A_4, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_5, port_A_5, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_6, port_A_6, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_7, port_A_7, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_8, port_A_8, sizeof(float)*3);
    mav_array_memcpy(packet->port_A_9, port_A_9, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_1, port_B_1, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_2, port_B_2, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_3, port_B_3, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_4, port_B_4, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_5, port_B_5, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_6, port_B_6, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_7, port_B_7, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_8, port_B_8, sizeof(float)*3);
    mav_array_memcpy(packet->port_B_9, port_B_9, sizeof(float)*3);
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
 * @brief Get field port_A_1 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_1(const mavlink_message_t* msg, float *port_A_1)
{
    return _MAV_RETURN_float_array(msg, port_A_1, 3,  28);
}

/**
 * @brief Get field port_A_2 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_2(const mavlink_message_t* msg, float *port_A_2)
{
    return _MAV_RETURN_float_array(msg, port_A_2, 3,  40);
}

/**
 * @brief Get field port_A_3 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_3(const mavlink_message_t* msg, float *port_A_3)
{
    return _MAV_RETURN_float_array(msg, port_A_3, 3,  52);
}

/**
 * @brief Get field port_A_4 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_4(const mavlink_message_t* msg, float *port_A_4)
{
    return _MAV_RETURN_float_array(msg, port_A_4, 3,  64);
}

/**
 * @brief Get field port_A_5 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_5(const mavlink_message_t* msg, float *port_A_5)
{
    return _MAV_RETURN_float_array(msg, port_A_5, 3,  76);
}

/**
 * @brief Get field port_A_6 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_6(const mavlink_message_t* msg, float *port_A_6)
{
    return _MAV_RETURN_float_array(msg, port_A_6, 3,  88);
}

/**
 * @brief Get field port_A_7 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_7(const mavlink_message_t* msg, float *port_A_7)
{
    return _MAV_RETURN_float_array(msg, port_A_7, 3,  100);
}

/**
 * @brief Get field port_A_8 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_8(const mavlink_message_t* msg, float *port_A_8)
{
    return _MAV_RETURN_float_array(msg, port_A_8, 3,  112);
}

/**
 * @brief Get field port_A_9 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_A_9(const mavlink_message_t* msg, float *port_A_9)
{
    return _MAV_RETURN_float_array(msg, port_A_9, 3,  124);
}

/**
 * @brief Get field port_B_1 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_1(const mavlink_message_t* msg, float *port_B_1)
{
    return _MAV_RETURN_float_array(msg, port_B_1, 3,  136);
}

/**
 * @brief Get field port_B_2 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_2(const mavlink_message_t* msg, float *port_B_2)
{
    return _MAV_RETURN_float_array(msg, port_B_2, 3,  148);
}

/**
 * @brief Get field port_B_3 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_3(const mavlink_message_t* msg, float *port_B_3)
{
    return _MAV_RETURN_float_array(msg, port_B_3, 3,  160);
}

/**
 * @brief Get field port_B_4 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_4(const mavlink_message_t* msg, float *port_B_4)
{
    return _MAV_RETURN_float_array(msg, port_B_4, 3,  172);
}

/**
 * @brief Get field port_B_5 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_5(const mavlink_message_t* msg, float *port_B_5)
{
    return _MAV_RETURN_float_array(msg, port_B_5, 3,  184);
}

/**
 * @brief Get field port_B_6 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_6(const mavlink_message_t* msg, float *port_B_6)
{
    return _MAV_RETURN_float_array(msg, port_B_6, 3,  196);
}

/**
 * @brief Get field port_B_7 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_7(const mavlink_message_t* msg, float *port_B_7)
{
    return _MAV_RETURN_float_array(msg, port_B_7, 3,  208);
}

/**
 * @brief Get field port_B_8 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_8(const mavlink_message_t* msg, float *port_B_8)
{
    return _MAV_RETURN_float_array(msg, port_B_8, 3,  220);
}

/**
 * @brief Get field port_B_9 from voliro_alpha message
 *
 * @return omega
 */
static inline uint16_t mavlink_msg_voliro_alpha_get_port_B_9(const mavlink_message_t* msg, float *port_B_9)
{
    return _MAV_RETURN_float_array(msg, port_B_9, 3,  232);
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
    mavlink_msg_voliro_alpha_get_port_A_1(msg, voliro_alpha->port_A_1);
    mavlink_msg_voliro_alpha_get_port_A_2(msg, voliro_alpha->port_A_2);
    mavlink_msg_voliro_alpha_get_port_A_3(msg, voliro_alpha->port_A_3);
    mavlink_msg_voliro_alpha_get_port_A_4(msg, voliro_alpha->port_A_4);
    mavlink_msg_voliro_alpha_get_port_A_5(msg, voliro_alpha->port_A_5);
    mavlink_msg_voliro_alpha_get_port_A_6(msg, voliro_alpha->port_A_6);
    mavlink_msg_voliro_alpha_get_port_A_7(msg, voliro_alpha->port_A_7);
    mavlink_msg_voliro_alpha_get_port_A_8(msg, voliro_alpha->port_A_8);
    mavlink_msg_voliro_alpha_get_port_A_9(msg, voliro_alpha->port_A_9);
    mavlink_msg_voliro_alpha_get_port_B_1(msg, voliro_alpha->port_B_1);
    mavlink_msg_voliro_alpha_get_port_B_2(msg, voliro_alpha->port_B_2);
    mavlink_msg_voliro_alpha_get_port_B_3(msg, voliro_alpha->port_B_3);
    mavlink_msg_voliro_alpha_get_port_B_4(msg, voliro_alpha->port_B_4);
    mavlink_msg_voliro_alpha_get_port_B_5(msg, voliro_alpha->port_B_5);
    mavlink_msg_voliro_alpha_get_port_B_6(msg, voliro_alpha->port_B_6);
    mavlink_msg_voliro_alpha_get_port_B_7(msg, voliro_alpha->port_B_7);
    mavlink_msg_voliro_alpha_get_port_B_8(msg, voliro_alpha->port_B_8);
    mavlink_msg_voliro_alpha_get_port_B_9(msg, voliro_alpha->port_B_9);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN;
        memset(voliro_alpha, 0, MAVLINK_MSG_ID_VOLIRO_ALPHA_LEN);
    memcpy(voliro_alpha, _MAV_PAYLOAD(msg), len);
#endif
}
