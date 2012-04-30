#ifndef EYE_H
#define EYE_H

#include "ninja.h"

class Eye:public Ninja
{
   public:
         Eye(int,int);
         int getQUAD(int,int); 
         QImage & getImage2(int);
         void flow(int y);
         void lr(int x);
   private:
          QImage image1, image5,image6, image7, image8,image9,trumpet,life,key;
          
};
#endif
