#ifndef BLADE_H
#define BLADE_H

#include <QImage>
#include <QRect>

class Blade
{

   public:
    Blade(int,int);
    ~Blade();

  public:
    void resetState(int x,int y);
    void moveUp(int, int);
    void moveDown(int,int);
    void autoMove();
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
