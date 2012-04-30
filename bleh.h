#ifndef BLEH_H
#define BLEH_H

#include <QImage>
#include <QRect>
#include "star.h"

class Bleh:public Star
{

public: //x,y,  
   Bleh(int,int);
   void autoMove(int);
  int x,y,a,b;
//boundaries
int left,right,up,down;




};

#endif
