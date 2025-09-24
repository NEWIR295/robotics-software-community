"""
    Author: Mohamed Newir
    Date: 22/09/2025
    File: temp_pub.py
    Description:
        o Python Temperature Publisher node for ROS2, run it using: 
                    - ros2 run temp_client temp_pub <sensor_id> <frequency> <min_temp> <max_temp> <unit>
        o This node allows us to create multiple ROS2 nodes with different names and topics using the same executable without
            remapping node name or topic name as it gets the node name and topic name from command line arguments along with frequency and 
            temperature range.
        o Publishes random temperature readings within a specified range at a defined frequency
        o Topic name and temperature range can be set via command line arguments
        o Uses custom Temperature message type from temp_interface package
"""

#!/usr/bin/env python3

# Standard Python libraries
import sys
import math
import random
from datetime import datetime

# ROS2 Python libraries
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from temp_interface.msg import Temperature


class TempPublisher(Node):

    """
    Temperature Publisher Node class:
        - This class allow us to create multiple ros2 nodes with different names and topics with the same executable without 
            remapping node name or topic name as it get the node name and topic name from command line arguments as frequency 
            and temperature range also.
            ros2 run temp_client temp_pub <sensor_id> <frequency> <min_temp> <max_temp> <unit>
        - It publishes random temperature readings within a specified range at a defined frequency 
    """
    
    def __init__(self):
        
        # self.sensor_id = sys.argv[1] if len(sys.argv) > 1 else "1" # get sensor id from command line argument or default to "1"
        # topic_name = f"/temp_sensor_{self.sensor_id}" # define topic name based on sensor id
        # freq =  int(sys.argv[2]) if (len(sys.argv)) > 2 else 1 # get publishing frequency from command line argument or default to 1 Hz
        # self.min_temp, self.max_temp = tuple((int(sys.argv[3]), int(sys.argv [4]))) if len(sys.argv) > 3 else tuple((10.0, 30.0)) # get temperature range from command line arguments or default to (10, 30)
        # self.unit = sys.argv[5] if len(sys.argv) > 5 else "C" # get temperature unit from command line argument or default to "C"
        
        # super().__init__(f"temp_publisher_{self.sensor_id}") #initialize the node with the name "temp_publisher"
        
        super().__init__("temp_pub_node")
        
        # declare parameters with default values
        self.declare_parameter("sensor_id", "1")
        self.declare_parameter("frequency", 1)
        self.declare_parameter("min_temp", 10.0)
        self.declare_parameter("max_temp", 30.0)
        self.declare_parameter("unit", "C")
        
        # declare private variables to get parameters values
        self.__sensor_id = self.get_parameter("sensor_id").value
        self.__freq = self.get_parameter("frequency").value
        self.__min_temp = self.get_parameter("min_temp").value
        self.__max_temp = self.get_parameter("max_temp").value
        self.__unit = self.get_parameter("unit").value
        
        self.get_logger().info(f"Temperature Publisher Node Started For sensor_{self.__sensor_id} at {self.__freq} Hz with range ({self.__min_temp}, {self.__max_temp}) {self.__unit}")
        
        qos = QoSProfile(   # create a QoS profile for the publisher
            reliability = ReliabilityPolicy.BEST_EFFORT, # fire and forget delivery
            # keep last 10 messages
            history = HistoryPolicy.KEEP_LAST,
            depth = 10
        )
        
        # create publisher with the specified topic name and QoS profile
        self.__temp_pub = self.create_publisher(Temperature, topic= "/temperature", qos_profile= qos)
        
        # create a timer to call the timer_cb function at the specified frequency
        self.__temp_timer = self.create_timer(1.0/self.__freq, self.__timer_cb)        
    
    def __timer_cb(self):
        msg = Temperature()
        msg.sensor_id.data = self.__sensor_id
        msg.value.data = self.__randomize_temp()
        msg.unit.data = self.__unit
        msg.timestamp = self.get_clock().now().to_msg() #datetime.now()  # get the current timestamp of system time, if i want to get the timestamp of ROS2 time,
                                        # i can use self.get_clock().now().to_msg()
                                        
        self.__temp_pub.publish(msg) # publish the temperature message
        self.get_logger().info(f"Published Temperature: {msg.value.data} {msg.unit.data} from sensor_{msg.sensor_id.data} at {msg.timestamp.sec}.{msg.timestamp.nanosec}")

        if (msg.value.data < self.__min_temp) or (msg.value.data > self.__max_temp):
            self.get_logger().warn(f"Temperature {msg.value.data} {msg.unit.data} from sensor_{msg.sensor_id.data} is out of range! at {msg.timestamp.sec}.{msg.timestamp.nanosec}")
        
    
    def __randomize_temp(self):
        mean = (self.__min_temp + self.__max_temp) / 2 
        amplitude = (self.__max_temp - self.__min_temp) / 2
        temp = mean + amplitude * math.sin(rclpy.clock.Clock().now().nanoseconds / 1e9) # generate a sinusoidal temperature reading
        temp += random.uniform(-1.0, 1.0) # generate a small random noise to add to the temperature reading
        return round(temp, 2) # return the temperature reading rounded to 2 decimal places
    
    def __del__(self):
        self.get_logger().warn("Temperature Publisher Node Stopped Cleanly")


"""
    main function to initialize and run the TempPublisher node
"""
def main(args=None):
    rclpy.init(args=args) #initialize python client library 
    pub_node = TempPublisher() #create an instance of the TempPublisher class
    

    try:
        rclpy.spin(pub_node) #keep the node running and processing callbacks
    
    except KeyboardInterrupt:
        #pub_node.get_logger().info("Temperature Publisher Node Stopped Cleanly") # commented to avoid duplicate shutdown messages
        pass
    
    except Exception as e:
        pub_node.get_logger().error(f"Exception in Temperature Publisher Node: {e}")
    
    finally:    
        # gracefully shutdown the node
        pub_node.destroy_node() #destroy the node when done 
        #rclpy.shutdown() #shutdown the ROS2 client library -> commented because rclpy.spin
                                                            # already calls rclpy.shutdown() when exiting the spin loop 
        #print("Temperature Publisher Node Stopped Cleanly") # print shutdown message to console -> handling it in class destructor
    

if __name__ == '__main__':
    main()