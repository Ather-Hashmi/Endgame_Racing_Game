#include "drawing.hpp"
#pragma once


//abstract class
class obstacle{
    private: 
     SDL_Rect srcRect, moverRect;

    public:
    
    //pure virtual functions for to be used by derived classes
    obstacle();
    virtual SDL_Rect getMover()=0;
    virtual void draw()= 0;
    virtual void move()= 0;
    virtual ~obstacle()=0;
    virtual bool checkAtScreenEnd()=0;

};