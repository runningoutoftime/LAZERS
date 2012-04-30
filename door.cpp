#include "door.h"
#include <iostream>

Door::Door(int x, int y) 
{
  image.load("door.png");
   image2.load("door2.png");
  rect = image.rect();
  rect.translate(x, y);
 
}

Door::~Door() {

   std::cout << ("Door deleted\n");
}

QRect Door::getRect()
{
  return rect;
}

void Door::setRect(QRect rct)
{
  rect = rct;
}

QImage & Door::getImage(int chose)
{if(chose==0)return image2;
  return image;
}



