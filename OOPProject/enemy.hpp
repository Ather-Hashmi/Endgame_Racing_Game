#include "drawing.hpp"
#pragma once

//abstract class
class enemy{

    private:
    
    SDL_Rect srcRect, moverRect;
    public:
    // different pure virtual functions for different states
    enemy();

    virtual SDL_Rect getMover()=0;
     virtual void draw()=0;
     virtual void run()=0;
     virtual void attack()=0;
    
     virtual bool checkAtScreenEnd();
     virtual ~enemy()=0;
};