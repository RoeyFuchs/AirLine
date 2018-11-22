cmake_minimum_required(VERSION 3.12)
project(AirLine)

set(CMAKE_CXX_STANDARD 14)

add_executable(AirLine main.cpp Employee.cpp Employee.h ID.cpp ID.h IDGen.h Plane.h Flight.h Customer.h Reservation.h)