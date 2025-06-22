#include "player.hpp"


//constructor
player::player()
{
     
    srcRect = {869, 2985, 684, 294};

   
    moverRect = {36, 476, 100, 100};
}

void player::draw()
{
      SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


//move
void player::move()
{
    moverRect.x += 5;
}


//jump

void player:: jump ()
{
    moverRect.y -= 105;
}


//cancel jump
void player::cancelJump()
{
    moverRect.y += 105;
}


//check collision with enemy object
bool player:: checkCollision(enemy* obj)
{
    if (abs(moverRect.x - obj->getMover().x )< 5 && abs(moverRect.y - obj->getMover().y)<5 )
        return true;
}

//check collision with obstacle object
bool player:: checkCollision(obstacle* obj)
{
    if (abs(moverRect.x - obj->getMover().x )< 5 && abs(moverRect.y - obj->getMover().y)<5 )
        return true;
}

player :: ~player()
{

}