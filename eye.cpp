#include "eye.h"

Eye::Eye(int x,int y):Ninja(x,y,0)
{
   
  Ninja::Block::image.load("eye.png");
  image1.load("eye1.png");
  Ninja::image2.load("eye2.png");
  Ninja::image3.load("eye3.png");
  Ninja::image4.load("eye4.png");
  image5.load("eye5.png");
  image6.load("eye6.png");
  image7.load("eye7.png");
  image8.load("eye8.png");
  image9.load("eye9.png");
 
  trumpet.load("trumpet.png");
  life.load("life.png");
  key.load("key.png");
  Block::rect = image.rect();
  Block::resetState(x,y);
}

void Eye::flow(int y){
     
     if(y<Block::rect.top()){Ninja::ydir=-1; }
     else if(y>Block::rect.bottom()){Ninja::ydir=1; }
     else Ninja::ydir=0;
}

void Eye::lr(int x){

   if(x<Block::rect.left()){Block::setXDir(-1); }
      
        
     else if(x>Block::rect.right()){Block::setXDir(1); }

      else  Block::setXDir(0);
    
}


int Eye::getQUAD(int x,int y){//find what picture to use and return pic number

   lr(x);
   
   flow(y);    
   
   x=Ninja::Block::getXDir();
    
    y=Ninja::ydir;

   if(x==1&&y==-1)return 2;//top right view
   if(x==-1&&y==-1)return 4;//left top view
   if(x==-1&&y==1)return 6;//bottomw left view
   if(x==1&&y==1)return 8;//bottom right view
   if(x==-1&&y==0)return 5;//left
   if(x==0&&y==-1)return 3;//up
   if(x==1&&y==0)return 1;//right
   if(x==0&&y==1)return 7;//down
   else return 0;
}

 QImage & Eye::getImage2(int step){
   
  if(step==0)
  return Block::image;
  if(step==1)
  return image1;
  if(step==2)
  return Ninja::image2;
  if(step==3)
  return Ninja::image3;
  if(step==4)
  return Ninja::image4;
  if(step==5)
  return image5;
  if(step==6)
  return image6;
  if(step==7)
  return image7;
  if(step==8)
  return image8;
  if(step==9)
  return image9;
  if(step==64)
  return trumpet;
  if(step==100)
  return life;
  if(step==12)
  return key;
}
