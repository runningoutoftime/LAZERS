#include "side.h"
#include <iostream>

Side::Side(int x,int y):Wall( x,  y) 
{
  Wall::image.load("wallsup.png");
  Wall::rect = image.rect();
  Wall::rect.translate(x, y);
}

