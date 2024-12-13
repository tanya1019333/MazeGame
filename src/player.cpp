#include "player.hpp"
#include <SFML/Window.hpp>
#include <iostream>

Player::Player(int startX, int startY) : x(startX), y(startY) {}

void Player::moveUp() {
    --x;
}

void Player::moveDown() {
    ++x;
}

void Player::moveLeft() {
    --y;
}

void Player::moveRight() {
    ++y;
}
