#ifndef BLOCK_H
#define BLOCK_H

#include <QImage>
#include <QRect>

class Block
{

  public:
    Block(int,int,int);
    ~Block();

  public:
    void resetState(int x,int y);
    void autoMove();
    void setXDir(int);
    int getXDir();
    QRect getRect();
    QImage & getImage();

  protected:

    int speed;
    int xdir;
    bool stuck;
    QImage image;
    QRect rect;

};

#endif

