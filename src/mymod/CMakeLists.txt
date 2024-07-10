cmake_minimum_required(VERSION 3.28)

add_library(mymod)

target_sources(mymod PUBLIC FILE_SET CXX_MODULES FILES MyMod.cpp)

target_link_libraries(mymod PRIVATE cpr::cpr)