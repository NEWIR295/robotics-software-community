import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import SetEnvironmentVariable # for colors in terminal

def generate_launch_description():
    
    config=os.path.join(
        get_package_share_directory('temp_bringups'),
        'config',
        'temp_range.yaml'
    )
    
    temp_publisher_node = Node(
        package='temp_client',
        executable='temp_pub',
        name='temp_pub_node',
        output='screen',
        emulate_tty=True, # for colors in terminal
        parameters=[config]
    )

    temp_subscriber_node = Node(
        package='temp_server',
        executable='temp_sub',
        name='temp_sub_node',
        output='screen',
        emulate_tty=True, # for colors in terminal
        parameters=[config]
    )

    return LaunchDescription(
        [
            SetEnvironmentVariable(name='RCUTILS_COLORIZED_OUTPUT', value='1'), # for colors in terminal
            temp_publisher_node,
            temp_subscriber_node
        ]
    )