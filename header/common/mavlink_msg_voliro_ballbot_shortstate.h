#pragma once
// MESSAGE VOLIRO_BALLBOT_SHORTSTATE PACKING

#define MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE 274

MAVPACKED(
typedef struct __mavlink_voliro_ballbot_shortstate_t {
 uint32_t time_boot_ms; /*< Timestamp in milliseconds since system boot*/
 float thetaX; /*< X Angle in Euler angles ZYX in radians*/
 float thetaY; /*< Y Angle in Euler angles ZYX in radians*/
 float thetaZ; /*< Z Angle in Euler angles ZYX in radians*/
 float phiX; /*< Rolling angle around X in radians*/
 float phiY; /*< Rolling angle around Y in radians*/
 uint8_t target_system; /*< System ID*/
 uint8_t target_component; /*< Component ID*/
 uint8_t start_enabled; /*< Flag for Takeoff*/
 uint8_t stop_enabled; /*< Flag for Landing*/
 uint8_t flag1; /*< Generic Flag 1*/
 uint8_t flag2; /*< Generic Flag 2*/
}) mavlink_voliro_ballbot_shortstate_t;

#define MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN 30
#define MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_MIN_LEN 30
#define MAVLINK_MSG_ID_274_LEN 30
#define MAVLINK_MSG_ID_274_MIN_LEN 30

#define MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_CRC 190
#define MAVLINK_MSG_ID_274_CRC 190



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_BALLBOT_SHORTSTATE { \
    274, \
    "VOLIRO_BALLBOT_SHORTSTATE", \
    12, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_ballbot_shortstate_t, time_boot_ms) }, \
         { "thetaX", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_voliro_ballbot_shortstate_t, thetaX) }, \
         { "thetaY", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_voliro_ballbot_shortstate_t, thetaY) }, \
         { "thetaZ", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_voliro_ballbot_shortstate_t, thetaZ) }, \
         { "phiX", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_voliro_ballbot_shortstate_t, phiX) }, \
         { "phiY", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_voliro_ballbot_shortstate_t, phiY) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_voliro_ballbot_shortstate_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_voliro_ballbot_shortstate_t, target_component) }, \
         { "start_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_voliro_ballbot_shortstate_t, start_enabled) }, \
         { "stop_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_voliro_ballbot_shortstate_t, stop_enabled) }, \
         { "flag1", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_voliro_ballbot_shortstate_t, flag1) }, \
         { "flag2", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_voliro_ballbot_shortstate_t, flag2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_BALLBOT_SHORTSTATE { \
    "VOLIRO_BALLBOT_SHORTSTATE", \
    12, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_ballbot_shortstate_t, time_boot_ms) }, \
         { "thetaX", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_voliro_ballbot_shortstate_t, thetaX) }, \
         { "thetaY", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_voliro_ballbot_shortstate_t, thetaY) }, \
         { "thetaZ", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_voliro_ballbot_shortstate_t, thetaZ) }, \
         { "phiX", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_voliro_ballbot_shortstate_t, phiX) }, \
         { "phiY", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_voliro_ballbot_shortstate_t, phiY) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_voliro_ballbot_shortstate_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_voliro_ballbot_shortstate_t, target_component) }, \
         { "start_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_voliro_ballbot_shortstate_t, start_enabled) }, \
         { "stop_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_voliro_ballbot_shortstate_t, stop_enabled) }, \
         { "flag1", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_voliro_ballbot_shortstate_t, flag1) }, \
         { "flag2", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_voliro_ballbot_shortstate_t, flag2) }, \
         } \
}
#endif

/**
 * @brief Pack a voliro_ballbot_shortstate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param thetaX X Angle in Euler angles ZYX in radians
 * @param thetaY Y Angle in Euler angles ZYX in radians
 * @param thetaZ Z Angle in Euler angles ZYX in radians
 * @param phiX Rolling angle around X in radians
 * @param phiY Rolling angle around Y in radians
 * @param start_enabled Flag for Takeoff
 * @param stop_enabled Flag for Landing
 * @param flag1 Generic Flag 1
 * @param flag2 Generic Flag 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_ballbot_shortstate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float thetaX, float thetaY, float thetaZ, float phiX, float phiY, uint8_t start_enabled, uint8_t stop_enabled, uint8_t flag1, uint8_t flag2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, thetaX);
    _mav_put_float(buf, 8, thetaY);
    _mav_put_float(buf, 12, thetaZ);
    _mav_put_float(buf, 16, phiX);
    _mav_put_float(buf, 20, phiY);
    _mav_put_uint8_t(buf, 24, target_system);
    _mav_put_uint8_t(buf, 25, target_component);
    _mav_put_uint8_t(buf, 26, start_enabled);
    _mav_put_uint8_t(buf, 27, stop_enabled);
    _mav_put_uint8_t(buf, 28, flag1);
    _mav_put_uint8_t(buf, 29, flag2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN);
#else
    mavlink_voliro_ballbot_shortstate_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.thetaX = thetaX;
    packet.thetaY = thetaY;
    packet.thetaZ = thetaZ;
    packet.phiX = phiX;
    packet.phiY = phiY;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.start_enabled = start_enabled;
    packet.stop_enabled = stop_enabled;
    packet.flag1 = flag1;
    packet.flag2 = flag2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_CRC);
}

/**
 * @brief Pack a voliro_ballbot_shortstate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param thetaX X Angle in Euler angles ZYX in radians
 * @param thetaY Y Angle in Euler angles ZYX in radians
 * @param thetaZ Z Angle in Euler angles ZYX in radians
 * @param phiX Rolling angle around X in radians
 * @param phiY Rolling angle around Y in radians
 * @param start_enabled Flag for Takeoff
 * @param stop_enabled Flag for Landing
 * @param flag1 Generic Flag 1
 * @param flag2 Generic Flag 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_ballbot_shortstate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,float thetaX,float thetaY,float thetaZ,float phiX,float phiY,uint8_t start_enabled,uint8_t stop_enabled,uint8_t flag1,uint8_t flag2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, thetaX);
    _mav_put_float(buf, 8, thetaY);
    _mav_put_float(buf, 12, thetaZ);
    _mav_put_float(buf, 16, phiX);
    _mav_put_float(buf, 20, phiY);
    _mav_put_uint8_t(buf, 24, target_system);
    _mav_put_uint8_t(buf, 25, target_component);
    _mav_put_uint8_t(buf, 26, start_enabled);
    _mav_put_uint8_t(buf, 27, stop_enabled);
    _mav_put_uint8_t(buf, 28, flag1);
    _mav_put_uint8_t(buf, 29, flag2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN);
#else
    mavlink_voliro_ballbot_shortstate_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.thetaX = thetaX;
    packet.thetaY = thetaY;
    packet.thetaZ = thetaZ;
    packet.phiX = phiX;
    packet.phiY = phiY;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.start_enabled = start_enabled;
    packet.stop_enabled = stop_enabled;
    packet.flag1 = flag1;
    packet.flag2 = flag2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_CRC);
}

/**
 * @brief Encode a voliro_ballbot_shortstate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param voliro_ballbot_shortstate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_ballbot_shortstate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_voliro_ballbot_shortstate_t* voliro_ballbot_shortstate)
{
    return mavlink_msg_voliro_ballbot_shortstate_pack(system_id, component_id, msg, voliro_ballbot_shortstate->time_boot_ms, voliro_ballbot_shortstate->target_system, voliro_ballbot_shortstate->target_component, voliro_ballbot_shortstate->thetaX, voliro_ballbot_shortstate->thetaY, voliro_ballbot_shortstate->thetaZ, voliro_ballbot_shortstate->phiX, voliro_ballbot_shortstate->phiY, voliro_ballbot_shortstate->start_enabled, voliro_ballbot_shortstate->stop_enabled, voliro_ballbot_shortstate->flag1, voliro_ballbot_shortstate->flag2);
}

/**
 * @brief Encode a voliro_ballbot_shortstate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voliro_ballbot_shortstate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_ballbot_shortstate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_voliro_ballbot_shortstate_t* voliro_ballbot_shortstate)
{
    return mavlink_msg_voliro_ballbot_shortstate_pack_chan(system_id, component_id, chan, msg, voliro_ballbot_shortstate->time_boot_ms, voliro_ballbot_shortstate->target_system, voliro_ballbot_shortstate->target_component, voliro_ballbot_shortstate->thetaX, voliro_ballbot_shortstate->thetaY, voliro_ballbot_shortstate->thetaZ, voliro_ballbot_shortstate->phiX, voliro_ballbot_shortstate->phiY, voliro_ballbot_shortstate->start_enabled, voliro_ballbot_shortstate->stop_enabled, voliro_ballbot_shortstate->flag1, voliro_ballbot_shortstate->flag2);
}

/**
 * @brief Send a voliro_ballbot_shortstate message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param thetaX X Angle in Euler angles ZYX in radians
 * @param thetaY Y Angle in Euler angles ZYX in radians
 * @param thetaZ Z Angle in Euler angles ZYX in radians
 * @param phiX Rolling angle around X in radians
 * @param phiY Rolling angle around Y in radians
 * @param start_enabled Flag for Takeoff
 * @param stop_enabled Flag for Landing
 * @param flag1 Generic Flag 1
 * @param flag2 Generic Flag 2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_ballbot_shortstate_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float thetaX, float thetaY, float thetaZ, float phiX, float phiY, uint8_t start_enabled, uint8_t stop_enabled, uint8_t flag1, uint8_t flag2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, thetaX);
    _mav_put_float(buf, 8, thetaY);
    _mav_put_float(buf, 12, thetaZ);
    _mav_put_float(buf, 16, phiX);
    _mav_put_float(buf, 20, phiY);
    _mav_put_uint8_t(buf, 24, target_system);
    _mav_put_uint8_t(buf, 25, target_component);
    _mav_put_uint8_t(buf, 26, start_enabled);
    _mav_put_uint8_t(buf, 27, stop_enabled);
    _mav_put_uint8_t(buf, 28, flag1);
    _mav_put_uint8_t(buf, 29, flag2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE, buf, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_CRC);
#else
    mavlink_voliro_ballbot_shortstate_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.thetaX = thetaX;
    packet.thetaY = thetaY;
    packet.thetaZ = thetaZ;
    packet.phiX = phiX;
    packet.phiY = phiY;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.start_enabled = start_enabled;
    packet.stop_enabled = stop_enabled;
    packet.flag1 = flag1;
    packet.flag2 = flag2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE, (const char *)&packet, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_CRC);
#endif
}

/**
 * @brief Send a voliro_ballbot_shortstate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_voliro_ballbot_shortstate_send_struct(mavlink_channel_t chan, const mavlink_voliro_ballbot_shortstate_t* voliro_ballbot_shortstate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_voliro_ballbot_shortstate_send(chan, voliro_ballbot_shortstate->time_boot_ms, voliro_ballbot_shortstate->target_system, voliro_ballbot_shortstate->target_component, voliro_ballbot_shortstate->thetaX, voliro_ballbot_shortstate->thetaY, voliro_ballbot_shortstate->thetaZ, voliro_ballbot_shortstate->phiX, voliro_ballbot_shortstate->phiY, voliro_ballbot_shortstate->start_enabled, voliro_ballbot_shortstate->stop_enabled, voliro_ballbot_shortstate->flag1, voliro_ballbot_shortstate->flag2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE, (const char *)voliro_ballbot_shortstate, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_voliro_ballbot_shortstate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float thetaX, float thetaY, float thetaZ, float phiX, float phiY, uint8_t start_enabled, uint8_t stop_enabled, uint8_t flag1, uint8_t flag2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, thetaX);
    _mav_put_float(buf, 8, thetaY);
    _mav_put_float(buf, 12, thetaZ);
    _mav_put_float(buf, 16, phiX);
    _mav_put_float(buf, 20, phiY);
    _mav_put_uint8_t(buf, 24, target_system);
    _mav_put_uint8_t(buf, 25, target_component);
    _mav_put_uint8_t(buf, 26, start_enabled);
    _mav_put_uint8_t(buf, 27, stop_enabled);
    _mav_put_uint8_t(buf, 28, flag1);
    _mav_put_uint8_t(buf, 29, flag2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE, buf, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_CRC);
#else
    mavlink_voliro_ballbot_shortstate_t *packet = (mavlink_voliro_ballbot_shortstate_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->thetaX = thetaX;
    packet->thetaY = thetaY;
    packet->thetaZ = thetaZ;
    packet->phiX = phiX;
    packet->phiY = phiY;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->start_enabled = start_enabled;
    packet->stop_enabled = stop_enabled;
    packet->flag1 = flag1;
    packet->flag2 = flag2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE, (const char *)packet, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLIRO_BALLBOT_SHORTSTATE UNPACKING


/**
 * @brief Get field time_boot_ms from voliro_ballbot_shortstate message
 *
 * @return Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_voliro_ballbot_shortstate_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from voliro_ballbot_shortstate message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_voliro_ballbot_shortstate_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field target_component from voliro_ballbot_shortstate message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_voliro_ballbot_shortstate_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field thetaX from voliro_ballbot_shortstate message
 *
 * @return X Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_shortstate_get_thetaX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field thetaY from voliro_ballbot_shortstate message
 *
 * @return Y Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_shortstate_get_thetaY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field thetaZ from voliro_ballbot_shortstate message
 *
 * @return Z Angle in Euler angles ZYX in radians
 */
static inline float mavlink_msg_voliro_ballbot_shortstate_get_thetaZ(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field phiX from voliro_ballbot_shortstate message
 *
 * @return Rolling angle around X in radians
 */
static inline float mavlink_msg_voliro_ballbot_shortstate_get_phiX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field phiY from voliro_ballbot_shortstate message
 *
 * @return Rolling angle around Y in radians
 */
static inline float mavlink_msg_voliro_ballbot_shortstate_get_phiY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field start_enabled from voliro_ballbot_shortstate message
 *
 * @return Flag for Takeoff
 */
static inline uint8_t mavlink_msg_voliro_ballbot_shortstate_get_start_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field stop_enabled from voliro_ballbot_shortstate message
 *
 * @return Flag for Landing
 */
static inline uint8_t mavlink_msg_voliro_ballbot_shortstate_get_stop_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  27);
}

/**
 * @brief Get field flag1 from voliro_ballbot_shortstate message
 *
 * @return Generic Flag 1
 */
static inline uint8_t mavlink_msg_voliro_ballbot_shortstate_get_flag1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field flag2 from voliro_ballbot_shortstate message
 *
 * @return Generic Flag 2
 */
static inline uint8_t mavlink_msg_voliro_ballbot_shortstate_get_flag2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Decode a voliro_ballbot_shortstate message into a struct
 *
 * @param msg The message to decode
 * @param voliro_ballbot_shortstate C-struct to decode the message contents into
 */
static inline void mavlink_msg_voliro_ballbot_shortstate_decode(const mavlink_message_t* msg, mavlink_voliro_ballbot_shortstate_t* voliro_ballbot_shortstate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    voliro_ballbot_shortstate->time_boot_ms = mavlink_msg_voliro_ballbot_shortstate_get_time_boot_ms(msg);
    voliro_ballbot_shortstate->thetaX = mavlink_msg_voliro_ballbot_shortstate_get_thetaX(msg);
    voliro_ballbot_shortstate->thetaY = mavlink_msg_voliro_ballbot_shortstate_get_thetaY(msg);
    voliro_ballbot_shortstate->thetaZ = mavlink_msg_voliro_ballbot_shortstate_get_thetaZ(msg);
    voliro_ballbot_shortstate->phiX = mavlink_msg_voliro_ballbot_shortstate_get_phiX(msg);
    voliro_ballbot_shortstate->phiY = mavlink_msg_voliro_ballbot_shortstate_get_phiY(msg);
    voliro_ballbot_shortstate->target_system = mavlink_msg_voliro_ballbot_shortstate_get_target_system(msg);
    voliro_ballbot_shortstate->target_component = mavlink_msg_voliro_ballbot_shortstate_get_target_component(msg);
    voliro_ballbot_shortstate->start_enabled = mavlink_msg_voliro_ballbot_shortstate_get_start_enabled(msg);
    voliro_ballbot_shortstate->stop_enabled = mavlink_msg_voliro_ballbot_shortstate_get_stop_enabled(msg);
    voliro_ballbot_shortstate->flag1 = mavlink_msg_voliro_ballbot_shortstate_get_flag1(msg);
    voliro_ballbot_shortstate->flag2 = mavlink_msg_voliro_ballbot_shortstate_get_flag2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN;
        memset(voliro_ballbot_shortstate, 0, MAVLINK_MSG_ID_VOLIRO_BALLBOT_SHORTSTATE_LEN);
    memcpy(voliro_ballbot_shortstate, _MAV_PAYLOAD(msg), len);
#endif
}
