cmake_minimum_required(VERSION 3.12)
project(AirLine)

set(CMAKE_CXX_STANDARD 14)

add_executable(AirLine main.cpp MyEmployee.h MyPlane.h MyFlight.h MyCustomer.h Date.cpp Date.h interface.h MyReservation.h IDGen.cpp MyImplementation.h MyImplementation.cpp DataBase.cpp DataBase.h)