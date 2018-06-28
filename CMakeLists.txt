cmake_minimum_required ( VERSION 3.10 )
set ( PROJECT_NAME "OOPFizzBuzz" )
project ( ${PROJECT_NAME} )

set ( CMAKE_CXX_STANDARD 11 )

add_executable ( ${PROJECT_NAME} main.cpp OOPFizzBuzz.cpp OOPFizzBuzz.h )