#include "obstacle.hpp"
//dereied class of obstacel
class fuelcan: public obstacle
{
    SDL_Rect srcRect, moverRect;

    public:

    //differetn functions for different states 
    fuelcan();
    SDL_Rect getMover();
    int frame=0;
    bool checkAtScreenEnd();
    void draw();
    void move();
    ~fuelcan();

};