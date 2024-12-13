# Maze Game

A simple maze game written in C++ using SFML.

## Prerequisites

To run this game, you'll need to install the following dependencies:

- **C++ Compiler**: A C++17 compatible compiler (GCC, Clang, MSVC, etc.)
- **CMake**: A build system to compile the project.
- **SFML**: The Simple and Fast Multimedia Library for graphics, window management, and other multimedia features.

### Installing SFML

- **Linux (Ubuntu/Debian)**:
    ```bash
    sudo apt-get update
    sudo apt-get install libsfml-dev
    ```

- **macOS (Homebrew)**:
    ```bash
    brew install sfml
    ```

- **Windows**:
    Download the latest SFML version from [SFML Downloads](https://www.sfml-dev.org/download.php) and follow the instructions to set it up with your C++ IDE or compiler.

---

## How to Build and Run the Game

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/yourusername/MazeGame.git
    cd MazeGame
    ```

2. **Create a Build Directory**:
    This step is necessary for CMake to build the project.
    ```bash
    mkdir build
    cd build
    ```

3. **Run CMake**:
    Configure the project using CMake:
    ```bash
    cmake ..
    ```

4. **Build the Project**:
    Use the following command to compile the project:
    ```bash
    make
    ```

    This will create an executable named `MazeGame` in the `build` folder.

5. **Run the Game**:
    After building, you can run the game:
    ```bash
    ./MazeGame
    ```

---

## Controls

- **W**: Move up
- **S**: Move down
- **A**: Move left
- **D**: Move right

---

## Features

- Randomly generated maze
- Player movement using keyboard
- Win condition when the player reaches the endpoint
