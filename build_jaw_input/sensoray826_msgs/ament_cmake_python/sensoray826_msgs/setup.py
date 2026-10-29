from setuptools import find_packages
from setuptools import setup

setup(
    name='sensoray826_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('sensoray826_msgs', 'sensoray826_msgs.*')),
)
