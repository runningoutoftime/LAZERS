#ifndef WALL_H
#define WALL_H

#include <QImage>
#include <QRect>

class Wall
{

  public:
    Wall(int, int);
    ~Wall();

  public:
    void resetState();
    QRect getRect();
    void setRect(QRect);
    QImage & getImage();

  protected:
    QImage image;
    QRect rect;
    int position;
    

};

#endif
