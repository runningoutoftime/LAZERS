#ifndef PIANO_H
#define PIANO_H

#include <QImage>
#include <QRect>

class Piano
{

   public:
    Piano(int,int);
    ~Piano();

  public:
    void resetState(int x,int y);
    void moveUp(int, int);
    void moveDown(int,int);
    void autoMove(int);
    void setYDir(int);
    int getYDir();
    QRect getRect();
    QImage & getImage();

  private:
   
    int speed;
    int ydir;
    bool stuck;
    QImage image;
    QRect rect;


};
#endif
