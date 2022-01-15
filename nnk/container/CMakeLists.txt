
project(container)

find_package(Eigen3)
include_directories(${EIGEN3_INCLUDE_DIRS})

# aux_source_directory(. DIR_LIB_SRCS)
# add_library (${PROJECT_NAME} ${DIR_LIB_SRCS})
add_library (${PROJECT_NAME} tensor.cc)
add_library(nnk::container ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})