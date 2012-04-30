#include <iostream>
#include "yellow.h"

Yellow::Yellow(int x,int y):Cover(x,y)
{
   
  Cover::image.load("yellow.png");
  Cover::rect=image.rect();
  Cover::rect.translate(x, y);
  on=false;
}

