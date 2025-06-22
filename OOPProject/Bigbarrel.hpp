#include "drawing.hpp"
#include "obstacle.hpp"
#pragma once

//derived class of obstacle
class bigBarrel: public obstacle
{
    SDL_Rect srcRect, moverRect;

    public:

    // functions for different states and checks of the class. 
    bigBarrel();
    SDL_Rect getMover();
    int frame=0; //for different states ofanimation
    bool checkAtScreenEnd();
    void draw();
    void move();
    void explode();
    ~bigBarrel();

};