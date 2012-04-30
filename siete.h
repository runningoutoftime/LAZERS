#ifndef SIETE_H
#define SIETE_H
#include "cover.h"
#include <QImage>
#include <QRect>

class Siete:public Cover
{

  public:
    Siete(int, int);
    QImage & getImage(int x,int);
    QImage image1,image2,image3,image4,image5,image6,image7,image8,image9,image10,image11,image12;
    int x;
};

#endif
