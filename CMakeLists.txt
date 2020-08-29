cmake_minimum_required(VERSION 3.17)
project(cpplearn)

set(CMAKE_CXX_STANDARD 20)

set(OpenBLAS_HOME /Users/zhouxiumin/github/library/OpenBLAS)

include_directories(${OpenBLAS_HOME})

link_directories(${OpenBLAS_HOME})

add_executable(cpplearn main.cpp)

target_link_libraries(cpplearn libopenblas.a)
target_link_libraries(cpplearn -lm)
target_link_libraries(cpplearn -lpthread)