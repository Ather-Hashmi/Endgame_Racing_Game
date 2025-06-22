#include "drawing.hpp"
#include "enemy.hpp"
#include "knight1.hpp"
#include "knight2.hpp"
#include "npc.hpp"
#include"bird.hpp"
#include "cloud.hpp"
#include "obstacle.hpp"
#include "heart.hpp"
#include "Bigbarrel.hpp"
#include  "fuelcan.hpp"
#include "orc.hpp"
#include "star.hpp"
#pragma once


//Factory Design Pattern 
class ObjectFactory{
   
    public: 

    //differnt functions for making different abstract type objects
    enemy* getObject();
    NPC* makeObject();
    obstacle* createObstacle();

};