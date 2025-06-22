#include "npc.hpp"
#pragma once

//derived class of NPC abstract class
class Bird: public NPC {
    private:
    SDL_Rect srcRect, moverRect;

    public:
    // functions for different state and animations
    int frame=0;
    Bird();
    void draw();
    void move();
    bool checkAtScreenEnd();
    ~Bird();

};