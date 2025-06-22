#include "fuelbar.hpp"

//constructor
fuelBar :: fuelBar()
{
    srcRect= {925, 2667, 813 ,93};
    moverRect= {10,100, 150,50};

}

//draw()

void fuelBar :: draw()
{

         SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);

}


// display updated images based on fuel

void fuelBar:: display(int n)
{
    if ( n<= 100)
     srcRect= {925, 2667, 813 ,93};

     else if (n>= 50 && n <=75)
     srcRect ={925,2409,813,93};

     else if (n>= 25 && n <=50)
     srcRect = {925,2151,813,93};
    
    else if (n>=0 && n<=25)
    srcRect ={33,2410,812, 92};

    else if (n==0)
     srcRect={ 31,2151,814,93};
}


fuelBar:: ~fuelBar()
{
    
}

