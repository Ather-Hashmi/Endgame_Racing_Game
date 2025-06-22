#include "star.hpp"

#include "heart.hpp"

 star:: star()
{
    srcRect= {769,1659,317, 364};
    moverRect = {978, 490, 50, 50};
}
    
SDL_Rect star::getMover()
{
    return moverRect;
}


    //checks left screen end
    bool star:: checkAtScreenEnd()
    {
        if (moverRect.x <=0)
            return true;
    }

    void star:: draw()
    {     
         SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);

    }

    //aniamtes
    void star ::move()
    {
        moverRect.x -=4;
    }

    star:: ~star(){
        
    }