#include "star.h"
#include <iostream>

using namespace std;

Star::Star()
{

  xdir = 1;
  ydir = -1;

  image.load("ninjastar.png");

  rect = image.rect();
  resetState(500,350);

}

Star::~Star() {
  cout << ("ninjastar deleted\n");
}


void Star::autoMove()
{
  rect.translate(xdir, ydir);

  if (rect.left() == 0) {
    xdir = 1;
  }

  if (rect.right() == 700) {
    xdir = -1;
  }

   if (rect.top() == 300) {
    ydir = 1;
  }
  if (rect.bottom() == 500) {
    ydir = -1;
  }
  
}

void Star::moveBottom(int bottom)
{
  rect.moveBottom(bottom+3);
}

void Star::moveTop(int top)
{
  rect.moveTop(top+3);
}


void Star::resetState(int x, int y)
{
  rect.moveTo(x, y);
}



void Star::moveLeft(int left)
{
  rect.moveLeft(left+3);
}

void Star::moveRight(int right)
{
  rect.moveRight(right+3);
}

void Star::setXDir(int x)
{
  xdir = x;
}

void Star::setYDir(int y)
{
  ydir = y;
}

int Star::getXDir()
{
  return xdir;
}

int Star::getYDir()
{
  return ydir;
}

QRect Star::getRect()
{
  return rect;
}

QImage & Star::getImage()
{
  return image;
}

