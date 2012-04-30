#ifndef BACKCOVER_H
#define BACKCOVER_H
#include "cover.h"
#include <QImage>
#include <QRect>

class Backcover:public Cover
{

  public:
    Backcover(int, int);
    QImage & getImage(int x);
    QImage image1,image2,image3,image4;

};

#endif
