#pragma once
// MESSAGE VOLIRO_BALLBOT_FULLSTATE PACKING

#define MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE 273

MAVPACKED(
typedef struct __mavlink_voliro_ballbot_fullstate_t {
 uint32_t time_boot_ms; /*< Timestamp in milliseconds since system boot*/
 float thetaX; /*< X Angle in Euler angles ZYX in radians*/
 float thetaXdot; /*< Derivative of X Angle in Euler angles ZYX in radians*/
 float thetaY; /*< Y Angle in Euler angles ZYX in radians*/
 float thetaYdot; /*< Derivative of Y Angle in Euler angles ZYX in radians*/
 float thetaZ; /*< Z Angle in Euler angles ZYX in radians*/
 float thetaZdot; /*< Derivative of Z Angle in Euler angles ZYX in radians*/
 float phiX; /*< Rolling angle around X in radians*/
 float phiXdot; /*< Derivative of Rolling angle around X in radians*/
 float phiY; /*< Rolling angle around Y in radians*/
 float phiYdot; /*< Derivative of Rolling angle around Y in radians*/
 uint8_t target_system; /*< System ID*/
 uint8_t target_component; /*< Component ID*/
 uint8_t start_enabled; /*< Flag for Takeoff*/
 uint8_t stop_enabled; /*< Flag for Landing*/
 uint8_t flag1; /*< Generic Flag 1*/
 uint8_t flag2; /*< Generic Flag 2*/
}) mavlink_voliro_ballbot_fullstate_t;

#define MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN 50
#define MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_MIN_LEN 50
#define MAVLINK_MSG_ID_273_LEN 50
#define MAVLINK_MSG_ID_273_MIN_LEN 50

#define MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_CRC 43
#define MAVLINK_MSG_ID_273_CRC 43



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_BALLBOT_FULLSTATE { \
    273, \
    "VOLIRO_BALLBOT_FULLSTATE", \
    17, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_ballbot_fullstate_t, time_boot_ms) }, \
         { "thetaX", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaX) }, \
         { "thetaXdot", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaXdot) }, \
         { "thetaY", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaY) }, \
         { "thetaYdot", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaYdot) }, \
         { "thetaZ", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaZ) }, \
         { "thetaZdot", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaZdot) }, \
         { "phiX", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_voliro_ballbot_fullstate_t, phiX) }, \
         { "phiXdot", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_voliro_ballbot_fullstate_t, phiXdot) }, \
         { "phiY", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_voliro_ballbot_fullstate_t, phiY) }, \
         { "phiYdot", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_voliro_ballbot_fullstate_t, phiYdot) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 44, offsetof(mavlink_voliro_ballbot_fullstate_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_voliro_ballbot_fullstate_t, target_component) }, \
         { "start_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_voliro_ballbot_fullstate_t, start_enabled) }, \
         { "stop_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 47, offsetof(mavlink_voliro_ballbot_fullstate_t, stop_enabled) }, \
         { "flag1", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_voliro_ballbot_fullstate_t, flag1) }, \
         { "flag2", NULL, MAVLINK_TYPE_UINT8_T, 0, 49, offsetof(mavlink_voliro_ballbot_fullstate_t, flag2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_BALLBOT_FULLSTATE { \
    "VOLIRO_BALLBOT_FULLSTATE", \
    17, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_ballbot_fullstate_t, time_boot_ms) }, \
         { "thetaX", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaX) }, \
         { "thetaXdot", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaXdot) }, \
         { "thetaY", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaY) }, \
         { "thetaYdot", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaYdot) }, \
         { "thetaZ", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaZ) }, \
         { "thetaZdot", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_voliro_ballbot_fullstate_t, thetaZdot) }, \
         { "phiX", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_voliro_ballbot_fullstate_t, phiX) }, \
         { "phiXdot", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_voliro_ballbot_fullstate_t, phiXdot) }, \
         { "phiY", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_voliro_ballbot_fullstate_t, phiY) }, \
         { "phiYdot", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_voliro_ballbot_fullstate_t, phiYdot) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 44, offsetof(mavlink_voliro_ballbot_fullstate_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_voliro_ballbot_fullstate_t, target_component) }, \
         { "start_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_voliro_ballbot_fullstate_t, start_enabled) }, \
         { "stop_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 47, offsetof(mavlink_voliro_ballbot_fullstate_t, stop_enabled) }, \
         { "flag1", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_voliro_ballbot_fullstate_t, flag1) }, \
         { "flag2", NULL, MAVLINK_TYPE_UINT8_T, 0, 49, offsetof(mavlink_voliro_ballbot_fullstate_t, flag2) }, \
         } \
}
#endif

/**
 * @brief Pack a voliro_ballbot_fullstate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param thetaX X Angle in Euler angles ZYX in radians
 * @param thetaXdot Derivative of X Angle in Euler angles ZYX in radians
 * @param thetaY Y Angle in Euler angles ZYX in radians
 * @param thetaYdot Derivative of Y Angle in Euler angles ZYX in radians
 * @param thetaZ Z Angle in Euler angles ZYX in radians
 * @param thetaZdot Derivative of Z Angle in Euler angles ZYX in radians
 * @param phiX Rolling angle around X in radians
 * @param phiXdot Derivative of Rolling angle around X in radians
 * @param phiY Rolling angle around Y in radians
 * @param phiYdot Derivative of Rolling angle around Y in radians
 * @param start_enabled Flag for Takeoff
 * @param stop_enabled Flag for Landing
 * @param flag1 Generic Flag 1
 * @param flag2 Generic Flag 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_ballbot_fullstate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float thetaX, float thetaXdot, float thetaY, float thetaYdot, float thetaZ, float thetaZdot, float phiX, float phiXdot, float phiY, float phiYdot, uint8_t start_enabled, uint8_t stop_enabled, uint8_t flag1, uint8_t flag2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, thetaX);
    _mav_put_float(buf, 8, thetaXdot);
    _mav_put_float(buf, 12, thetaY);
    _mav_put_float(buf, 16, thetaYdot);
    _mav_put_float(buf, 20, thetaZ);
    _mav_put_float(buf, 24, thetaZdot);
    _mav_put_float(buf, 28, phiX);
    _mav_put_float(buf, 32, phiXdot);
    _mav_put_float(buf, 36, phiY);
    _mav_put_float(buf, 40, phiYdot);
    _mav_put_uint8_t(buf, 44, target_system);
    _mav_put_uint8_t(buf, 45, target_component);
    _mav_put_uint8_t(buf, 46, start_enabled);
    _mav_put_uint8_t(buf, 47, stop_enabled);
    _mav_put_uint8_t(buf, 48, flag1);
    _mav_put_uint8_t(buf, 49, flag2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN);
#else
    mavlink_voliro_ballbot_fullstate_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.thetaX = thetaX;
    packet.thetaXdot = thetaXdot;
    packet.thetaY = thetaY;
    packet.thetaYdot = thetaYdot;
    packet.thetaZ = thetaZ;
    packet.thetaZdot = thetaZdot;
    packet.phiX = phiX;
    packet.phiXdot = phiXdot;
    packet.phiY = phiY;
    packet.phiYdot = phiYdot;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.start_enabled = start_enabled;
    packet.stop_enabled = stop_enabled;
    packet.flag1 = flag1;
    packet.flag2 = flag2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_CRC);
}

/**
 * @brief Pack a voliro_ballbot_fullstate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param thetaX X Angle in Euler angles ZYX in radians
 * @param thetaXdot Derivative of X Angle in Euler angles ZYX in radians
 * @param thetaY Y Angle in Euler angles ZYX in radians
 * @param thetaYdot Derivative of Y Angle in Euler angles ZYX in radians
 * @param thetaZ Z Angle in Euler angles ZYX in radians
 * @param thetaZdot Derivative of Z Angle in Euler angles ZYX in radians
 * @param phiX Rolling angle around X in radians
 * @param phiXdot Derivative of Rolling angle around X in radians
 * @param phiY Rolling angle around Y in radians
 * @param phiYdot Derivative of Rolling angle around Y in radians
 * @param start_enabled Flag for Takeoff
 * @param stop_enabled Flag for Landing
 * @param flag1 Generic Flag 1
 * @param flag2 Generic Flag 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_ballbot_fullstate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,float thetaX,float thetaXdot,float thetaY,float thetaYdot,float thetaZ,float thetaZdot,float phiX,float phiXdot,float phiY,float phiYdot,uint8_t start_enabled,uint8_t stop_enabled,uint8_t flag1,uint8_t flag2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, thetaX);
    _mav_put_float(buf, 8, thetaXdot);
    _mav_put_float(buf, 12, thetaY);
    _mav_put_float(buf, 16, thetaYdot);
    _mav_put_float(buf, 20, thetaZ);
    _mav_put_float(buf, 24, thetaZdot);
    _mav_put_float(buf, 28, phiX);
    _mav_put_float(buf, 32, phiXdot);
    _mav_put_float(buf, 36, phiY);
    _mav_put_float(buf, 40, phiYdot);
    _mav_put_uint8_t(buf, 44, target_system);
    _mav_put_uint8_t(buf, 45, target_component);
    _mav_put_uint8_t(buf, 46, start_enabled);
    _mav_put_uint8_t(buf, 47, stop_enabled);
    _mav_put_uint8_t(buf, 48, flag1);
    _mav_put_uint8_t(buf, 49, flag2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN);
#else
    mavlink_voliro_ballbot_fullstate_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.thetaX = thetaX;
    packet.thetaXdot = thetaXdot;
    packet.thetaY = thetaY;
    packet.thetaYdot = thetaYdot;
    packet.thetaZ = thetaZ;
    packet.thetaZdot = thetaZdot;
    packet.phiX = phiX;
    packet.phiXdot = phiXdot;
    packet.phiY = phiY;
    packet.phiYdot = phiYdot;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.start_enabled = start_enabled;
    packet.stop_enabled = stop_enabled;
    packet.flag1 = flag1;
    packet.flag2 = flag2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_CRC);
}

/**
 * @brief Encode a voliro_ballbot_fullstate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param voliro_ballbot_fullstate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_ballbot_fullstate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_voliro_ballbot_fullstate_t* voliro_ballbot_fullstate)
{
    return mavlink_msg_voliro_ballbot_fullstate_pack(system_id, component_id, msg, voliro_ballbot_fullstate->time_boot_ms, voliro_ballbot_fullstate->target_system, voliro_ballbot_fullstate->target_component, voliro_ballbot_fullstate->thetaX, voliro_ballbot_fullstate->thetaXdot, voliro_ballbot_fullstate->thetaY, voliro_ballbot_fullstate->thetaYdot, voliro_ballbot_fullstate->thetaZ, voliro_ballbot_fullstate->thetaZdot, voliro_ballbot_fullstate->phiX, voliro_ballbot_fullstate->phiXdot, voliro_ballbot_fullstate->phiY, voliro_ballbot_fullstate->phiYdot, voliro_ballbot_fullstate->start_enabled, voliro_ballbot_fullstate->stop_enabled, voliro_ballbot_fullstate->flag1, voliro_ballbot_fullstate->flag2);
}

/**
 * @brief Encode a voliro_ballbot_fullstate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voliro_ballbot_fullstate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_ballbot_fullstate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_voliro_ballbot_fullstate_t* voliro_ballbot_fullstate)
{
    return mavlink_msg_voliro_ballbot_fullstate_pack_chan(system_id, component_id, chan, msg, voliro_ballbot_fullstate->time_boot_ms, voliro_ballbot_fullstate->target_system, voliro_ballbot_fullstate->target_component, voliro_ballbot_fullstate->thetaX, voliro_ballbot_fullstate->thetaXdot, voliro_ballbot_fullstate->thetaY, voliro_ballbot_fullstate->thetaYdot, voliro_ballbot_fullstate->thetaZ, voliro_ballbot_fullstate->thetaZdot, voliro_ballbot_fullstate->phiX, voliro_ballbot_fullstate->phiXdot, voliro_ballbot_fullstate->phiY, voliro_ballbot_fullstate->phiYdot, voliro_ballbot_fullstate->start_enabled, voliro_ballbot_fullstate->stop_enabled, voliro_ballbot_fullstate->flag1, voliro_ballbot_fullstate->flag2);
}

/**
 * @brief Send a voliro_ballbot_fullstate message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param thetaX X Angle in Euler angles ZYX in radians
 * @param thetaXdot Derivative of X Angle in Euler angles ZYX in radians
 * @param thetaY Y Angle in Euler angles ZYX in radians
 * @param thetaYdot Derivative of Y Angle in Euler angles ZYX in radians
 * @param thetaZ Z Angle in Euler angles ZYX in radians
 * @param thetaZdot Derivative of Z Angle in Euler angles ZYX in radians
 * @param phiX Rolling angle around X in radians
 * @param phiXdot Derivative of Rolling angle around X in radians
 * @param phiY Rolling angle around Y in radians
 * @param phiYdot Derivative of Rolling angle around Y in radians
 * @param start_enabled Flag for Takeoff
 * @param stop_enabled Flag for Landing
 * @param flag1 Generic Flag 1
 * @param flag2 Generic Flag 2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_ballbot_fullstate_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float thetaX, float thetaXdot, float thetaY, float thetaYdot, float thetaZ, float thetaZdot, float phiX, float phiXdot, float phiY, float phiYdot, uint8_t start_enabled, uint8_t stop_enabled, uint8_t flag1, uint8_t flag2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, thetaX);
    _mav_put_float(buf, 8, thetaXdot);
    _mav_put_float(buf, 12, thetaY);
    _mav_put_float(buf, 16, thetaYdot);
    _mav_put_float(buf, 20, thetaZ);
    _mav_put_float(buf, 24, thetaZdot);
    _mav_put_float(buf, 28, phiX);
    _mav_put_float(buf, 32, phiXdot);
    _mav_put_float(buf, 36, phiY);
    _mav_put_float(buf, 40, phiYdot);
    _mav_put_uint8_t(buf, 44, target_system);
    _mav_put_uint8_t(buf, 45, target_component);
    _mav_put_uint8_t(buf, 46, start_enabled);
    _mav_put_uint8_t(buf, 47, stop_enabled);
    _mav_put_uint8_t(buf, 48, flag1);
    _mav_put_uint8_t(buf, 49, flag2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE, buf, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_CRC);
#else
    mavlink_voliro_ballbot_fullstate_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.thetaX = thetaX;
    packet.thetaXdot = thetaXdot;
    packet.thetaY = thetaY;
    packet.thetaYdot = thetaYdot;
    packet.thetaZ = thetaZ;
    packet.thetaZdot = thetaZdot;
    packet.phiX = phiX;
    packet.phiXdot = phiXdot;
    packet.phiY = phiY;
    packet.phiYdot = phiYdot;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.start_enabled = start_enabled;
    packet.stop_enabled = stop_enabled;
    packet.flag1 = flag1;
    packet.flag2 = flag2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE, (const char *)&packet, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_CRC);
#endif
}

/**
 * @brief Send a voliro_ballbot_fullstate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_voliro_ballbot_fullstate_send_struct(mavlink_channel_t chan, const mavlink_voliro_ballbot_fullstate_t* voliro_ballbot_fullstate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_voliro_ballbot_fullstate_send(chan, voliro_ballbot_fullstate->time_boot_ms, voliro_ballbot_fullstate->target_system, voliro_ballbot_fullstate->target_component, voliro_ballbot_fullstate->thetaX, voliro_ballbot_fullstate->thetaXdot, voliro_ballbot_fullstate->thetaY, voliro_ballbot_fullstate->thetaYdot, voliro_ballbot_fullstate->thetaZ, voliro_ballbot_fullstate->thetaZdot, voliro_ballbot_fullstate->phiX, voliro_ballbot_fullstate->phiXdot, voliro_ballbot_fullstate->phiY, voliro_ballbot_fullstate->phiYdot, voliro_ballbot_fullstate->start_enabled, voliro_ballbot_fullstate->stop_enabled, voliro_ballbot_fullstate->flag1, voliro_ballbot_fullstate->flag2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE, (const char *)voliro_ballbot_fullstate, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_voliro_ballbot_fullstate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float thetaX, float thetaXdot, float thetaY, float thetaYdot, float thetaZ, float thetaZdot, float phiX, float phiXdot, float phiY, float phiYdot, uint8_t start_enabled, uint8_t stop_enabled, uint8_t flag1, uint8_t flag2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, thetaX);
    _mav_put_float(buf, 8, thetaXdot);
    _mav_put_float(buf, 12, thetaY);
    _mav_put_float(buf, 16, thetaYdot);
    _mav_put_float(buf, 20, thetaZ);
    _mav_put_float(buf, 24, thetaZdot);
    _mav_put_float(buf, 28, phiX);
    _mav_put_float(buf, 32, phiXdot);
    _mav_put_float(buf, 36, phiY);
    _mav_put_float(buf, 40, phiYdot);
    _mav_put_uint8_t(buf, 44, target_system);
    _mav_put_uint8_t(buf, 45, target_component);
    _mav_put_uint8_t(buf, 46, start_enabled);
    _mav_put_uint8_t(buf, 47, stop_enabled);
    _mav_put_uint8_t(buf, 48, flag1);
    _mav_put_uint8_t(buf, 49, flag2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE, buf, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_CRC);
#else
    mavlink_voliro_ballbot_fullstate_t *packet = (mavlink_voliro_ballbot_fullstate_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->thetaX = thetaX;
    packet->thetaXdot = thetaXdot;
    packet->thetaY = thetaY;
    packet->thetaYdot = thetaYdot;
    packet->thetaZ = thetaZ;
    packet->thetaZdot = thetaZdot;
    packet->phiX = phiX;
    packet->phiXdot = phiXdot;
    packet->phiY = phiY;
    packet->phiYdot = phiYdot;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->start_enabled = start_enabled;
    packet->stop_enabled = stop_enabled;
    packet->flag1 = flag1;
    packet->flag2 = flag2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE, (const char *)packet, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLIRO_BALLBOT_FULLSTATE UNPACKING


/**
 * @brief Get field time_boot_ms from voliro_ballbot_fullstate message
 *
 * @return Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_voliro_ballbot_fullstate_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from voliro_ballbot_fullstate message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_voliro_ballbot_fullstate_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  44);
}

/**
 * @brief Get field target_component from voliro_ballbot_fullstate message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_voliro_ballbot_fullstate_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  45);
}

/**
 * @brief Get field thetaX from voliro_ballbot_fullstate message
 *
 * @return X Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_thetaX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field thetaXdot from voliro_ballbot_fullstate message
 *
 * @return Derivative of X Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_thetaXdot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field thetaY from voliro_ballbot_fullstate message
 *
 * @return Y Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_thetaY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field thetaYdot from voliro_ballbot_fullstate message
 *
 * @return Derivative of Y Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_thetaYdot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field thetaZ from voliro_ballbot_fullstate message
 *
 * @return Z Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_thetaZ(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field thetaZdot from voliro_ballbot_fullstate message
 *
 * @return Derivative of Z Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_thetaZdot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field phiX from voliro_ballbot_fullstate message
 *
 * @return Rolling angle around X in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_phiX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field phiXdot from voliro_ballbot_fullstate message
 *
 * @return Derivative of Rolling angle around X in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_phiXdot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field phiY from voliro_ballbot_fullstate message
 *
 * @return Rolling angle around Y in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_phiY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field phiYdot from voliro_ballbot_fullstate message
 *
 * @return Derivative of Rolling angle around Y in radians
 */
static inline float mavlink_msg_voliro_ballbot_fullstate_get_phiYdot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field start_enabled from voliro_ballbot_fullstate message
 *
 * @return Flag for Takeoff
 */
static inline uint8_t mavlink_msg_voliro_ballbot_fullstate_get_start_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  46);
}

/**
 * @brief Get field stop_enabled from voliro_ballbot_fullstate message
 *
 * @return Flag for Landing
 */
static inline uint8_t mavlink_msg_voliro_ballbot_fullstate_get_stop_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  47);
}

/**
 * @brief Get field flag1 from voliro_ballbot_fullstate message
 *
 * @return Generic Flag 1
 */
static inline uint8_t mavlink_msg_voliro_ballbot_fullstate_get_flag1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  48);
}

/**
 * @brief Get field flag2 from voliro_ballbot_fullstate message
 *
 * @return Generic Flag 2
 */
static inline uint8_t mavlink_msg_voliro_ballbot_fullstate_get_flag2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  49);
}

/**
 * @brief Decode a voliro_ballbot_fullstate message into a struct
 *
 * @param msg The message to decode
 * @param voliro_ballbot_fullstate C-struct to decode the message contents into
 */
static inline void mavlink_msg_voliro_ballbot_fullstate_decode(const mavlink_message_t* msg, mavlink_voliro_ballbot_fullstate_t* voliro_ballbot_fullstate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    voliro_ballbot_fullstate->time_boot_ms = mavlink_msg_voliro_ballbot_fullstate_get_time_boot_ms(msg);
    voliro_ballbot_fullstate->thetaX = mavlink_msg_voliro_ballbot_fullstate_get_thetaX(msg);
    voliro_ballbot_fullstate->thetaXdot = mavlink_msg_voliro_ballbot_fullstate_get_thetaXdot(msg);
    voliro_ballbot_fullstate->thetaY = mavlink_msg_voliro_ballbot_fullstate_get_thetaY(msg);
    voliro_ballbot_fullstate->thetaYdot = mavlink_msg_voliro_ballbot_fullstate_get_thetaYdot(msg);
    voliro_ballbot_fullstate->thetaZ = mavlink_msg_voliro_ballbot_fullstate_get_thetaZ(msg);
    voliro_ballbot_fullstate->thetaZdot = mavlink_msg_voliro_ballbot_fullstate_get_thetaZdot(msg);
    voliro_ballbot_fullstate->phiX = mavlink_msg_voliro_ballbot_fullstate_get_phiX(msg);
    voliro_ballbot_fullstate->phiXdot = mavlink_msg_voliro_ballbot_fullstate_get_phiXdot(msg);
    voliro_ballbot_fullstate->phiY = mavlink_msg_voliro_ballbot_fullstate_get_phiY(msg);
    voliro_ballbot_fullstate->phiYdot = mavlink_msg_voliro_ballbot_fullstate_get_phiYdot(msg);
    voliro_ballbot_fullstate->target_system = mavlink_msg_voliro_ballbot_fullstate_get_target_system(msg);
    voliro_ballbot_fullstate->target_component = mavlink_msg_voliro_ballbot_fullstate_get_target_component(msg);
    voliro_ballbot_fullstate->start_enabled = mavlink_msg_voliro_ballbot_fullstate_get_start_enabled(msg);
    voliro_ballbot_fullstate->stop_enabled = mavlink_msg_voliro_ballbot_fullstate_get_stop_enabled(msg);
    voliro_ballbot_fullstate->flag1 = mavlink_msg_voliro_ballbot_fullstate_get_flag1(msg);
    voliro_ballbot_fullstate->flag2 = mavlink_msg_voliro_ballbot_fullstate_get_flag2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN;
        memset(voliro_ballbot_fullstate, 0, MAVLINK_MSG_ID_VOLIRO_BALLBOT_FULLSTATE_LEN);
    memcpy(voliro_ballbot_fullstate, _MAV_PAYLOAD(msg), len);
#endif
}
