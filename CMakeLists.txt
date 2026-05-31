cmake_minimum_required(VERSION 3.29)
project(leetcode_in_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(leetcode_in_cpp
        easy/two-sum.cpp
        medium/2126-destroying-asteroids.cpp
        main.cpp
        medium/2126-destroying-asteroids.h
        easy/two-sum.h
        medium/medium.h
        easy/nrepeatedelementinsize2narray.cpp
        easy/nrepeatedelementinsize2narray.h)
