from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import SetEnvironmentVariable # for colors in terminal


def generate_launch_description():
    return LaunchDescription([
        SetEnvironmentVariable(name='RCUTILS_COLORIZED_OUTPUT', value='1'), # for colors in terminal
        ExecuteProcess(
            shell=True,
            cmd=['docker', 'compose', 'up'],
            cwd="./src",
            output='screen'
        )
    ])