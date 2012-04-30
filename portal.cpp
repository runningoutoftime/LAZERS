#include "portal.h"
#include <iostream>

Portal::Portal(int x, int y) :Door(x,y)
{
  Door::image.load("portal.png");
 
  Door::rect = image.rect();
  Door::rect.translate(x, y);
  
}

Portal::~Portal() {

   std::cout << ("Portal deleted\n");
}
