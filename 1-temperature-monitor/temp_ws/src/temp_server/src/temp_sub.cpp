/*
    Author: Mohamed Newir
    Date: 22/09/2025
    File: temp_sub.cpp
    Description:
        o Main file to create and spin the Temperature Subscriber node
*/


#include "../include/temp_server/sub.hpp"

int main(int argc, char **argv){

    rclcpp::init(argc, argv); /* initialize node */
    auto temp_sub_node = std::make_shared<TempSubscriber>(); /* create TempSubscriber node */

    try{
        //while(rclcpp::ok()){    /* Node is spinning.until you press Ctrl+C to exit. */ -> not needed as spin will keep it alive 
                                                                                /* and we aren't doing any periodic work here */
            rclcpp::spin(temp_sub_node); /* keep node alive to receive callbacks */
        // }
        
    }catch(const std::exception &e){
        RCLCPP_ERROR(rclcpp::get_logger("shutdown_logger"), "Exception in TempSubscriber Node: %s", e.what());
    }
    catch(...){
        RCLCPP_ERROR(rclcpp::get_logger("shutdown_logger"), "Unknown Exception in TempSubscriber Node");
    }
    temp_sub_node.reset(); /* for gracefully shutdown as it free release resources -memory- smart pointer point to and changes it to nullptr instead */
    /*
    temp_sub_node -> destroy_node();    doesn't exist in cpp also we may assume it is called automatically
                                        when the shared pointer goes out of scope
    */
    rclcpp::shutdown(); /* shutdown node */

    return 0;
}