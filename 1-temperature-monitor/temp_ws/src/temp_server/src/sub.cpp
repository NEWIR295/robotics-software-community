/*
    Author: Mohamed Newir
    Date: 22/09/2025
    File: sub.cpp
    Description:
        o Temperature Subscriber class implementation
*/

#include "../include/temp_server/sub.hpp"

TempSubscriber::TempSubscriber(void) : Node("temp_sub_node")
{
    this->declare_parameter<std::string>("sensor_id", "1");
    this->declare_parameter<int>("frequency", 1);
    this->declare_parameter<float>("min_temp", 10.0);
    this->declare_parameter<float>("max_temp", 30.0);
    this->declare_parameter<std::string> ("unit", "C");

    this->get_parameter("sensor_id", __sensor_id);
    this->get_parameter("unit", __unit);
    this->get_parameter("frequency", __freq);
    this->get_parameter("min_temp", __min_temp);
    this->get_parameter("max_temp", __max_temp);

    RCLCPP_INFO(this->get_logger(), "Temperature Subscriber Node Started For sensor_%s at %d Hz with range (%0.2f, %0.2f) %s", 
                                                __sensor_id.c_str(),__freq, __min_temp, __max_temp, __unit.c_str());

    auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10)).best_effort();

    __temp_sub = this -> create_subscription<temp_interface::msg::Temperature>("/temperature", qos_profile,
                                                            std::bind(&TempSubscriber::__temp_cb, this, std::placeholders::_1));
}

void TempSubscriber::__temp_cb(const temp_interface::msg::Temperature::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Published Temperature: %0.2f %s from sensor_%s at %d.%u",
                    msg -> value.data, msg -> unit.data.c_str(), __sensor_id.c_str(), msg -> timestamp.sec, msg -> timestamp.nanosec);  

    if( (msg -> value.data < __min_temp) || (msg -> value.data > __max_temp) ){
        RCLCPP_WARN(this->get_logger(), "Temperature %0.2f %s from sensor_%s is out of range! at %d.%u",
                msg -> value.data, msg -> unit.data.c_str(), __sensor_id.c_str(), msg -> timestamp.sec, msg -> timestamp.nanosec);
    }

    if(msg -> value.data > __previous_temp_value){
        RCLCPP_WARN(this->get_logger(), "Temperature is rising");
    }
    else if(msg -> value.data < __previous_temp_value){
        RCLCPP_WARN(this->get_logger(), "Temperature is falling");
    }
    else{
        RCLCPP_WARN(this->get_logger(), "Temperature is stable");
    }

    __previous_temp_value = msg -> value.data;
}

TempSubscriber::~TempSubscriber(void)
{
    RCLCPP_WARN(this->get_logger(), "Destroying TempSubscriber Node");
}