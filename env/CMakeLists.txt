cmake_minimum_required(VERSION 3.10)

# Set the project name
set(PROJECT_NAME PGETemplateProject)

# Define project
project(${PROJECT_NAME})

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(${PROJECT_NAME} ../src/main.cpp)

# Add compiler flags
target_link_libraries(${PROJECT_NAME} user32 gdi32 opengl32 gdiplus Shlwapi dwmapi stdc++fs)

# Include header files
include_directories(${CMAKE_SOURCE_DIR}/../include)

