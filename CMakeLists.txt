cmake_minimum_required(VERSION 4.1)
project(uniusers)

set(CMAKE_CXX_STANDARD 20)

add_executable(uniusers main.cpp
        Person.cpp
        Person.h)
