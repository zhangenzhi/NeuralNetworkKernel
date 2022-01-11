cmake_minimum_required(VERSION 3.10) 

project(NNK VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Eigen3)
include_directories(${EIGEN3_INCLUDE_DIRS})

add_executable(NNK test_eigen.cc)