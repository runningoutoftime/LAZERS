#include "sidewalk.h"
#include <iostream>

Sidewalk::Sidewalk(int x,int y):Lazer( x,  y) 
{
  Lazer::image.load("wall.png");
  Lazer::rect = image.rect();
  Lazer::rect.translate(x, y);
}

