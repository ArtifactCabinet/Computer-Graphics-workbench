cmake_minimum_required(VERSION 3.19)
project(openGL)

set(CMAKE_CXX_STANDARD 20)

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${OPENGL_INCLUDE_DIR})

add_executable(prog main.cpp)
target_link_libraries(prog ${SDL2_LIBRARIES} ${OPENGL_LIBRARIES})

add_executable(simpler 01_single_triangle.cpp)
target_link_libraries(simpler ${SDL2_LIBRARIES} ${OPENGL_LIBRARIES})
