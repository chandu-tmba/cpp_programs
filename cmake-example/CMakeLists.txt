cmake_minimum_required(VERSION 3.10.2)
project(Carproject)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
include_directories(include)
message(${CMAKE_BINARY_DIR})
add_executable(car src/main.cpp src/Car.cpp )
install(DIRECTORY DESTINATION ${CMAKE_SOURCE_DIR}/bin/)
install(TARGETS car DESTINATION ${CMAKE_SOURCE_DIR}/bin/)


