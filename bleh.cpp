#include "bleh.h"

Bleh::Bleh(int a,int b):Star()
{
 x=a;
 y=b;

  Star::image.load("bleh.png");

  Star::rect = image.rect();
  Star::resetState(a,b);
 
 

}



void Bleh::autoMove(int dir)
{
  if(dir==1)
  Star::rect.translate(2, 0);
  
  if(dir==2)
  Star::rect.translate(2, -2);
  
  if(dir==3)
  Star::rect.translate(0, -2);
  
  if(dir==4)
  Star::rect.translate(-2, -2);

  if(dir==5)
  Star::rect.translate(-2, 0);
 
  if(dir==6)
  Star::rect.translate(-2, 2);
 
  if(dir==7)
  Star::rect.translate(0, 2);
  
  if(dir==8)
  Star::rect.translate(2, 2);


  if (rect.left() == x-180) {
    resetState(x,y);
  }

  if (rect.right() == x+180) {
    resetState(x,y);
  }

   if (rect.top() == y-200) {
    resetState(x,y);
  }
  if (rect.bottom() == y+200) {
    resetState(x,y);
  }
  
}
