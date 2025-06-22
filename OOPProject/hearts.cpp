#include "heart.hpp"

//constructor
 heart:: heart()
{
    srcRect= {1563,76,307, 257};
    moverRect = {978, 490, 50, 50};
}
    
SDL_Rect heart::getMover()
{
    return moverRect;
}

//checks at left screen
    bool heart:: checkAtScreenEnd()
    {
        if (moverRect.x <=0)
            return true;
    }

    void heart:: draw()
    {     
         SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);

    }

    //moves
    void heart ::move()
    {
        moverRect.x -=4;
    }

    heart:: ~heart(){

    }