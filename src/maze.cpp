#include "maze.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <random>

const int N = 10; // Maze size

void generateMaze(std::vector<std::vector<int>>& maze) {
    std::vector<std::pair<int, int>> path;
    path.push_back({1, 1});
    maze[1][1] = 0;

    while (!path.empty()) {
        auto current = path.back();
        int x = current.first;
        int y = current.second;
        std::vector<std::pair<int, int>> neighbors;
        
        if (x > 1 && maze[x - 2][y] == 1) neighbors.push_back({x - 2, y});
        if (x < N - 2 && maze[x + 2][y] == 1) neighbors.push_back({x + 2, y});
        if (y > 1 && maze[x][y - 2] == 1) neighbors.push_back({x, y - 2});
        if (y < N - 2 && maze[x][y + 2] == 1) neighbors.push_back({x, y + 2});
        
        if (!neighbors.empty()) {
            std::random_device rd;
            std::mt19937 g(rd());
            std::shuffle(neighbors.begin(), neighbors.end(), g);
            auto next = neighbors[0];
            maze[next.first][next.second] = 0;
            maze[(next.first + x) / 2][(next.second + y) / 2] = 0;
            path.push_back(next);
        } else {
            path.pop_back();
        }
    }
}

void placeEnd(std::vector<std::vector<int>>& maze) {
    int x, y;
    do {
        x = rand() % N;
        y = rand() % N;
    } while (maze[x][y] != 0);  // Ensure the endpoint is placed on a path
    maze[x][y] = 2;  // Mark the endpoint with a "2"
}
