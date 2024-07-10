cmake_minimum_required(VERSION 3.28)

add_subdirectory(mymod)

add_executable(cpr_example main.cpp)
target_link_libraries(cpr_example PRIVATE mymod)