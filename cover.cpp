#include "cover.h"
#include <iostream>

Cover::Cover(int x, int y) 
{
  image.load("COVER.png");
  rect = image.rect();
  rect.translate(x, y);
  on = true;
}

Cover::~Cover() {

   std::cout << ("Cover deleted\n");
}

QRect Cover::getRect()
{
  return rect;
}

void Cover::setRect(QRect rct)
{
  rect = rct;
}
void Cover::setOFF(bool off)
{
  on=off;
}

QImage & Cover::getImage()
{
  return image;
}

bool Cover::isON()
{
  return on;
}



