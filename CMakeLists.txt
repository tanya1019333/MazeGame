cmake_minimum_required(VERSION 3.10)
project(MazeGame)

set(CMAKE_CXX_STANDARD 17)

# Find SFML package
find_package(SFML 2.5 REQUIRED graphics window system)

# Include directories
include_directories(include)

# Add source files
add_executable(MazeGame
    src/main.cpp
    src/maze.cpp
    src/player.cpp
)

# Link SFML libraries
target_link_libraries(MazeGame sfml-graphics sfml-window sfml-system)
