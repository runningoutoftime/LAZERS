#include <iostream>
#include "ninja.h"

Ninja::Ninja(int x,int y,int d):Block(x,y,d)
{

  Block::xdir = 1;

    ydir=0;
  Block::image.load("ninja.png");
   
   Block::rect=image.rect();
   Block::resetState(x,y);

  image2.load("ninja2.png");
  image3.load("ninja3.png"); 
  image4.load("ninja4.png"); 
  step=1;
}

void Ninja::autoMove2()
{
    
  Block::rect.translate(Block::xdir, ydir);
 

  
  if (rect.right()+4 > 1250)
    rect.moveTo(1050, rect.top());
  else if(rect.left()-4 < 50)
    rect.moveTo(250, rect.top());
 


}



void Ninja::follow(int y){
     step=1;
     if(y<rect.top()){ydir=-1;  xdir=0;}
     else if(y>rect.top()){ydir=1;  xdir=0;}
     else
       ydir=0;     
  
}

void Ninja::lor(int x){

   if(x<rect.right()){Block::setXDir(-1); ydir=0;
       if(step==2)step=1;//check step num for animation
       else step=2;
        }
     else if(x>rect.right()&&rect.right() <= 1300){Block::setXDir(1); ydir=0;
     if(step==4)step=3;//check step num for animation
       else step=3;}
     else
      Block::setXDir(0);  
    
}

 QImage & Ninja::getImage(int stip){
    step=stip;
  if(step==1)
  return Block::image;
  if(step==2)
  return image2;
  if(step==3)
  return image3;
  if(step==4)
  return image4;

}
