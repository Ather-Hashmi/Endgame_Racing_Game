#include "car.hpp"
//empty constructor
Car :: Car()
{

}

//draw
void Car::draw()
{
     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


//pure virtual function for checking collision
bool Car:: checkCollision(enemy* lst)
{

}
// move
void Car:: move()
{

}

//virtual destructor
Car:: ~Car()
{

}