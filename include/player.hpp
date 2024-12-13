#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
public:
    int x, y;
    Player(int startX, int startY);
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
};

#endif
