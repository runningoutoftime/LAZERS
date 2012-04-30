#ifndef CLOUD_H
#define CLOUD_H
#include "block.h"
#include <QImage>
#include <QRect>

class Cloud:public Block
{

  public:
    Cloud(int,int,int);
    


    void autoMove(int);
 

 

};

#endif

