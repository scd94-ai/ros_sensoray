"""One board owner for the existing pressure writer and independent raw ADC."""
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('supply', default_value='false'),
        Node(package='sensoray826_ros', executable='sensoray_node', output='screen',
             parameters=[{'enable_pressure': True, 'enable_potentiometers': True,
                          'potentiometer_supply': ParameterValue(LaunchConfiguration('supply'), value_type=bool)}]),
    ])
