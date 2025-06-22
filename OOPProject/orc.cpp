#include "orc.hpp"

//constructor
orc:: orc ()
{
    srcRect= {3453 ,426,401,330};
    moverRect= {978, 490, 50, 50};

}


//empty as it doesnpot needs one and the abstract clss had a pure virtual function of this type
void orc:: attack()
{

}

void orc:: draw()
{
     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

//animates
void orc :: run()
{
    moverRect.x-=6;
}


SDL_Rect orc:: getMover()
{
    return moverRect;
}


//check at screen end
bool orc:: checkAtScreenEnd()
{
    if (moverRect.x <=0)
    return true;
}
orc:: ~orc()
{

}