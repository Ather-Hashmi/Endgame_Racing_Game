#include <iostream>
#include "HUMania.hpp"


#include<time.h>

void HUMania::drawObjects()
{   
    //draw health bar
    HB.draw();
    HB.display(health);

    //draw fuel bar
    FB.draw();
    FB.display(fuel);

    //draw player
    play.draw();

    //iterate over npc list to draw and animate them
    for(NPC* x: npclist)
    {
        string checker = typeid(*x).name();
        if (checker=="5cloud"){
            if (!(((cloud*)(x))->checkAtScreenEnd()))
            {
                x->draw();
                x->move();
            }
            else
            {
                npclist.remove(x);
                delete x;
            }
        }

        else if (checker=="4Bird"){
            if (!(((Bird*)(x))->checkAtScreenEnd()))
            {
                x->draw();
                x->move();
            }
            else
            {
                npclist.remove(x);
                delete x;
            }    


        }
        
        else
        {
            x->draw();
            x->move();
        }

    
    }

    //the lops keep checking if the object has reached left sie of screen

    //iterate over enemy list to draw and animate them
    for(enemy* x: eList){
        
        string checker = typeid(*x).name();
        if (checker=="7Knight1"){
        
            if (!(((Knight1*)(x))->checkAtScreenEnd()))
            {
                x->draw();
                x->run();
            }
            else
            {
                eList.remove(x);
                delete x;
            }
        }

        else if (checker=="7Knight2")
        {
        
            if (!(((Knight2*)(x))->checkAtScreenEnd()))
            {
                x->draw();
                x->run();
            }
            else
            {
                eList.remove(x);
                delete x;
            }    


        }

         else if (checker=="4orc")
        {
        
            if (!(((orc*)(x))->checkAtScreenEnd()))
            {
                x->draw();
                x->run();
            }
            else
            {
                eList.remove(x);
                delete x;
            }    


        }
        
        
        else
        {
            x->draw();
            x->run();
        }


    }

    //iterate over obstacle list to draw and animate them
    for (obstacle* x: olist)
    {
        string checker = typeid(*x).name();
        if (checker=="9bigBarrel")
        {
            if ( !(((bigBarrel*)(x))->checkAtScreenEnd()))
            
               {
                x->draw();
                x->move();
               }
            

        else
            {
                olist.remove(x);
                delete x;
            }    

        }

        else if (checker=="5heart")
        {
            if ( !(((heart*)(x))->checkAtScreenEnd()))
            
               {
                x->draw();
                x->move();
               }
            

        else
            {
                olist.remove(x);
                delete x;
            }    

        }

       else if (checker=="7fuelcan")
        {
            if ( !(((fuelcan*)(x))->checkAtScreenEnd()))
            
               {
                x->draw();
                x->move();
               }
            

        else
            {
                olist.remove(x);
                delete x;
            }    

        }
        
        else 
         {
             olist.remove(x);
             delete x;
         }    


    }

}

void HUMania::createObject()
{   //an intial counter to introduce delay between spawning of objects
    if (counter <100)
{
    std::cout << "Mouse clicked at: "<< " -- " << std::endl;

    //eenemy object created
    if (counter % 40== 0)
    {
     enemy* object_clicked = fact.getObject();
     eList.push_back(object_clicked);



    std:: cout<< "exit";
   
    }

    //NPC object
    if (counter % 10== 0)
    {

    NPC * object= fact.makeObject();
    npclist.push_back(object);

    std:: cout<< "exit";
    }

 

    //obstalces object creation
    if (counter % 50==0)
    {   

        //fuel decreases by 5 at this interval
        fuel -=5;
        
        obstacle * o= fact.createObstacle();
        olist.push_back(o);

    }


       counter++;
    }


    

    else
        counter=0;



}

//makes teh player jump
void HUMania ::jump()
{
    play.jump() ;
}


//cancels jump
void HUMania::cancelJump()
{
    play.cancelJump();
}

//checks collison

void HUMania::checkCollision()
 {  
     //if star = 3, then helper car is spawned an collision is dealt by it
    if (star_counter == 3)
    {
        Helper* help= new Helper();

        for (enemy* x: eList)
        {
        if (help->checkCollision(x)== true)
            {
                //collides with one enemy and deletes its object
                eList.remove(x);
                delete x;
                star_counter =0 ;
                delete help;
            }
        }
        
    }


    //check collison with player, update variablesa nd images, call functios and delete objects accordingly
    for (enemy* x: eList)
    {
        if (play.checkCollision(x)== true)
        {
        string checker = typeid(*x).name();
        if (checker=="4orc")
        {
                health -= 20;
                HB.display(health);
                eList.remove(x);
                delete x;
        }

        else
            {
                health -= 10;
                HB.display(health);
                x->attack();
                eList.remove(x);
                delete x;
            }

        }
            
    }

    //check collison with player, update variablesa nd images, call functios and delete objects accordingly
    for (obstacle* x: olist)
    {
        if (play.checkCollision(x)==true)
        {
        string checker = typeid(*x).name();
        if (checker=="9bigBarrel")
        {
             (((bigBarrel*)(x))->explode());
            
                health-= 20;
                HB.display(health);
                olist.remove(x);
                delete x;
            }

        else if (checker=="5heart")
        {
                health+= 10;
                HB.display(health);
                olist.remove(x);
                delete x;
        }    
        
        else if (checker=="7fuelcan")
        {
                fuel+=15 ;
                FB.display(fuel);
                olist.remove(x);
                delete x;
        }    

        else if (checker=="4star")
        {
                star_counter +=1;
                olist.remove(x);
                delete x;
        }    

        }
    }

}

HUMania:: ~HUMania()
{   
    //destructor empties the contents of all the lists
     while(!(eList.empty())){
        auto x = eList.front();
        eList.erase(eList.begin());
        delete x;
    }

     while(!(npclist.empty())){
        auto x = npclist.front();
        npclist.erase(npclist.begin());
        delete x;
    }

        while(!(olist.empty())){
        auto x = olist.front();
        olist.erase(olist.begin());
        delete x;
    }

}

bool HUMania :: quitStatus()
{
    if (health==0 || fuel==0)
        return true;
} 