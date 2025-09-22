"""
    Author: Mohamed Newir
    Date: 22/09/2025
    File: temp_pub.py
    Description:
        o Python Temperature Publisher node for ROS2 
        o Publishes random temperature readings within a specified range at a defined frequency
        o Topic name and temperature range can be set via command line arguments
        o Uses custom Temperature message type from temp_interface package
"""

#!/usr/bin/env python3

import sys
import math
import random
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from temp_interface.msg import Temperature

class TempPublisher(Node):
    def __init__(self):
        
        sensor_id = sys.argv[1] if len(sys.argv) > 1 else "1" # get sensor id from command line argument or default to "1"
        topic_name = f"/temp_sensor_{sensor_id}" # define topic name based on sensor id
        freq =  int(sys.argv[4]) if (len(sys.argv)) > 3 else 1 # get publishing frequency from command line argument or default to 1 Hz
        self.range = (int(sys.argv[2]), int(sys.argv [3])) if len(sys.argv) > 4 else (10, 30) # get temperature range from command line arguments or default to (10, 30)
        
        super().__init__(f"temp_publisher_{sensor_id}") #initialize the node with the name "temp_publisher"
        
        qos = QoSProfile(   # create a QoS profile for the publisher
            reliability = ReliabilityPolicy.BEST_EFFORT, # fire and forget delivery
            # keep last 10 messages
            history = HistoryPolicy.KEEP_LAST,
            depth = 10
        )
        
        # create publisher with the specified topic name and QoS profile
        self.temp_pub = self.create_publisher(Temperature, topic= topic_name, qos_profile= qos)
        
        # create a timer to call the timer_cb function at the specified frequency
        self.temp_timer = self.create_timer(1.0/freq, self.timer_cb)        
    
    def timer_cb(self):
        pass


def main(args=None):
    rclpy.init(args=args) #initialize python client library 
    pub_node = TempPublisher() #create an instance of the TempPublisher class
    rclpy.spin(pub_node) #keep the node running and processing callbacks
    pub_node.destroy_node() #destroy the node when done 
    rclpy.shutdown() #shutdown the ROS2 client library
    

if __name__ == '__main__':
    main()