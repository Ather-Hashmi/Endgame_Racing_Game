#include "Bigbarrel.hpp"

//constructor, sets intiial srcRect and moverRect cordinates
bigBarrel:: bigBarrel()
{
    srcRect= {313,3063,186, 234};
    moverRect = {978, 490, 50, 50};
}



//checks if the object reached left side of screen
bool bigBarrel :: checkAtScreenEnd()
{ 
    if(moverRect.x<=0)
    return true;
}


//plays the explosion animation
void bigBarrel:: explode()
{
    if (frame==0) {
        srcRect= {397, 520, 227, 154};
        frame=1;
    }

    else if (frame==1)
    {
        srcRect={713 ,521, 210, 153};
        frame=2 ;
    }

      else if (frame==2)
    {
        srcRect={713 ,521, 210, 153};
        frame=3 ;
    }

    else if (frame== 3)
    {   
        srcRect= {1010, 381, 234, 291};
        frame=4;
    }

    else if (frame==4)
    {
        srcRect= {413,842,295,177};
        moverRect.x-= 5;
    }

    moverRect.x-= 5;
    }

//draw
void bigBarrel:: draw()
{
        SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);

}


//move the image
void bigBarrel:: move()
{
    moverRect.x-=3;
}


//returns MoverRect
SDL_Rect bigBarrel:: getMover()
{
    return moverRect;
}

//destructor
bigBarrel :: ~bigBarrel()
{
    
}