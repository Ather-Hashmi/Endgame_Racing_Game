#include "objectFactory.hpp"
#include <iostream>
using namespace std;

enemy* ObjectFactory::getObject(){
    cout<<"in the function" ;

    int random = rand()%3;
    if (random==0){
         Knight1 *k = new Knight1();
        return k;
    }
    else if(random==1){
        Knight2 *k= new Knight2();
        return k;
    }

    else if (random ==2)
    {
        orc* k= new orc();
        return k;
    }

}

NPC* ObjectFactory::makeObject(){
    cout<<"in the function" ;

    int random = rand()%2;
    if (random==0){
         Bird *k = new Bird();
        return k;
    }else if(random==1){
        cloud *k= new cloud();
        return k;
    }

}

obstacle* ObjectFactory:: createObstacle()
{
    int random = rand()%4;
    if (random==0){
         heart *k = new heart();
        return k;
    }else if(random==1){
        bigBarrel *k= new bigBarrel();
        return k;
    }

    else if (random==2)
    {
        fuelcan *k= new fuelcan();
        return k;   
    }

    else if (random==3)
    {
        star *k= new star();
        return k;   
    }

}