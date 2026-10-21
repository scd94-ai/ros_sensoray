from setuptools import find_packages
from setuptools import setup

setup(
    name='soft_actuator_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('soft_actuator_msgs', 'soft_actuator_msgs.*')),
)
