#include "piano.h"
#include <iostream>

using namespace std;

Piano::Piano(int x,int y)
{

  ydir = 1;


  image.load("piano.png");

  rect = image.rect();
  resetState(x,y);

}

Piano::~Piano() {
  cout << ("blade deleted\n");
}
void Piano::autoMove(int z)
{  
  rect.translate(0,10);

 

  if (rect.bottom() >= 2000) {
    resetState(z,100);
  }

}

void Piano::resetState(int x, int y)
{
  rect.moveTo(x, y);
}



void Piano::moveUp(int pos,int up)
{
  rect.moveTo(pos,up+5);
}

void Piano::moveDown(int pos,int down)
{
  rect.moveTo(pos,down+3);
}

void Piano::setYDir(int y)
{
  ydir = y;
}



int Piano::getYDir()
{
  return ydir;
}



QRect Piano::getRect()
{
  return rect;
}

QImage & Piano::getImage()
{

  return image;

}
