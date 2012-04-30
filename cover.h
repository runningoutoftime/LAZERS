#ifndef COVER_H
#define COVER_H

#include <QImage>
#include <QRect>

class Cover
{

  public:
    Cover(int, int);
    ~Cover();

  public:
    void resetState();
    QRect getRect();
    void setRect(QRect);
    QImage & getImage();
    bool isON();
    void setOFF(bool);

  protected:
    QImage image;
    QRect rect;
    int position;
    bool on;

};

#endif
