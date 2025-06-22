#include "bird.hpp"
// constructor. gives random y corrdinates within a range 
Bird :: Bird()
{
    int y_coord = 150 + rand() % 170;

    srcRect={4751, 536, 178, 115};
    moverRect={969, y_coord, 50,50};

}

//draw
void Bird :: draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


//moves with a random speed each time called
void Bird :: move ()
{   
    int speed= 3 +rand() % 5;
    if (frame==0)
    { 
        srcRect={4751, 536, 178, 115};
        moverRect.x -= speed;
        frame =1;
    }

    else if (frame==1)
    { 
        srcRect= {4530, 524, 175, 127};
        moverRect.x -= speed;
        frame =2;
    }
    if (frame==2)
    { 
        srcRect={4308,549,176,93};
        moverRect.x -= speed;
        frame =3;
    }

     if (frame==3)
    { 
        srcRect={4089 ,540, 173, 118};
        moverRect.x -= speed;
        frame =0;
    }
    
}

//check if the object reached left sie of screen
 bool Bird:: checkAtScreenEnd()
 {
     if(moverRect.x<=0)
     {
         return true;
     }

     else
        return false;
 }


//destructor
Bird :: ~Bird()
{

}