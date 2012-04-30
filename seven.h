#ifndef SEVEN_H
#define SEVEN_H

#include <QImage>
#include <QRect>

class Seven
{

  public:
    Seven(int, int);
    ~Seven();

  public:
    void resetState();
    QRect getRect();
    void setRect(QRect);
    QImage & getImage();

  private:
    QImage image;
    QRect rect;
    int position;
    

};

#endif
