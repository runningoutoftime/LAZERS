#include "backcover.h"
#include <iostream>

Backcover::Backcover(int x, int y) :Cover(x,y)
{
  image1.load("finalfire1.png");
  image2.load("finalfire3.png");
  image3.load("finalfire2.png");
  image4.load("finalfire4.png");
  Cover::rect = image1.rect();
  Cover::rect.translate(x, y);

}


QImage & Backcover::getImage(int T)
{ if(T==1)
  return image1;
  if(T==2)
  return image2;
  if(T==3)
  return image3;
  if(T==4)
  return image4;

}





