#ifndef GAME_H
#define GAME_H
#include "cover.h"
#include "six.h"
#include "bleh.h"
#include "star.h"
#include "lazer.h"
#include "block.h"
#include "seven.h"
#include "bomb.h"
#include "bolt.h"
#include "wall.h"
#include "blade.h"
#include "door.h"
#include "backcover.h"
#include "portal.h"
#include "yellow.h"
#include "ninja.h"
#include "eye.h"
#include "cloud.h"
#include "sidewalk.h"
#include "side.h"
#include "piano.h"
#include "man.h"
#include "siete.h"
#include <QWidget>
#include <QKeyEvent>
#include <QLCDNumber>
#include <QGridLayout>
#include <QLabel>

class Game : public QWidget
{
  Q_OBJECT

  public:
    Game(QWidget *parent = 0);
    ~Game();

  protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void keyPressEvent(QKeyEvent *event);

    void startGame();
    void pauseGame();
    void stopGame();
    void victory();
    void checkCollision();
    void moveNINJA(); 

  private:
    
    int x;
    int lives;
    int timerId;
    Six  *six;
    Star *nj;
    Block *block;
    Block *other;
    Bleh *bleh1;   
    Bleh *bleh2;
    Bleh *bleh3;
    Bleh *bleh4;
    Bleh *bleh5;
    Lazer *lazer;
    Lazer *lazer2;
    Lazer *lazer3;
    Lazer *lazer4;
    Lazer *lazer5;
    Lazer *lazer6;
    Door *door;
    Portal *port1;
    Portal *port2;
    Portal *port3;
    Portal *port4;
    Portal *port5;
    Portal *portskull;
    Portal *portsiete;
    Lazer *lazerl;
    Wall *L;
    Siete *siete;
    Yellow *bricks[45];
    Blade *blade;
    Blade *blade2;
    Blade *blade3;
    Star *nj2;
    Star *nj3;
    Backcover *bg;
    Bomb *bomb1;
    Bomb *bomb2;
    Bomb *bomb3;
    Bolt *bolt;
    Wall *lwall; 
    Wall *lwall2;
    Wall *lastwall;
    Wall *psych;
    Seven *seven;
    Cover *cover;
    bool gameOver;
    bool gameWon;
    bool gameStarted;
    bool paused;
    Eye *aye;
    Bleh *blak;
    Ninja *ninja;
    Ninja *ninja2;
    Eye *eye1;
    Eye *eye2;
    Eye *eye3;
    Eye *eye4;
    Eye *eye5;
    Side *side1;
    Side *side3;
    Sidewalk *side2;
    Cloud *cloud1;
    Cloud *cloud2;
    Cloud *cloud3;
    Cloud *cloud4;
    Cloud *cloud5;
    Cloud *cloud6;
    Man *man;
    Piano *piano;
};

#endif

