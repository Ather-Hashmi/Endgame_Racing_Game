#include "fuelcan.hpp"
// constructor
fuelcan:: fuelcan()
{
    srcRect= {1871, 2985,264, 293};
    moverRect = {978, 490, 50, 50};
}
    

//returns moverRect
SDL_Rect fuelcan::getMover()
{
    return moverRect;
}

//checks for left side screen
    bool fuelcan:: checkAtScreenEnd()
    {
        if (moverRect.x <=0)
            return true;
    }

    void fuelcan:: draw()
    {     
         SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);

    }

    //animates
    void fuelcan ::move()
    {
        moverRect.x -=4;
    }

    fuelcan:: ~fuelcan(){

    }