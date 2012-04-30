#include "bomb.h"
#include <iostream>

Bomb::Bomb(int x, int y):Lazer(x,y) 
{
  Lazer::image.load("bomb.png");
   
  Lazer::rect = image.rect();
  Lazer::rect.translate(x, y);
  exploded=false;
}

Bomb::~Bomb() {

   std::cout << ("Bomb deleted\n");
}



bool Bomb::boom(){
 return exploded;
}
void Bomb::setBoom(bool destr)
{
  exploded = destr;
}

