
cmake_minimum_required(VERSION 3.10)
project(high_performance_linux_networking_platform)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(network_platform
    src/main.cpp
    src/packet_engine.cpp
    src/router.cpp
    src/firewall.cpp
    src/nat.cpp
)

target_include_directories(network_platform PRIVATE include)
