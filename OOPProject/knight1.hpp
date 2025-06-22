#include "drawing.hpp"
#include "enemy.hpp"
#include "SDL.h"
#pragma once

class Knight1: public enemy 
{
    private:
    SDL_Rect srcRect, moverRect;

    public:
        int frame=0;
        //different funtions for different purposes
        Knight1();
        void draw();
        void run();
        void attack();
        void death();
        bool checkAtScreenEnd();
        SDL_Rect getMover();
        ~Knight1();
};