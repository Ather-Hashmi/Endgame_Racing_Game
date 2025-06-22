#include "drawing.hpp"
#include "car.hpp"
#include "enemy.hpp"
#include "obstacle.hpp"
#pragma once

//main player 
class player: public Car{
    private: 
        SDL_Rect srcRect, moverRect;

    public:

    int frame= 0;
    player();
     void draw();
     void move();
     bool checkCollision(enemy* obj);
     bool checkCollision(obstacle* obj);
     void jump();
     ~player();
    void cancelJump();
};