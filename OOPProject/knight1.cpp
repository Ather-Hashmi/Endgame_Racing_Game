#include "knight1.hpp"

//constructor
Knight1:: Knight1()
{ 
    srcRect= {4769,759, 92, 115};
    moverRect = {978, 490, 50, 50};
}


void Knight1:: draw()
{
      SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


//running animations
void Knight1 :: run()
{   
    int speed= 3 + rand()% 6;
    if (frame==0)
    {
        srcRect= {4769,759, 92, 115};
       
        frame= 1;
    }   

    else if (frame ==1)
    {
        srcRect= {4632, 762, 104, 112};
      
        frame= 2;
    }   

    else if (frame ==2)
    {
        srcRect= {4503,757, 96, 117};
        
        frame= 3;
    }   
    else if (frame ==3)
    {
        srcRect= {4371, 756, 99, 118};
       
        frame= 4;
    }   
    else if (frame ==4)
    {
        srcRect= {4245, 760, 93, 114};
     
        frame= 5;
    }   
    else if (frame ==5)
    {
        srcRect= {4108,762,104,112};
        
        frame= 6;
    }   
    
    else if (frame ==6)
    {
        srcRect= {3983, 757,92,117};
    
        frame= 0;
    }   
     moverRect.x -= speed;

}

//attack animation
void Knight1:: attack ()
{
    frame= 0;
    if (frame==0)
    {
        srcRect={4802,913,127,168};
        frame=1;
    }
    
    else if (frame ==1)
    {
        srcRect= {4640, 925,138,156};

        frame= 2;
    }   

    else if (frame ==2)
    {
        srcRect= {4487, 938, 130,143};
        frame= 3;
    }   
    else if (frame ==3)
    {
        srcRect= {4314, 940, 148,141};
        frame= 4;
    }   
    else if (frame ==4)
    {
        srcRect= {4162,940,128,141};
    
        frame= 5;
    }   
    else if (frame ==5)
    {
        srcRect= {3966,950,153,131};
        frame= 0;
    }   

    moverRect.x-= 2;

}

void Knight1:: death()
{

}

bool Knight1:: checkAtScreenEnd()

{
    if (moverRect.x <=0)
        return true;

    else
        return false;
}

Knight1 :: ~Knight1()
{
    
}

SDL_Rect Knight1:: getMover()
{
    return moverRect;
}