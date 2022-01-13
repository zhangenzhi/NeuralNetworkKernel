cmake_minimum_required(VERSION 3.14) 

project(NNK VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Setup gtest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

find_package(Eigen3)
include_directories(${EIGEN3_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} test.cc)

target_link_libraries(
    ${PROJECT_NAME}
    gtest_main
)