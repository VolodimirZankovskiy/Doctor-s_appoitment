cmake_minimum_required(VERSION 3.26)
project(labaka2_0)

set(CMAKE_CXX_STANDARD 17)

add_executable(labaka2_0 main.cpp
        Doctor.cpp
        Doctor.h
        Patient.cpp
        Patient.h
        Hospital.cpp
        Hospital.h)
