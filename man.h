#ifndef MAN_H
#define MAN_H
#include "ninja.h"
#include <QRect>
#include <QImage>

class Man:public Ninja
{

public:
   Man(int,int,int);
   QImage& getImage(int,int);
   QImage imagem,imageM;   

};
#endif
