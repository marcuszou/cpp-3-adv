cmake_minimum_required(VERSION 3.25)

project(main)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp
        Rectangle.cpp
        Rectangle.h
        Person.cpp
        Person.h
        SmartPointer.cpp
        SmartPointer.h)
