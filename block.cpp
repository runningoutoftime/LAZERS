#include "block.h"
#include <iostream>

using namespace std;

Block::Block(int a,int b,int x)
{

  xdir = x;


  image.load("block.png");

  rect = image.rect();
  resetState(a,b);

}

Block::~Block() {
  cout << ("block deleted\n");
}


void Block::autoMove()
{
  rect.translate(6*xdir, 0);

  if (rect.left() <= 0) {
    xdir = 1;
  }

  if (rect.right() >= 800) {
    xdir = -1;
  }

}

void Block::resetState(int x, int y)
{
  rect.moveTo(x, y);
}




void Block::setXDir(int x)
{
  xdir = x;
}



int Block::getXDir()
{
  return xdir;
}



QRect Block::getRect()
{
  return rect;
}

QImage & Block::getImage()
{
  return image;
}

