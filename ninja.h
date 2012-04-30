#ifndef NINJA_H
#define NINJA_H
#include "block.h"
#include <QRect>
#include <QImage>

class Ninja:public Block 
{

public:
   Ninja(int,int,int);
    void autoMove2();
  void follow(int);
  void lor(int);
  QImage & getImage(int);
protected:
    QImage image2, image3,image4;
   int ydir;
   int trail, attack;
    int step;
};
#endif
