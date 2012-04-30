#include "blade.h"
#include <iostream>

using namespace std;

Blade::Blade(int x,int y)
{

  ydir = 1;


  image.load("chain.png");

  rect = image.rect();
  resetState(x,y);

}

Blade::~Blade() {
  cout << ("blade deleted\n");
}
void Blade::autoMove()
{
  rect.translate(0, 2*ydir);

  if (rect.top() == -300) {
    ydir = 1;
  }

  if (rect.bottom() == 200) {
    ydir = -1;
  }

}

void Blade::resetState(int x, int y)
{
  rect.moveTo(x, y);
}



void Blade::moveUp(int pos,int up)
{
  rect.moveTo(pos,up+5);
}

void Blade::moveDown(int pos,int down)
{
  rect.moveTo(pos,down+3);
}

void Blade::setYDir(int y)
{
  ydir = y;
}



int Blade::getYDir()
{
  return ydir;
}



QRect Blade::getRect()
{
  return rect;
}

QImage & Blade::getImage()
{

  return image;

}
