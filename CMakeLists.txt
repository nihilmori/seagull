cmake_minimum_required(VERSION 3.20)
project(EchoServiceFull)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(server)
add_subdirectory(client)

add_custom_target(build-all DEPENDS seagull-server seagull-client)
