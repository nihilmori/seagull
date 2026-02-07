cmake_minimum_required(VERSION 0.0.0)
project(seagull-server)

include(FetchContent)

FecthContent_Declare(
    userver
    GIT_REPOSITORY https://github.com/userver-framework/userver.git
    GIT_TAG        v2.15
    GIT_SHALLOW    TRUE
)

FetchContent_MakeAvailable(userver)

add_executable(${PROJECT_NAME}
    userver::core
    userver::http
    userver::components
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
