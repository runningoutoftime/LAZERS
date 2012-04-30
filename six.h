#ifndef SIX_H
#define SIX_H

#include <QImage>
#include <QRect>

class Six
{

  public:
    Six();
    ~Six();

  public:
    void resetState(int,int);
    void moveLeft(int);
    void moveRight(int);
    void moveUp(int,int);
    void moveDown(int,int);
    QRect getRect();
    QImage & getImage(int);

  private:
    QImage image, image2, image3,image4;
    QRect rect;
   
};

#endif

