cmake_minimum_required(VERSION 3.17)
project(cpplearn)

MESSAGE(STATUS "Hello CMake!")
set(CMAKE_CXX_STANDARD 20)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

set(MAT_DIR ${SRC_DIR}/mat)
add_subdirectory(${MAT_DIR})

set(OpenBLAS_HOME /Users/zhouxiumin/github/library/OpenBLAS)

include_directories(
        ${OpenBLAS_HOME}
        ${MAT_DIR}
)

link_directories(
        ${OpenBLAS_HOME}
)

add_executable(cpplearn main.cpp src/mat/matrix.h src/mat/matrix.cpp)

target_link_libraries(cpplearn libopenblas.a)
target_link_libraries(cpplearn -lm)
target_link_libraries(cpplearn -lpthread)