#include "drawing.hpp"
#include "car.hpp"
#include "enemy.hpp"
#pragma once
//derived class
class Helper: public Car{
    private:
         SDL_Rect srcRect, moverRect;

    public:

     //differetn functions for different states
    int frame= 0;
    Helper();
     void draw();
     void move();
     bool checkCollision(enemy* obj);
     ~Helper();
   
};