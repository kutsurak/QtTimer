# Copyright 2011 Panagiotis Koutsourakis. 

# This file is part of QtTimer. QtTimer is free software: see file
# License for more information.

cmake_minimum_required(VERSION 2.8)
project(QtTimer)

set(CMAKE_CXX_FLAGS "-Wall")

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

find_package(Qt4 REQUIRED COMPONENTS QtCore QtGui)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src)
