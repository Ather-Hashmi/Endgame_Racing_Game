#include "drawing.hpp"
#include "bars.hpp"
#pragma once

class healthBar :public bar
{
    public:

    //different states for purposes
    SDL_Rect srcRect, moverRect;
    healthBar();
    int frame=0;
    virtual void draw();
    virtual void display(int n);
    virtual ~healthBar();
};