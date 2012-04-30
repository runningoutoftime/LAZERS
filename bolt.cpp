#include "bolt.h"
#include <iostream>

Bolt::Bolt()
{

  xdir = 1;
  ydir = 1;

  image.load("bolt.png");

  rect = image.rect();
  resetState();

}

Bolt::~Bolt() {
  std::cout << ("Bolt deleted\n");
}

void Bolt::resetState() 
{
  rect.moveTo(150, 0);
}

void Bolt::autoMove()
{
  rect.translate(67*xdir, 67*ydir);

  if (rect.left() <= 0) {
    xdir = 1;
  }

  if (rect.right() >= 700) {
    xdir = -1;
  }

  if (rect.top() <= 0) {
    ydir = 1;
  }
  if(rect.bottom()>=700){//move to top when bottom is reached
   resetState();
  }
}


void Bolt::moveBottom(int bottom)
{
  rect.moveBottom(bottom);
}

void Bolt::moveTop(int top)
{
  rect.moveTop(top);
}

void Bolt::moveLeft(int left)
{
  rect.moveLeft(left);
}

void Bolt::moveRight(int right)
{
  rect.moveRight(right);
}

void Bolt::setXDir(int x)
{
  xdir = x;
}

void Bolt::setYDir(int y)
{
  ydir = y;
}

int Bolt::getXDir()
{
  return xdir;
}

int Bolt::getYDir()
{
  return ydir;
}

QRect Bolt::getRect()
{
  return rect;
}

QImage & Bolt::getImage()
{
  return image;
}

