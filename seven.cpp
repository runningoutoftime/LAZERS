#include "seven.h"
#include <iostream>

Seven::Seven(int x, int y) 
{
  image.load("seven.png");
  rect = image.rect();
  rect.translate(x, y);
}

Seven::~Seven() {

   std::cout << ("Seven deleted\n");
}

QRect Seven::getRect()
{
  return rect;
}

void Seven::setRect(QRect rct)
{
  rect = rct;
}

QImage & Seven::getImage()
{
  return image;
}

