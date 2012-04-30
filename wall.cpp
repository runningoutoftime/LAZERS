#include "wall.h"
#include <iostream>

Wall::Wall(int x, int y) 
{
  image.load("lazer2.png");
  rect = image.rect();
  rect.translate(x, y);
}

Wall::~Wall() {

   std::cout << ("Wall deleted\n");
}

QRect Wall::getRect()
{
  return rect;
}

void Wall::setRect(QRect rct)
{
  rect = rct;
}

QImage & Wall::getImage()
{
  return image;
}





