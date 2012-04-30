#ifndef LAZER_H
#define LAZER_H

#include <QImage>
#include <QRect>

class Lazer
{

  public:
    Lazer(int, int);
    ~Lazer();

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
