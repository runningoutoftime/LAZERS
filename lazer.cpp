#include "lazer.h"
#include <iostream>

Lazer::Lazer(int x, int y) 
{
  image.load("lazer.png");
  image2.load("door.png");
  rect = image.rect();
  rect.translate(x, y);
}

Lazer::~Lazer() {

   std::cout << ("Lazer deleted\n");
}

QRect Lazer::getRect()
{
  return rect;
}

void Lazer::setRect(QRect rct)
{
  rect = rct;
}

QImage & Lazer::getImage(int x)
{ if(x==0)
  return image;
   else  
  return image2;
}





