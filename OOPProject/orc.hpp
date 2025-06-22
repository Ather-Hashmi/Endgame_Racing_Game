#include "drawing.hpp"
#include "enemy.hpp"
#pragma once

class orc : public enemy{
        private:
        SDL_Rect srcRect, moverRect;

        public:
        orc();
        ~orc();

        //different functions for differnt states
        void draw();
        void run();
        void attack();
        SDL_Rect getMover();
        bool checkAtScreenEnd();
};