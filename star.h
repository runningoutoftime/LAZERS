#ifndef STAR_H
#define STAR_H

#include <QImage>
#include <QRect>

class Star
{

  public:
    Star();
    ~Star();

  public:
    void resetState(int x,int y);
    void moveBottom(int);
    void moveTop(int);
    void moveLeft(int);
    void moveRight(int);
    void autoMove();
    void setXDir(int);
    void setYDir(int);
    int getXDir();
    int getYDir();
    QRect getRect();
    QImage & getImage();

  protected:
    int angle;
    int speed;
    int xdir;
    int ydir;
    bool stuck;
    QImage image;
    QRect rect;

};

#endif

