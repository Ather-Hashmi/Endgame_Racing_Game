#include "drawing.hpp"
#include "obstacle.hpp"
#pragma once

class heart: public obstacle {
    SDL_Rect srcRect, moverRect;
    public:
    int frame=0;
    //different states for  differnt purposes
    void draw();
    void move();
    SDL_Rect getMover();
    bool checkAtScreenEnd();
    heart();
    ~heart();
};