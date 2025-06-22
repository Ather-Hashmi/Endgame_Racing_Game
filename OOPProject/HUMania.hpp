#include<SDL.h>

#include<vector>
#include "player.hpp"
#include "enemy.hpp"
#include "objectFactory.hpp"
#include"cloud.hpp"
#include "bird.hpp"
#include "npc.hpp"
#include "obstacle.hpp"
#include<list>
#include "bars.hpp"
#include "healthbar.hpp"
#include "fuelBar.hpp"
#include "orc.hpp"
#include "star.hpp"
#include "helper.hpp"
#pragma once
using namespace std;

class HUMania{

  
  //creating objects for player heatlhbar and guel bar class  
    player play;

    healthBar HB;
    fuelBar FB;
    // In the solution you have to create vectors of pigeons, butterflys, bees    
    //three vectors created that can hold objects of Pigeon/Butterfly/Bee Class each

    //creating lists differnt abstract classes
    list <enemy*> eList;
    list <NPC*> npclist;
    list <obstacle*> olist;

    //creating object for desing pattern
    ObjectFactory fact;

    //intitialisng some variables
    int health=100;
    int fuel= 100;
    int star_counter=0;
    int helper_timer= 15;
    int counter =37;


    public:

    //functions that will accumulate other classes and their functions
    void drawObjects(); 
    void createObject();
    void jump();
    void cancelJump();
    void checkCollision();
    bool quitStatus();
    ~HUMania();

};