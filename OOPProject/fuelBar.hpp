#include "drawing.hpp"
#pragma once
#include "bars.hpp"

//derived class of bar
class fuelBar :public bar
{
    public:

   // different functions for different states
    SDL_Rect srcRect, moverRect;
    fuelBar();
    int frame=0;
    virtual void draw();
    virtual void display(int n);
    virtual ~fuelBar();
};