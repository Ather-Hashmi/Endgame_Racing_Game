#include "cloud.hpp"

//constructor. randomly selects the image and y corrdinates for spawn
 cloud:: cloud()
 {
    int image= rand() % 3;
    int y_coodinate= 25 + rand()% 150;

    if (image==0)
    {
        srcRect= {1287, 1596, 169, 121};
        moverRect= {969,y_coodinate,100,100};
    }
    else if (image==1)
    {
        srcRect= {1611,1279, 348, 195};
        moverRect= {969,y_coodinate,100,100};
    }

     else if (image==2)
    {
        srcRect= {1252 ,1794, 471, 164};
        moverRect= {969,y_coodinate,100,100};
    }
 }


//draw
 void cloud:: draw()
 {
      SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
 }

//animate with random speed each time
 void cloud:: move()
 {
     int speed =3 + rand()% 7;
     moverRect.x -= speed;

 }


//checks for left screen end
 bool cloud:: checkAtScreenEnd()
 {
     if(moverRect.x<=0)
     {
         return true;
     }

     else
        return false;
 }

//destructor
 cloud:: ~cloud()
 {

 }
