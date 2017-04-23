#pragma once
// MESSAGE VOLIRO_FULL_SETPOINT PACKING

#define MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT 272

MAVPACKED(
typedef struct __mavlink_voliro_full_setpoint_t {
 uint32_t time_boot_ms; /*< Timestamp in milliseconds since system boot*/
 float x; /*< X Position in NED frame in meters*/
 float y; /*< Y Position in NED frame in meters*/
 float z; /*< Z Position in NED frame in meters (note, altitude is negative in NED)*/
 float q[4]; /*< Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)*/
 float vx; /*< X velocity in NED frame in meter / s*/
 float vy; /*< Y velocity in NED frame in meter / s*/
 float vz; /*< Z velocity in NED frame in meter / s*/
 float roll_rate; /*< Body roll rate in radians per second*/
 float pitch_rate; /*< Body roll rate in radians per second*/
 float yaw_rate; /*< Body roll rate in radians per second*/
 uint8_t target_system; /*< System ID*/
 uint8_t target_component; /*< Component ID*/
 uint8_t takeoff_enabled; /*< Flag for Takeoff*/
 uint8_t landing_enabled; /*< Flag for Landing*/
 uint8_t rotorguards_tola_enabled; /*< Flag Takeoff and Landing on Rotorguards*/
 uint8_t velocity_enabled; /*< Flag for Velocity mode*/
}) mavlink_voliro_full_setpoint_t;

#define MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN 62
#define MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_MIN_LEN 62
#define MAVLINK_MSG_ID_272_LEN 62
#define MAVLINK_MSG_ID_272_MIN_LEN 62

#define MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_CRC 13
#define MAVLINK_MSG_ID_272_CRC 13

#define MAVLINK_MSG_VOLIRO_FULL_SETPOINT_FIELD_Q_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_FULL_SETPOINT { \
    272, \
    "VOLIRO_FULL_SETPOINT", \
    17, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_full_setpoint_t, time_boot_ms) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_voliro_full_setpoint_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_voliro_full_setpoint_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_voliro_full_setpoint_t, z) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 4, 16, offsetof(mavlink_voliro_full_setpoint_t, q) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_voliro_full_setpoint_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_voliro_full_setpoint_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_voliro_full_setpoint_t, vz) }, \
         { "roll_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_voliro_full_setpoint_t, roll_rate) }, \
         { "pitch_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_voliro_full_setpoint_t, pitch_rate) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_voliro_full_setpoint_t, yaw_rate) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_voliro_full_setpoint_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 57, offsetof(mavlink_voliro_full_setpoint_t, target_component) }, \
         { "takeoff_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_voliro_full_setpoint_t, takeoff_enabled) }, \
         { "landing_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 59, offsetof(mavlink_voliro_full_setpoint_t, landing_enabled) }, \
         { "rotorguards_tola_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_voliro_full_setpoint_t, rotorguards_tola_enabled) }, \
         { "velocity_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_voliro_full_setpoint_t, velocity_enabled) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_FULL_SETPOINT { \
    "VOLIRO_FULL_SETPOINT", \
    17, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_full_setpoint_t, time_boot_ms) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_voliro_full_setpoint_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_voliro_full_setpoint_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_voliro_full_setpoint_t, z) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 4, 16, offsetof(mavlink_voliro_full_setpoint_t, q) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_voliro_full_setpoint_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_voliro_full_setpoint_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_voliro_full_setpoint_t, vz) }, \
         { "roll_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_voliro_full_setpoint_t, roll_rate) }, \
         { "pitch_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_voliro_full_setpoint_t, pitch_rate) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_voliro_full_setpoint_t, yaw_rate) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_voliro_full_setpoint_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 57, offsetof(mavlink_voliro_full_setpoint_t, target_component) }, \
         { "takeoff_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_voliro_full_setpoint_t, takeoff_enabled) }, \
         { "landing_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 59, offsetof(mavlink_voliro_full_setpoint_t, landing_enabled) }, \
         { "rotorguards_tola_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_voliro_full_setpoint_t, rotorguards_tola_enabled) }, \
         { "velocity_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_voliro_full_setpoint_t, velocity_enabled) }, \
         } \
}
#endif

/**
 * @brief Pack a voliro_full_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param takeoff_enabled Flag for Takeoff
 * @param landing_enabled Flag for Landing
 * @param rotorguards_tola_enabled Flag Takeoff and Landing on Rotorguards
 * @param velocity_enabled Flag for Velocity mode
 * @param x X Position in NED frame in meters
 * @param y Y Position in NED frame in meters
 * @param z Z Position in NED frame in meters (note, altitude is negative in NED)
 * @param q Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
 * @param vx X velocity in NED frame in meter / s
 * @param vy Y velocity in NED frame in meter / s
 * @param vz Z velocity in NED frame in meter / s
 * @param roll_rate Body roll rate in radians per second
 * @param pitch_rate Body roll rate in radians per second
 * @param yaw_rate Body roll rate in radians per second
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_full_setpoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t takeoff_enabled, uint8_t landing_enabled, uint8_t rotorguards_tola_enabled, uint8_t velocity_enabled, float x, float y, float z, const float *q, float vx, float vy, float vz, float roll_rate, float pitch_rate, float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 32, vx);
    _mav_put_float(buf, 36, vy);
    _mav_put_float(buf, 40, vz);
    _mav_put_float(buf, 44, roll_rate);
    _mav_put_float(buf, 48, pitch_rate);
    _mav_put_float(buf, 52, yaw_rate);
    _mav_put_uint8_t(buf, 56, target_system);
    _mav_put_uint8_t(buf, 57, target_component);
    _mav_put_uint8_t(buf, 58, takeoff_enabled);
    _mav_put_uint8_t(buf, 59, landing_enabled);
    _mav_put_uint8_t(buf, 60, rotorguards_tola_enabled);
    _mav_put_uint8_t(buf, 61, velocity_enabled);
    _mav_put_float_array(buf, 16, q, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN);
#else
    mavlink_voliro_full_setpoint_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.roll_rate = roll_rate;
    packet.pitch_rate = pitch_rate;
    packet.yaw_rate = yaw_rate;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.takeoff_enabled = takeoff_enabled;
    packet.landing_enabled = landing_enabled;
    packet.rotorguards_tola_enabled = rotorguards_tola_enabled;
    packet.velocity_enabled = velocity_enabled;
    mav_array_memcpy(packet.q, q, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_CRC);
}

/**
 * @brief Pack a voliro_full_setpoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param takeoff_enabled Flag for Takeoff
 * @param landing_enabled Flag for Landing
 * @param rotorguards_tola_enabled Flag Takeoff and Landing on Rotorguards
 * @param velocity_enabled Flag for Velocity mode
 * @param x X Position in NED frame in meters
 * @param y Y Position in NED frame in meters
 * @param z Z Position in NED frame in meters (note, altitude is negative in NED)
 * @param q Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
 * @param vx X velocity in NED frame in meter / s
 * @param vy Y velocity in NED frame in meter / s
 * @param vz Z velocity in NED frame in meter / s
 * @param roll_rate Body roll rate in radians per second
 * @param pitch_rate Body roll rate in radians per second
 * @param yaw_rate Body roll rate in radians per second
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_full_setpoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,uint8_t takeoff_enabled,uint8_t landing_enabled,uint8_t rotorguards_tola_enabled,uint8_t velocity_enabled,float x,float y,float z,const float *q,float vx,float vy,float vz,float roll_rate,float pitch_rate,float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 32, vx);
    _mav_put_float(buf, 36, vy);
    _mav_put_float(buf, 40, vz);
    _mav_put_float(buf, 44, roll_rate);
    _mav_put_float(buf, 48, pitch_rate);
    _mav_put_float(buf, 52, yaw_rate);
    _mav_put_uint8_t(buf, 56, target_system);
    _mav_put_uint8_t(buf, 57, target_component);
    _mav_put_uint8_t(buf, 58, takeoff_enabled);
    _mav_put_uint8_t(buf, 59, landing_enabled);
    _mav_put_uint8_t(buf, 60, rotorguards_tola_enabled);
    _mav_put_uint8_t(buf, 61, velocity_enabled);
    _mav_put_float_array(buf, 16, q, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN);
#else
    mavlink_voliro_full_setpoint_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.roll_rate = roll_rate;
    packet.pitch_rate = pitch_rate;
    packet.yaw_rate = yaw_rate;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.takeoff_enabled = takeoff_enabled;
    packet.landing_enabled = landing_enabled;
    packet.rotorguards_tola_enabled = rotorguards_tola_enabled;
    packet.velocity_enabled = velocity_enabled;
    mav_array_memcpy(packet.q, q, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_CRC);
}

/**
 * @brief Encode a voliro_full_setpoint struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param voliro_full_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_full_setpoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_voliro_full_setpoint_t* voliro_full_setpoint)
{
    return mavlink_msg_voliro_full_setpoint_pack(system_id, component_id, msg, voliro_full_setpoint->time_boot_ms, voliro_full_setpoint->target_system, voliro_full_setpoint->target_component, voliro_full_setpoint->takeoff_enabled, voliro_full_setpoint->landing_enabled, voliro_full_setpoint->rotorguards_tola_enabled, voliro_full_setpoint->velocity_enabled, voliro_full_setpoint->x, voliro_full_setpoint->y, voliro_full_setpoint->z, voliro_full_setpoint->q, voliro_full_setpoint->vx, voliro_full_setpoint->vy, voliro_full_setpoint->vz, voliro_full_setpoint->roll_rate, voliro_full_setpoint->pitch_rate, voliro_full_setpoint->yaw_rate);
}

/**
 * @brief Encode a voliro_full_setpoint struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voliro_full_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_full_setpoint_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_voliro_full_setpoint_t* voliro_full_setpoint)
{
    return mavlink_msg_voliro_full_setpoint_pack_chan(system_id, component_id, chan, msg, voliro_full_setpoint->time_boot_ms, voliro_full_setpoint->target_system, voliro_full_setpoint->target_component, voliro_full_setpoint->takeoff_enabled, voliro_full_setpoint->landing_enabled, voliro_full_setpoint->rotorguards_tola_enabled, voliro_full_setpoint->velocity_enabled, voliro_full_setpoint->x, voliro_full_setpoint->y, voliro_full_setpoint->z, voliro_full_setpoint->q, voliro_full_setpoint->vx, voliro_full_setpoint->vy, voliro_full_setpoint->vz, voliro_full_setpoint->roll_rate, voliro_full_setpoint->pitch_rate, voliro_full_setpoint->yaw_rate);
}

/**
 * @brief Send a voliro_full_setpoint message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param target_system System ID
 * @param target_component Component ID
 * @param takeoff_enabled Flag for Takeoff
 * @param landing_enabled Flag for Landing
 * @param rotorguards_tola_enabled Flag Takeoff and Landing on Rotorguards
 * @param velocity_enabled Flag for Velocity mode
 * @param x X Position in NED frame in meters
 * @param y Y Position in NED frame in meters
 * @param z Z Position in NED frame in meters (note, altitude is negative in NED)
 * @param q Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
 * @param vx X velocity in NED frame in meter / s
 * @param vy Y velocity in NED frame in meter / s
 * @param vz Z velocity in NED frame in meter / s
 * @param roll_rate Body roll rate in radians per second
 * @param pitch_rate Body roll rate in radians per second
 * @param yaw_rate Body roll rate in radians per second
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_full_setpoint_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t takeoff_enabled, uint8_t landing_enabled, uint8_t rotorguards_tola_enabled, uint8_t velocity_enabled, float x, float y, float z, const float *q, float vx, float vy, float vz, float roll_rate, float pitch_rate, float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 32, vx);
    _mav_put_float(buf, 36, vy);
    _mav_put_float(buf, 40, vz);
    _mav_put_float(buf, 44, roll_rate);
    _mav_put_float(buf, 48, pitch_rate);
    _mav_put_float(buf, 52, yaw_rate);
    _mav_put_uint8_t(buf, 56, target_system);
    _mav_put_uint8_t(buf, 57, target_component);
    _mav_put_uint8_t(buf, 58, takeoff_enabled);
    _mav_put_uint8_t(buf, 59, landing_enabled);
    _mav_put_uint8_t(buf, 60, rotorguards_tola_enabled);
    _mav_put_uint8_t(buf, 61, velocity_enabled);
    _mav_put_float_array(buf, 16, q, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT, buf, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_CRC);
#else
    mavlink_voliro_full_setpoint_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.roll_rate = roll_rate;
    packet.pitch_rate = pitch_rate;
    packet.yaw_rate = yaw_rate;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.takeoff_enabled = takeoff_enabled;
    packet.landing_enabled = landing_enabled;
    packet.rotorguards_tola_enabled = rotorguards_tola_enabled;
    packet.velocity_enabled = velocity_enabled;
    mav_array_memcpy(packet.q, q, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT, (const char *)&packet, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_CRC);
#endif
}

/**
 * @brief Send a voliro_full_setpoint message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_voliro_full_setpoint_send_struct(mavlink_channel_t chan, const mavlink_voliro_full_setpoint_t* voliro_full_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_voliro_full_setpoint_send(chan, voliro_full_setpoint->time_boot_ms, voliro_full_setpoint->target_system, voliro_full_setpoint->target_component, voliro_full_setpoint->takeoff_enabled, voliro_full_setpoint->landing_enabled, voliro_full_setpoint->rotorguards_tola_enabled, voliro_full_setpoint->velocity_enabled, voliro_full_setpoint->x, voliro_full_setpoint->y, voliro_full_setpoint->z, voliro_full_setpoint->q, voliro_full_setpoint->vx, voliro_full_setpoint->vy, voliro_full_setpoint->vz, voliro_full_setpoint->roll_rate, voliro_full_setpoint->pitch_rate, voliro_full_setpoint->yaw_rate);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT, (const char *)voliro_full_setpoint, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_voliro_full_setpoint_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t takeoff_enabled, uint8_t landing_enabled, uint8_t rotorguards_tola_enabled, uint8_t velocity_enabled, float x, float y, float z, const float *q, float vx, float vy, float vz, float roll_rate, float pitch_rate, float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 32, vx);
    _mav_put_float(buf, 36, vy);
    _mav_put_float(buf, 40, vz);
    _mav_put_float(buf, 44, roll_rate);
    _mav_put_float(buf, 48, pitch_rate);
    _mav_put_float(buf, 52, yaw_rate);
    _mav_put_uint8_t(buf, 56, target_system);
    _mav_put_uint8_t(buf, 57, target_component);
    _mav_put_uint8_t(buf, 58, takeoff_enabled);
    _mav_put_uint8_t(buf, 59, landing_enabled);
    _mav_put_uint8_t(buf, 60, rotorguards_tola_enabled);
    _mav_put_uint8_t(buf, 61, velocity_enabled);
    _mav_put_float_array(buf, 16, q, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT, buf, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_CRC);
#else
    mavlink_voliro_full_setpoint_t *packet = (mavlink_voliro_full_setpoint_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->roll_rate = roll_rate;
    packet->pitch_rate = pitch_rate;
    packet->yaw_rate = yaw_rate;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->takeoff_enabled = takeoff_enabled;
    packet->landing_enabled = landing_enabled;
    packet->rotorguards_tola_enabled = rotorguards_tola_enabled;
    packet->velocity_enabled = velocity_enabled;
    mav_array_memcpy(packet->q, q, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT, (const char *)packet, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLIRO_FULL_SETPOINT UNPACKING


/**
 * @brief Get field time_boot_ms from voliro_full_setpoint message
 *
 * @return Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_voliro_full_setpoint_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from voliro_full_setpoint message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_voliro_full_setpoint_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  56);
}

/**
 * @brief Get field target_component from voliro_full_setpoint message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_voliro_full_setpoint_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  57);
}

/**
 * @brief Get field takeoff_enabled from voliro_full_setpoint message
 *
 * @return Flag for Takeoff
 */
static inline uint8_t mavlink_msg_voliro_full_setpoint_get_takeoff_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  58);
}

/**
 * @brief Get field landing_enabled from voliro_full_setpoint message
 *
 * @return Flag for Landing
 */
static inline uint8_t mavlink_msg_voliro_full_setpoint_get_landing_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  59);
}

/**
 * @brief Get field rotorguards_tola_enabled from voliro_full_setpoint message
 *
 * @return Flag Takeoff and Landing on Rotorguards
 */
static inline uint8_t mavlink_msg_voliro_full_setpoint_get_rotorguards_tola_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  60);
}

/**
 * @brief Get field velocity_enabled from voliro_full_setpoint message
 *
 * @return Flag for Velocity mode
 */
static inline uint8_t mavlink_msg_voliro_full_setpoint_get_velocity_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  61);
}

/**
 * @brief Get field x from voliro_full_setpoint message
 *
 * @return X Position in NED frame in meters
 */
static inline float mavlink_msg_voliro_full_setpoint_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field y from voliro_full_setpoint message
 *
 * @return Y Position in NED frame in meters
 */
static inline float mavlink_msg_voliro_full_setpoint_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field z from voliro_full_setpoint message
 *
 * @return Z Position in NED frame in meters (note, altitude is negative in NED)
 */
static inline float mavlink_msg_voliro_full_setpoint_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field q from voliro_full_setpoint message
 *
 * @return Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
 */
static inline uint16_t mavlink_msg_voliro_full_setpoint_get_q(const mavlink_message_t* msg, float *q)
{
    return _MAV_RETURN_float_array(msg, q, 4,  16);
}

/**
 * @brief Get field vx from voliro_full_setpoint message
 *
 * @return X velocity in NED frame in meter / s
 */
static inline float mavlink_msg_voliro_full_setpoint_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field vy from voliro_full_setpoint message
 *
 * @return Y velocity in NED frame in meter / s
 */
static inline float mavlink_msg_voliro_full_setpoint_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field vz from voliro_full_setpoint message
 *
 * @return Z velocity in NED frame in meter / s
 */
static inline float mavlink_msg_voliro_full_setpoint_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field roll_rate from voliro_full_setpoint message
 *
 * @return Body roll rate in radians per second
 */
static inline float mavlink_msg_voliro_full_setpoint_get_roll_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field pitch_rate from voliro_full_setpoint message
 *
 * @return Body roll rate in radians per second
 */
static inline float mavlink_msg_voliro_full_setpoint_get_pitch_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field yaw_rate from voliro_full_setpoint message
 *
 * @return Body roll rate in radians per second
 */
static inline float mavlink_msg_voliro_full_setpoint_get_yaw_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Decode a voliro_full_setpoint message into a struct
 *
 * @param msg The message to decode
 * @param voliro_full_setpoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_voliro_full_setpoint_decode(const mavlink_message_t* msg, mavlink_voliro_full_setpoint_t* voliro_full_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    voliro_full_setpoint->time_boot_ms = mavlink_msg_voliro_full_setpoint_get_time_boot_ms(msg);
    voliro_full_setpoint->x = mavlink_msg_voliro_full_setpoint_get_x(msg);
    voliro_full_setpoint->y = mavlink_msg_voliro_full_setpoint_get_y(msg);
    voliro_full_setpoint->z = mavlink_msg_voliro_full_setpoint_get_z(msg);
    mavlink_msg_voliro_full_setpoint_get_q(msg, voliro_full_setpoint->q);
    voliro_full_setpoint->vx = mavlink_msg_voliro_full_setpoint_get_vx(msg);
    voliro_full_setpoint->vy = mavlink_msg_voliro_full_setpoint_get_vy(msg);
    voliro_full_setpoint->vz = mavlink_msg_voliro_full_setpoint_get_vz(msg);
    voliro_full_setpoint->roll_rate = mavlink_msg_voliro_full_setpoint_get_roll_rate(msg);
    voliro_full_setpoint->pitch_rate = mavlink_msg_voliro_full_setpoint_get_pitch_rate(msg);
    voliro_full_setpoint->yaw_rate = mavlink_msg_voliro_full_setpoint_get_yaw_rate(msg);
    voliro_full_setpoint->target_system = mavlink_msg_voliro_full_setpoint_get_target_system(msg);
    voliro_full_setpoint->target_component = mavlink_msg_voliro_full_setpoint_get_target_component(msg);
    voliro_full_setpoint->takeoff_enabled = mavlink_msg_voliro_full_setpoint_get_takeoff_enabled(msg);
    voliro_full_setpoint->landing_enabled = mavlink_msg_voliro_full_setpoint_get_landing_enabled(msg);
    voliro_full_setpoint->rotorguards_tola_enabled = mavlink_msg_voliro_full_setpoint_get_rotorguards_tola_enabled(msg);
    voliro_full_setpoint->velocity_enabled = mavlink_msg_voliro_full_setpoint_get_velocity_enabled(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN;
        memset(voliro_full_setpoint, 0, MAVLINK_MSG_ID_VOLIRO_FULL_SETPOINT_LEN);
    memcpy(voliro_full_setpoint, _MAV_PAYLOAD(msg), len);
#endif
}
