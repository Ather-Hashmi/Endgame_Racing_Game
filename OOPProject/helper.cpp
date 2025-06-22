#include "helper.hpp"


//constructor, gives starting coordinates
Helper :: Helper()
{
     
    srcRect = {2921, 411, 365 ,424};
    moverRect = {50, 476, 100, 100};
}

void Helper ::draw()
{
      SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


//checks collision with object of enemy type
bool Helper:: checkCollision(enemy* obj)
{
      if (abs(moverRect.x - obj->getMover().x )< 5 && abs(moverRect.y - obj->getMover().y)<5 )
        return true;
}

void Helper :: move()
{
    
}

Helper :: ~Helper()
{

}