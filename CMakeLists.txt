cmake_minimum_required (VERSION 3.5)
project (OpenCL_Experiments)

find_package(OpenCL REQUIRED)
include_directories(${OpenCL_INCLUDE_DIRS})
if(NOT OpenCL_FOUND)
    message(ERROR " OpenCL is not installed.")
endif(NOT OpenCL_FOUND)

add_executable (main main.C)

target_link_libraries(main ${OpenCL_LIBRARIES})
