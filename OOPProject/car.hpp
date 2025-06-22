#include "drawing.hpp"
#include "enemy.hpp"
#pragma once

//abstract class
class Car{
    private: 
        SDL_Rect srcRect, moverRect;

    public:
    //different vitual and pure virtual functions which are to be redefined in the derived classes.
    int frame= 0;
    Car();
    virtual void draw();
    virtual void move()=0;
    virtual bool checkCollision(enemy* lst)=0;
    virtual ~Car()= 0;

};
