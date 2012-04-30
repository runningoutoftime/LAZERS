#include "cloud.h"
#include <iostream>

using namespace std;

Cloud::Cloud(int a,int b,int x):Block( a, b, x)
{

   Block::xdir = x;


  Block::image.load("cloud.png");

   Block::rect = image.rect();
   Block::resetState(a,b);

}


void Cloud::autoMove(int x)
{
   Block::rect.translate(xdir, 0);

  if ( Block::rect.left() == 0) {
    Block:: xdir = 1;
  }

  if ( Block::rect.right() ==1400 ) {
    Block:: xdir = -1;
  }

}

