#include "six.h"
#include <iostream>

Six::Six()
{
  image.load("six.png");
   image2.load("six2.png");
    image3.load("reverse1.png");
     image4.load("reverse2.png");
  rect = image.rect();
  
  resetState(10,10);
}

Six::~Six()
{
 std::cout << ("Six deleted\n");
}

void Six::moveLeft(int left)
{
  if (rect.left() >= 10)
    rect.moveTo(left-30, rect.top());
  else
   rect.moveTo(1300, rect.top());
}

void Six::moveRight(int right)
{  
  if (rect.right() <= 1300)
    rect.moveTo(right+30, rect.top());
  else
    rect.moveTo(1, rect.top());
  
}

void Six::moveUp(int y,int up)
{
  if (rect.top() >= 10)
    rect.moveTo(y, up-30);
}

void Six::moveDown(int y,int down)
{
  if (rect.bottom() <= 650)
    rect.moveTo(y, down+30);
}
void Six::resetState(int x,int y)
{
  rect.moveTo(x, y);
}

QRect Six::getRect()
{
  return rect;
}

QImage & Six::getImage(int step)
{ if(step==1)
  return image;
  if(step==2)
  return image2;
  if(step==3)
  return image3;
  if(step==4)
  return image4;
}

