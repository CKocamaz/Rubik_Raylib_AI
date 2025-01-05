cmake_minimum_required(VERSION 3.15)

# Project name and version
project(MyRaylibProject VERSION 1.0)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Specify paths to Raylib's headers and library
set(RAYLIB_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/raylib/include) # Adjust to your structure
set(RAYLIB_LIBRARY ${CMAKE_SOURCE_DIR}/raylib/libraylib.so)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include) 

# Add include directory for Raylib
include_directories(${RAYLIB_INCLUDE_DIR})
include_directories(${INCLUDE_DIR})

file(GLOB SRC_FILES ${CMAKE_SOURCE_DIR}/src/*.cpp)

# Add the executable
add_executable(${PROJECT_NAME} ${SRC_FILES}) # Adjust source path

# Link the Raylib library
target_link_libraries(${PROJECT_NAME} ${RAYLIB_LIBRARY})

# Additional configurations
if (MSVC)
    # Avoid console window for GUI apps on Windows
    set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS")
endif()
