#ifndef BOMB_H
#define BOMB_H
#include "lazer.h"
#include <QImage>
#include <QRect>

class Bomb:public Lazer
{

  public:
    Bomb(int, int);
    ~Bomb();

  public:
    
    bool boom();
    void setBoom(bool destr);
  private:
   
    bool exploded;

};

#endif
