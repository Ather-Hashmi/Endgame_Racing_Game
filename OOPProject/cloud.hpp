#include "npc.hpp"
#include "drawing.hpp"
#pragma once


//derived class of NPC
class cloud: public NPC{

  private:
  SDL_Rect srcRect, moverRect;

  public:
  //different states and methods for it
  cloud();
  int frame=0;
  void draw();
  void move();
  bool checkAtScreenEnd();
  ~cloud();
};