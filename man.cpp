#include <iostream>
#include "man.h"

Man::Man(int x,int y,int d):Ninja(x,y,d)
{

 Ninja::Block::xdir = 8;

    Ninja::ydir=0;
 
   Block::image.load("monocol.png");
   imageM.load("monocol2.png"); 
   Block::rect=Block::image.rect();
   Ninja::resetState(x,y);

  
 
}


QImage & Man::getImage(int s,int e){
 
  if(s==1)
  return Block::image;
  if(s==2)
  return imageM;



}

