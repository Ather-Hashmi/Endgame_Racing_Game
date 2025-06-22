#include "knight2.hpp"


//constructor, gives coordinates
Knight2:: Knight2()
{ 
    srcRect= { 4853, 1453,76,96};
    moverRect = {978, 490, 50, 50};
}


void Knight2:: draw()
{
      SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


//runnign animation with random speed
void Knight2 :: run()
{   
    int speed= 3 + rand()% 6;
    if (frame==0)
    {
        srcRect= {4769,759, 92, 115};
        moverRect.x -= speed;
        frame= 1;
    }   

    else if (frame ==1)
    {
        srcRect= {4675, 1456, 86, 93};
        moverRect.x -= speed;
        frame= 2;
    }   

    else if (frame ==2)
    {
        srcRect= {4483,1452,78, 97};
        moverRect.x -= speed;
        frame= 3;
    }   
    else if (frame ==3)
    {
        srcRect= {4264, 1451, 81, 98};
        moverRect.x -= speed;
        frame= 4;
    }   
    else if (frame ==4)
    {
        srcRect= {4053,1455, 77, 94};

        moverRect.x -= speed;
        frame= 5;
    }   
    else if (frame ==5)
    {
        srcRect= {3875,1456,86,93};
        moverRect.x -= speed;
        frame= 6;
    }   
    
    else if (frame ==6)
    {
        srcRect= {3682,1452, 76,97};
        moverRect.x -= speed;
        frame= 0;
    }   

}

//attack animation
void Knight2:: attack ()
{
    frame= 0;
    if (frame==0)
    {
        srcRect={4815 ,1621, 114 ,151};
        frame=1;
    }
    
    else if (frame ==1)
    {
        srcRect= {4542,1632, 124, 140};


        frame= 2;
    }   

    else if (frame ==2)
    {
        srcRect= {4294,1644, 117 ,128};

        frame= 3;
    }   
    else if (frame ==3)
    {
        srcRect= {4016,-1646, 133, 126};
        frame= 4;
    }   
    else if (frame ==4)
    {
        srcRect= {3792,1646, 115, 126};
    
        frame= 5;
    }   
    else if (frame ==5)
    {
        srcRect= {3506,1654,138, 118};
        frame= 0;
    }   

    moverRect.x-= 2;

}

void Knight2:: death()
{

}


//checks for screen end
bool Knight2:: checkAtScreenEnd()

{
    if (moverRect.x <=0)
        return true;

    else
        return false;
}


SDL_Rect Knight2:: getMover()
{
    return moverRect;
}

Knight2 :: ~Knight2()
{
    
}