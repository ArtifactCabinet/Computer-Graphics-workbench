cmake_minimum_required(VERSION 3.17)
project(cairo_cmake_sample)

set(CMAKE_CXX_STANDARD 20)

find_library(LIBRARY_CAIRO cairo)

add_executable(cairo_main main.cpp)

target_link_libraries(cairo_main PRIVATE ${LIBRARY_CAIRO})