cmake_minimum_required (VERSION 2.8)

set(CMAKE_SYSTEM_FLAGS "${CMAKE_SYSTEM_FLAGS} -DARM_ANDROID -std=c++11 -O3")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${RTYPE_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${RTYPE_LIB_DIR}")
