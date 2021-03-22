cmake_minimum_required(VERSION 3.19)
project(LearnOpenGL_com)

set(CMAKE_CXX_STANDARD 20)

find_package(glfw3 REQUIRED)
add_subdirectory(glad)

add_executable(single-triangle 01_single-Triangle.cpp)

target_link_libraries(single-triangle PUBLIC glad glfw  ${CMAKE_DL_LIBS})