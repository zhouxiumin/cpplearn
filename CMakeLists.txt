cmake_minimum_required(VERSION 3.17)
project(cpplearn)

MESSAGE(STATUS "Hello CMake!")
set(CMAKE_CXX_STANDARD 20)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

set(OpenBLAS_HOME ${CMAKE_SOURCE_DIR}/lib/openblas/darwin)

include_directories(
        ${OpenBLAS_HOME}/include
)

link_directories(
        ${OpenBLAS_HOME}/lib
)

set(MAT_DIR ${SRC_DIR}/mat)
file(GLOB MAT_SRC "*.cpp")
add_subdirectory(${MAT_DIR})

set(PRIME_DIR ${SRC_DIR}/prime)
add_subdirectory(${PRIME_DIR})

set(LAMBDA_DIR ${SRC_DIR}/lambda)
add_subdirectory(${LAMBDA_DIR})

include_directories(
        ${MAT_DIR}
        ${PRIME_DIR}
)

add_executable(cpplearn main.cpp src/prime/prime.h src/prime/prime.cpp src/lambda/lambda1.cpp)

target_link_libraries(cpplearn libopenblas.a)
target_link_libraries(cpplearn -lm)
target_link_libraries(cpplearn -lpthread)