#include "drawing.hpp"
#pragma once

//abstract class bar
class bar
{
    public:
    SDL_Rect srcRect, moverRect;
    bar();
    int frame=0;

    //pure virtual functions for drawing and displayong updated state;
    virtual void draw()= 0;
    virtual void display(int n)=0;
    virtual ~bar()=0;
};