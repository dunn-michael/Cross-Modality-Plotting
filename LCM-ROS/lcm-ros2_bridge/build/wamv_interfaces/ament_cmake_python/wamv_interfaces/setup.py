from setuptools import find_packages
from setuptools import setup

setup(
    name='wamv_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('wamv_interfaces', 'wamv_interfaces.*')),
)
