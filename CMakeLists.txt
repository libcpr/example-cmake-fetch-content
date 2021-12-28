cmake_minimum_required(VERSION 3.20)
project(cpr_example)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpr_example main.cpp)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG beb9e98806bb84bcc130a2cebfbcbbc6ce62b335) # The commit hash for 1.7.2. Replace with the latest from: https://github.com/libcpr/cpr/releases
FetchContent_MakeAvailable(cpr)

target_link_libraries(cpr_example PRIVATE cpr::cpr)