PROJECT(cppSRC)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)


SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g3 -Wall -O2") 
add_executable(dynamic_array dynamic_array.h	dynamic_array.c)
