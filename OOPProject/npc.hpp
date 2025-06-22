#include "drawing.hpp"
#pragma once

//class abstract
class NPC{
    private: 
     SDL_Rect srcRect, moverRect;

    public:
    
    NPC();

    //pure virtual functions for ifferent sstates
    virtual void draw()= 0;
    virtual void move()= 0;
    virtual ~NPC()=0;
    virtual bool checkAtScreenEnd()=0;

};