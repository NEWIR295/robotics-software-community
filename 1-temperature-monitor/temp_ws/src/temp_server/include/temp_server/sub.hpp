/*
    Author: Mohamed Newir
    Date: 22/09/2025
    File: sub.hpp
    Description:
        o Temperature Subscriber class declaration
*/

#ifndef SUB_HPP
#define SUB_HPP

// ROS2 C++ libraries
#include "rclcpp/rclcpp.hpp"

#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/float32.hpp"
#include "std_msgs/msg/int8.hpp"

#include "temp_interface/msg/temperature.hpp"

class TempSubscriber : public rclcpp::Node
{
private:
    std::string __sensor_id, __unit;
    int __freq;
    float __min_temp, __max_temp, __previous_temp_value = 0.0;
    rclcpp::Subscription<temp_interface::msg::Temperature>::SharedPtr __temp_sub;
    void __temp_cb(const temp_interface::msg::Temperature::SharedPtr msg);

public:
    TempSubscriber(void);
    ~TempSubscriber(void);
};

#endif // SUB_HPP