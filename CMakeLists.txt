cmake_minimum_required(VERSION 3.20)
project(cpr_example)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpr_example main.cpp)

if(WIN32) # Install dlls in the same directory as the executable on Windows
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
endif()

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 21f42cf882d0b7e5ae9e3434574fc47e187728de) # The commit hash for 1.8.0. Replace with the latest from: https://github.com/libcpr/cpr/releases
FetchContent_MakeAvailable(cpr)

target_link_libraries(cpr_example PRIVATE cpr::cpr)
