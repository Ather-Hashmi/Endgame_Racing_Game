#include "drawing.hpp"
#include "obstacle.hpp"

#pragma once


class star : public obstacle
{

SDL_Rect srcRect, moverRect;
    public:


    //different functions for different state
    void draw();
    void move();
    SDL_Rect getMover();
    bool checkAtScreenEnd();
    star();
    ~star();
};

