cmake_minimum_required(VERSION 3.10)
project(project25)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Find SDL2
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# Find OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Find OpenGL
find_package(OpenGL REQUIRED)

# Add source files
file(GLOB_RECURSE SOURCES src/*.cpp)

# Add executable
add_executable(project25 ${SOURCES})

# Link libraries
target_link_libraries(project25 ${SDL2_LIBRARIES} ${OpenCV_LIBS} ${OPENGL_LIBRARIES})
