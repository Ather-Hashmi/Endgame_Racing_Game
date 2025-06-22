#include "drawing.hpp"
#include "enemy.hpp"
#include "SDL.h"
#pragma once


//derived class
class Knight2: public enemy 
{
    private:
    SDL_Rect srcRect, moverRect;

    public:

    //different functions for different purposes
        int frame=0;
        Knight2();
        void draw();
        void run();
        void attack();
        void death();
        bool checkAtScreenEnd();
        SDL_Rect getMover();
        ~Knight2();
};