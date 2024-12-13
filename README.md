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

---

## Futures

### 1. **Use Different Maze Algorithms** [Maze algorithms](https://en.wikipedia.org/wiki/Maze_generation_algorithm#Modified_version)
To make the maze generation more interesting, you can implement and experiment with different maze generation algorithms. Below are some popular algorithms:

#### **a) Recursive Backtracking (Current Algorithm)**
You’ve already implemented this algorithm, which is a depth-first search (DFS) approach. It's simple and effective for generating random mazes.

#### **b) Prim's Algorithm**
Prim’s algorithm is a popular alternative that guarantees a random maze. Unlike recursive backtracking, it grows the maze from a set of walls instead of a path.

#### **c) Kruskal's Algorithm**
Kruskal's algorithm is another method that works by finding the minimum spanning tree and adding edges between the cells in a grid.

#### **d) Binary Tree Algorithm**
This algorithm is very simple and fast. It creates a maze by either carving a passage north or east from each cell, depending on random selection.

#### **e) Eller’s Algorithm**
This is a more advanced maze generation algorithm, ideal for large mazes, which uses a disjoint-set data structure to keep track of the maze's progress.

### 2. **Improvement on UI**
Improving the user interface (UI) can make the game more engaging and visually appealing.

#### **a) Add Backgrounds**
You can enhance the maze environment by adding background graphics such as a dark dungeon theme, outdoor scenery, or a sci-fi atmosphere.

#### **b) Animations**
- Add animations for player movements (e.g., smooth transitions).
- Animate the maze creation, showing walls being built and paths being opened.

#### **c) Add Sound Effects and Music**
Adding sound effects for player movements, winning, and losing can make the game more immersive. Background music can also improve the overall experience.

#### **d) Timer and Score System**
Implement a timer that tracks how long it takes to complete the maze. You could also add a score system where players are awarded points based on their completion time.

#### **e) Graphical UI for Controls**
Instead of using just keyboard inputs, you could add on-screen buttons or a menu system for starting the game, restarting, etc.

### 3. **Adding More Features**

#### **a) Maze Size Variability**
Allow users to select different maze sizes. Instead of the fixed `N = 10`, let users choose between small, medium, and large mazes (e.g., 10x10, 20x20, 30x30).

#### **b) Multiple Levels**
Add a level progression system:
- **Level 1**: Small, easy maze
- **Level 2**: Larger maze with more complex paths
- **Level 3**: Larger mazes with obstacles, like moving platforms or teleporters

#### **c) Obstacles and Hazards**
Introduce obstacles such as:
- **Moving obstacles**: Add moving walls or enemies that follow a set path.
- **Traps**: Implement traps that reset the player to the start point when triggered (e.g., spike traps, pits).

#### **d) Power-ups and Collectibles**
Include power-ups like:
- **Speed Boost**: Temporarily increase player speed.
- **Invisibility**: Make the player invisible to enemies or hazards.
- **Keys**: Add locked doors in the maze, requiring players to find keys.

#### **e) Maze Generator Customization**
Allow players to customize their maze generation by:
- Choosing maze generation algorithms (provide a settings menu for different algorithms).
- Choosing the difficulty level (which affects maze complexity and size).

#### **f) Multiplayer Mode**
Add a multiplayer mode where two players can play simultaneously or cooperate to navigate through the maze. Players can race to the endpoint or solve the maze together.

#### **g) AI Pathfinding**
Implement an AI that can generate a path from the start to the end, which can be used as a tutorial or for comparison to the player’s path. You could use pathfinding algorithms like **A*** or **Dijkstra**.

### 4. **Example Game Flow Changes**
Here’s an example of how your game flow can change with these improvements:

- **Main Menu**: Allow the player to choose between starting a new game, loading a saved game, adjusting game settings (maze size, difficulty), or viewing instructions.
- **Gameplay**: Once the game starts, the maze is generated, and the player can navigate with the keyboard.
- **Win/Lose Conditions**: When the player reaches the endpoint, show a win screen with their time and score. If they hit an obstacle or fall into a trap, they should be reset to the start of the maze.
