#ifndef DOOR_H
#define DOOR_H

#include <QImage>
#include <QRect>

class Door
{

  public:
    Door(int, int);
    ~Door();

  public:
    void resetState();
    QRect getRect();
    void setRect(QRect);
    QImage & getImage(int);
    
  
  protected:
    QImage image,image2;
    QRect rect;
    int position;
   

};

#endif
