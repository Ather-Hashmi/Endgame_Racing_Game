#include "healthbar.hpp"


//constructor
healthBar :: healthBar()
{
    srcRect= {1563,76,307, 257};
    moverRect= {10,10, 50,50};

}


void healthBar :: draw()
{

         SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);

}

//updates image based on health
void healthBar ::display(int n)
{
    if ( n<= 100)
     srcRect= {1563,76,307, 257};

     else if (n>= 50 && n <=75)
     srcRect ={1193,76,307,257};

     else if (n>= 25 && n <=50)
     srcRect = {824,76,306,257};
    
    else if (n>=0 && n<=25)
    srcRect ={454, 76, 305,257};

    else if (n==0)
     srcRect={0,0,0,0};
}


healthBar:: ~healthBar()
{

}

