#ifndef PORTAL_H
#define PORTAL_H
#include "door.h"
#include <QImage>
#include <QRect>


class Portal:public Door
{  
   public:
      Portal(int,int);
      ~Portal();

};

#endif
