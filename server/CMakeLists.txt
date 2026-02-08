cmake_minimum_required(VERSION 3.14)
project(seagull-server)

include(FetchContent)

FetchContent_Declare(
    userver
    GIT_REPOSITORY https://github.com/userver-framework/userver.git
    GIT_TAG        v2.15
    GIT_SHALLOW    TRUE
)

FetchContent_MakeAvailable(userver)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    main.cpp
    echo_handler.cpp
)

target_link_libraries(${PROJECT_NAME} PUBLIC userver::core)
