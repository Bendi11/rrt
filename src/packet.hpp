#pragma once


#include <array>
static_assert(sizeof(float) == 4);

/// Simple 3D vector 
struct UdpVector {
    float x, y, z;
};

/// 4D vector specifying attribute per-wheel
struct UdpWheelVec {
    float bl, br, fl, fr;
};

/// Data contained in a single UDP telemetry packet
struct UdpPacket {
    float total_time;
    float lap_time;
    float lap_distance;
    float total_distance;
    UdpVector position;
    float speed;
    UdpVector velocity;
    UdpVector left_dir;
    UdpVector forward_dir;
    
    UdpWheelVec suspension_position;
    UdpWheelVec suspension_velocity;
    UdpWheelVec wheel_patch_speed;
    
    float throttle_input;
    float steering_input;
    float brake_input;
    float clutch_input;

    float gear;
    float gforce_lateral;
    float gforce_longitudinal;

    float lap;
    float engine_rate;

    float native_sli_support;
    float race_position;

    std::array<float, 5> _unused1;

    float fuel_in_tank;

    std::array<float, 2> _unused2;

    float race_sector;
    std::array<float, 2> sector_time;
    UdpWheelVec brake_temp;
    UdpWheelVec _unused3;

    float laps_completed;
    float total_laps;
    float track_length;
    float last_lap_time;
    float max_rpm;
    float idle_rpm;
    float max_gears;
};
