#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "maze.hpp"
#include "player.hpp"

const int N = 10;
const int TILE_SIZE = 40;  // Size of each tile (pixels)

int main() {
    srand(time(nullptr));

    // Initialize maze
    std::vector<std::vector<int>> maze(N, std::vector<int>(N, 1));
    generateMaze(maze);
    placeEnd(maze);

    // Create player instance at the start position
    Player player(1, 1);

    // Create SFML window
    sf::RenderWindow window(sf::VideoMode(N * TILE_SIZE, N * TILE_SIZE), "Maze Game");
    window.setFramerateLimit(30);

    // Colors
    sf::Color wallColor = sf::Color::Black;
    sf::Color pathColor = sf::Color::White;
    sf::Color playerColor = sf::Color::Blue;
    sf::Color endColor = sf::Color::Red;

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Player movement
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && player.x > 0 && maze[player.x - 1][player.y] != 1) {
            player.moveUp();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && player.x < N - 1 && maze[player.x + 1][player.y] != 1) {
            player.moveDown();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && player.y > 0 && maze[player.x][player.y - 1] != 1) {
            player.moveLeft();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && player.y < N - 1 && maze[player.x][player.y + 1] != 1) {
            player.moveRight();
        }

        // Check for win condition
        if (maze[player.x][player.y] == 2) {
            window.close();
            std::cout << "You reached the endpoint!" << std::endl;
        }

        // Draw the maze
        window.clear();
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                sf::RectangleShape cell(sf::Vector2f(TILE_SIZE, TILE_SIZE));
                cell.setPosition(j * TILE_SIZE, i * TILE_SIZE);
                if (maze[i][j] == 1) {
                    cell.setFillColor(wallColor); // Walls
                } else if (maze[i][j] == 2) {
                    cell.setFillColor(endColor); // Endpoint
                } else {
                    cell.setFillColor(pathColor); // Paths
                }
                window.draw(cell);
            }
        }

        // Draw the player
        sf::RectangleShape playerShape(sf::Vector2f(TILE_SIZE, TILE_SIZE));
        playerShape.setFillColor(playerColor);
        playerShape.setPosition(player.y * TILE_SIZE, player.x * TILE_SIZE);
        window.draw(playerShape);

        window.display();
    }

    return 0;
}
