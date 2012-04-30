#include "game.h"
#include <QPainter>
#include <QApplication>
#include <QtGui>
#include <QSound>
QString scores;
QString life;
QSound buzz("beep.wav");
QSound boom("boom.wav");
bool level1=true;
bool level2=false;//change to corectttt reminder
int score=1000,sight1,sight2,sight3,sight4,sight5;
int  step=1;
int stip=1;
bool lockleft=false;
bool lockright=false;
bool lockup=false;
bool lockdown=false;
int trail=0;
int attack=0;
bool ouch1=false;
bool ouch2=false;
bool ouch3=false;
bool ouch4=false;
bool ouch5=false;
int count[35]={0};
bool level3=false;
bool level7=false;
bool final=false;
bool key=false;
int throwy=2;
bool ouche=false; 
int o=0;
int dio=0;
Game::Game(QWidget *parent)
    : QWidget(parent)
{ 
  //set all booleans to their default and create all obj
  x = 0;
  
  
  gameOver = FALSE;
  gameWon = FALSE;
  paused = FALSE;
  gameStarted = FALSE;
  nj = new Star();
  nj2 =new Star();
  nj3 = new Star();
  block = new Block(2,225,1);
  other = new Block(2,225,-1);
  six = new Six();
   blade = new Blade(330,-50);
    blade2 = new Blade(1200,-100);
    blade3= new Blade(1000,-200);
  lazer=new Lazer(-200,100);
  lazer2=new Lazer(200,300);
  lazer3=new Lazer(0,500);
  lazer4=new Lazer(0,200);
  lazer5=new Lazer(650,200);
  lazer6=new Lazer(500,100);
  lazerl=new Lazer(850,500);
  L = new Wall(1150,200);
  lwall =new Wall(700,340);
  lwall2 =new Wall(830,200);
  lastwall=new Wall(1150,0);
  psych=new Wall(300,500);
  bomb1=new Bomb(650,540);
  bomb2=new Bomb(1050,150);
  bomb3= new Bomb(930,65);
  port1 =new Portal(400,530);
  port2 =new Portal(100,530);
  port3 =new Portal(850,220);
  port4 =new Portal(1200,320);
  port5 =new Portal(950,10); 
  portsiete=new Portal(0,0);
  portskull=new Portal(1250,0);
  seven = new Seven(1090,380);
  bolt =new Bolt();
  door=new Door(1000,250);
  cover=new Cover(10,0);
 bg=new Backcover(0,0);
  siete=new Siete(500,250);
//---------------second level objects
 
 int n = 0;
  for (int k=0; k<5; k++) {
    for (int j=0; j<9; j++) {
      bricks[n] = new Yellow(200*j+50, 200*k);
      n++; 
    }
  }

 ninja=new Ninja(600,1200,-1);
 ninja2= new Ninja(600,1200,-1);
 eye1=new Eye(250,400);
 eye2=new Eye(1050,400);
 eye3=new Eye(650,200);
 eye4=new Eye(50,0);
 eye5=new Eye(1250,0);
 aye=new Eye(500,130);
//each eys has one bullet of acid tear
  bleh1=new Bleh(250,400);
 bleh2=new Bleh(1050,400);
 bleh3=new Bleh(650,200);
 bleh4=new Bleh(50,0);
 bleh5=new Bleh(1250,0);
 blak=new Bleh(500,130);
//third level objects
  cloud1=new Cloud(0,300,1);
  cloud2=new Cloud(1300,300,-1);
  cloud3=new Cloud(200,500,1);
  cloud4=new Cloud(1000,500,-1);
  cloud5=new Cloud(-100,590,1);
  cloud6=new Cloud(1500,590,-1);
  man= new Man(600,0,1);
  side2=new Sidewalk(200,250);
  side1=new Side(200,0);
  side3=new Side(1200,0);
  piano =new Piano(600,100);
}


Game::~Game() {
//delete each object created
 delete nj;
 delete nj2;
 delete nj3;
 delete lazer;
 delete lazer2;
 delete lazer3;
 delete lazer4;
 delete lazer5;
 delete lazer6;
 delete block;
 delete seven;
 delete bomb1;
 delete bomb2;
 delete bomb3;
 delete bg;
 delete bolt;
 delete six;
 delete lwall;
 delete lwall2;
 delete lastwall;
 delete cover;
 delete other;
 delete L;
 delete psych;
 delete lazerl;
 delete door;
 delete blade;
 delete blade2;
 delete blade3;
 delete port1;
 delete port2;
 delete port3;
 delete port4;
 delete port5;
 delete portsiete;
 delete portskull;
 delete cloud1; 
 delete cloud2;
 delete cloud3;
 delete cloud4;
 delete cloud4;
 delete cloud6;
 delete man;
 delete side1;
 delete side2;
 delete side3;
 delete piano;
//delete second level stuff
 for (int i=0; i<45; i++) {
   delete bricks[i];
 }
  delete ninja;
  delete ninja2;
  delete eye1;
  delete eye2;
  delete eye3;
  delete eye4;
  delete eye5;
  delete bleh1;
  delete bleh2;
  delete bleh3;
  delete bleh4;
  delete bleh5;
}

void Game::paintEvent(QPaintEvent *event)
{
  QPainter painter(this);
    if(cover->isON()==true)//cover on the begining with instructions
    painter.drawImage(cover->getRect(), cover->getImage());


  if (gameOver) {//print gameover message when all lives lost
    QFont font("Courier", 15, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width("Game Over");
     
    painter.setFont(font);
    int h = height();
    int w = width();
  QPen penText(QColor("#00e0fc"));// drawn using this color
        painter.setPen(penText);

    painter.translate(QPoint(w/2, h/2));
    painter.drawText(-textWidth/2, 0, "Game Over");
  }
  else if(gameWon) {//prints win message when 6 gets 7
    QFont font("Courier", 15, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width("YOU WON :D");

    painter.setFont(font);
    int h = height();
    int w = width();
QPen penHText(QColor("#990000"));
        painter.setPen(penHText);

    painter.translate(QPoint(w/2, h/2));
    painter.drawText(-textWidth/2, 0, "YOU WON :D");
    painter.drawText(-100,100 ,"score->");
    scores.setNum(score);
    painter.drawText(100,100 ,scores);
  }
  else if(cover->isON()==false&&level1==true&&gameOver==false){//still playing the game so all objecst are draw in current position 
     painter.drawImage(port1->getRect(),port1->getImage(1));
      painter.drawImage(port2->getRect(),port2->getImage(1));
      painter.drawImage(port3->getRect(),port3->getImage(1));
      painter.drawImage(port4->getRect(),port4->getImage(1));
      painter.drawImage(port5->getRect(),port5->getImage(1));
        painter.drawImage(door->getRect(), door->getImage(1));
    painter.drawImage(nj->getRect(), nj->getImage());
     painter.drawImage(nj2->getRect(), nj2->getImage());
     painter.drawImage(nj3->getRect(), nj3->getImage());
    painter.drawImage(block->getRect(), block->getImage()); 
    
    painter.drawImage(six->getRect(), six->getImage(step)); 
    painter.drawImage(lazer->getRect(), lazer->getImage(0)); 
     painter.drawImage(lazer2->getRect(), lazer2->getImage(0));
     painter.drawImage(lazer3->getRect(), lazer3->getImage(0));
     painter.drawImage(lazer4->getRect(), lazer4->getImage(0));
     painter.drawImage(lazer5->getRect(), lazer5->getImage(0));
      painter.drawImage(lazer6->getRect(),lazer6->getImage(0));
      painter.drawImage(lwall2->getRect(),lwall->getImage());
      painter.drawImage(L->getRect(), L->getImage());
  
       painter.drawImage(lastwall->getRect(), lastwall->getImage());   
        painter.drawImage(lazerl->getRect(), lazerl->getImage(0));
        painter.drawImage(psych->getRect(), psych->getImage());
    
    //painter.drawImage(seven->getRect(), seven->getImage()); 
    painter.drawImage(blade->getRect(), blade->getImage());
       painter.drawImage(blade2->getRect(), blade2->getImage());
       painter.drawImage(blade3->getRect(), blade3->getImage());
     if(!bomb1->boom()==true)
    painter.drawImage(bomb1->getRect(), bomb1->getImage(0));
 if(!bomb2->boom()==true)
     painter.drawImage(bomb2->getRect(), bomb2->getImage(0));
 if(!bomb3->boom()==true)
     painter.drawImage(bomb3->getRect(), bomb3->getImage(0));
  
     painter.drawImage(lwall->getRect(), lwall->getImage());
   }

  //paints second level  
 else if(cover->isON()==false&&level2==true&&gameOver==false){
      painter.drawImage(port1->getRect(),port1->getImage(1)); painter.drawImage(port1->getRect(),port1->getImage(1));
     int y = six->getRect().y();
     int x = six->getRect().x();
     int a = eye1->getRect().left()+(eye1->getRect().width()/2);
     int b = eye1->getRect().top()+(eye1->getRect().height()/2);
     int c = eye2->getRect().left()+(eye2->getRect().width()/2);
     int d = eye2->getRect().top()+(eye2->getRect().height()/2);
     int e = eye3->getRect().left()+(eye3->getRect().width()/2);
     int f = eye3->getRect().top()+(eye3->getRect().height()/2);
     QPoint me(six->getRect().top(),six->getRect().left());
     QPoint first(280,425);
     QPoint second(c,d);
     QPoint third(e,f);
 
     if(ouch1==false)//if not already destroyed
      sight1= eye1->getQUAD(x,y);//finds the pic to make i look in 6s direction
     else if(me==first)  {sight1=9;key=true;}
      else {sight1=100;key=true;}

     if(ouch2==false)
     sight2= eye2->getQUAD(x,y);
     else if(me==second)   sight2=9;
      else sight2=12;

     if(ouch3==false)
     sight3= eye3->getQUAD(x,y);
     else if(me==third) sight3=9;
      else  sight3=64;  
   
     if(ouch4==false)
      sight4= eye4->getQUAD(x,y);
        else  sight4=9;

     if(ouch5==false)
      sight5= eye5->getQUAD(x,y);
        else  sight5=9;

   painter.drawImage(six->getRect(), six->getImage(step)); 
 painter.drawImage(ninja->getRect(), ninja->getImage(stip)); 
      painter.drawImage(ninja2->getRect(), ninja2->getImage(stip)); 
  for (int i=0; i<45; i++) {
       
          painter.drawImage(bricks[i]->getRect(), 
              bricks[i]->getImage());
    }
      //shoots the acid from each eyeball
   if(ouch1==false)
    painter.drawImage(bleh1->getRect(), bleh1->getImage()); 
     if(ouch2==false)
     painter.drawImage(bleh2->getRect(), bleh2->getImage()); 
    if(ouch3==false) 
    painter.drawImage(bleh3->getRect(), bleh3->getImage()); 
   if(ouch4==false) 
     painter.drawImage(bleh4->getRect(), bleh4->getImage()); 
  if(ouch5==false)  
   painter.drawImage(bleh5->getRect(), bleh5->getImage()); 
  //then draw eyes on top
    painter.drawImage(eye1->getRect(), eye1->getImage2(sight1)); 
     painter.drawImage(eye2->getRect(), eye2->getImage2(sight2)); 
     painter.drawImage(eye3->getRect(), eye3->getImage2(sight3)); 
      painter.drawImage(eye4->getRect(), eye4->getImage2(sight4)); 
     painter.drawImage(eye5->getRect(), eye5->getImage2(sight5)); 

  }

//third level with piano guy

  if(cover->isON()==false&&level3==true&&gameOver==false){
   
 //move to bottom of screen to start this level
 /* painter.drawImage(side1->getRect(),side1->getImage());
 painter.drawImage(side2->getRect(),side2->getImage(0)); 
 painter.drawImage(side3->getRect(),side3->getImage());*/
 painter.drawImage(man->getRect(),man->getImage(throwy,0));

 
 painter.drawImage(port2->getRect(),port2->getImage(1));
 //painter.drawImage(portsiete->getRect(),portsiete->getImage(1));&&&&&&
 painter.drawImage(portskull->getRect(),portskull->getImage(1));
painter.drawImage(cloud1->getRect(),cloud1->getImage());

  painter.drawImage(cloud5->getRect(),cloud5->getImage());
  painter.drawImage(cloud3->getRect(),cloud3->getImage());
 //draw all the clouds

 painter.drawImage(six->getRect(), six->getImage(step)); 
 painter.drawImage(cloud2->getRect(),cloud2->getImage()); 
 painter.drawImage(bolt->getRect(), bolt->getImage());//bolt painted
 painter.drawImage(cloud4->getRect(),cloud4->getImage());

 painter.drawImage(cloud6->getRect(),cloud6->getImage());

//draw three walls and man
 

//draw piano where ever it be
 painter.drawImage(piano->getRect(),piano->getImage());
//three portals that lead back to siete or skull door

}
if(final==true&&gameOver==false&&cover->isON()==false&&gameWon==false)
{    int sight64;
      int y = six->getRect().y();
      int x = six->getRect().x();
     int c = aye->getRect().left()+(aye->getRect().width()/2);
     int d = aye->getRect().top()+(aye->getRect().height()/2);
  painter.drawImage(bg->getRect(), bg->getImage(stip)); //draw background and animate flames
 painter.drawImage(bolt->getRect(), bolt->getImage());
 if(ouche==false)//if not already destroyed
 { sight64= aye->getQUAD(x,y);
  painter.drawImage(aye->getRect(), aye->getImage2(sight64));
  //painter.drawImage(blak->getRect(), blak->getImage()); this eye is harmless
}
 else
 painter.drawImage(aye->getRect(), aye->getImage2(9));

 painter.drawImage(six->getRect(), six->getImage(step)); 
 painter.drawImage(seven->getRect(),seven->getImage());

}
if(level7==true&&gameOver==false){
 int diologue;
if(dio<=100)
painter.drawImage(siete->getRect(), siete->getImage(1,stip));
else if(dio<=200)
painter.drawImage(siete->getRect(), siete->getImage(2,stip));
else
painter.drawImage(siete->getRect(), siete->getImage(3,stip));

painter.drawImage(portsiete->getRect(), portsiete->getImage(1)); //portal
 painter.drawImage(six->getRect(), six->getImage(step)); 
  if((six->getRect()).intersects(portsiete->getRect())){level7=false;level3=true;
  six->resetState(1000,550);
  
  }
  
}

//print score-------------------------------
       QFont font("Arial", 20, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width("LIVES");

    painter.setFont(font);
   
  QPen penText(QColor("#FFFFFF"));// drawn using this color
        painter.setPen(penText);
//place at bottom of screen
    painter.translate(QPoint(100, 650));
    painter.drawText(-textWidth/2, 0, "LIVES");
    QPen penT(QColor("#00e0fc"));
      painter.setPen(penT);
    life.setNum(lives);
     painter.drawText(100, 0 , life);
    
   if(lives>=0){
       QFont font("Arial", 20, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width(" COOL POINTS");

    painter.setFont(font);
   
  QPen penText(QColor("#FFFFFF"));// drawn using this color
        painter.setPen(penText);

    painter.translate(QPoint(500, 0));
    painter.drawText(-textWidth/2, 0, "COOL POINTS");
   
    QPen penT(QColor("#00e0fc"));
     painter.setPen(penT);
    scores.setNum(score);
    painter.drawText(100,0 ,scores);

  
 }
}


void Game::timerEvent(QTimerEvent *event)
{//movement
  block->autoMove();
  other->autoMove();
  nj->autoMove();
  nj2->autoMove();
  nj3->autoMove();
  bolt->autoMove();
  blade->autoMove();
  blade2->autoMove();
  blade3->autoMove();
  checkCollision();

   int WIDTH = bricks[1]->getRect().width();
 int HEIGHT= bricks[1]->getRect().height();
 int y = six->getRect().y();
 int x = six->getRect().x();
 int leftright= 200;
 int updown =200;
 int dir;
  if(trail<=leftright){//while less than 1 block movement in x direction
    if(trail==0){
    ninja->lor(x);//check xdir and updute it
    ninja2->follow(y);}
    trail++;
   }
 else {
  if(attack==0){
   ninja->follow(y);//updates y direction
     ninja2->lor(x);//opposite for second ninja for variation
   } attack++;
   if(attack==updown/2)
    {attack=0;trail=0;}
   } 
dir=ninja->getXDir();//checks dir to animate walking
    if(dir==1){if(stip==4)stip=3;else stip=4;}//if going right chose one or two picture
    else {if(stip==2)stip=1;else stip=2;};//else it goes left and chose from pic 3 and 4
  
 ninja->autoMove2();
 ninja2->autoMove2();
 bleh1->autoMove(sight1);
 bleh2->autoMove(sight2); 
 bleh3->autoMove(sight3);
 bleh4->autoMove(sight4);
 bleh5->autoMove(sight5);


 cloud1->autoMove(1);
 cloud2->autoMove(1);
 cloud3->autoMove(1);
 cloud4->autoMove(1);
 cloud5->autoMove(1);
 cloud6->autoMove(1);
 
 int p=piano->getRect().y();
 int z=six->getRect().x();
 man->lor(z+400);
 
 dio++;//counter for diologue and secs for each phrase
 if(p==100)throwy=1;
 else if(p>500)throwy=2;
 
 piano->autoMove(z-100);
  man->autoMove();
  repaint();

}



void Game::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
        { 
          int x = six->getRect().x();
          int y = six->getRect().y();
         if(lockup==false)
            six->moveUp(x,y--);
      if(step==1)step=2;
          else if(step==2)step=1;

       if(step==3)step=4;
         else if(step==4)step=3;
        break;
       }
     case Qt::Key_Down:
        { 
        int x = six->getRect().x();
         int y = six->getRect().y();
        if(lockdown==false)
            six->moveDown(x,y++);
       if(step==4)step=3;
          else if(step==3)step=4;

       if(step==2)step=1;
         else if(step==1)step=2;
        
        break;
       }
    case Qt::Key_Left:
       {  
       int x = six->getRect().x();
         if(lockleft==false) 
         six->moveLeft(x--);
       if(step>2){
        if(step==4)step=3;
    else if (step==3)step=4;//get step to set image
        
       }

      else step=3;
        break;
       }
    case Qt::Key_Right:
        {int x = six->getRect().x();
          if(lockright==false)
            six->moveRight(x++);
        if(step<3){
      if(step==1)step=2;
    else if (step==2)step=1;//get step to set image
        }
       else step=1;

      break;
       }
     
    case Qt::Key_P:
        {
          pauseGame();
        }
        break;
    case Qt::Key_Space:
        {
          startGame();
          cover->setOFF(false);
        }
        break;
    case Qt::Key_Escape:
        {
          qApp->exit();
        }
     case Qt::Key_R://reset
        {
          gameStarted=false;
          startGame();
        }
        break;
    default:
        QWidget::keyPressEvent(event);
    }

   

}

void Game::startGame()
{
  if (!gameStarted) {
    nj->resetState(100,350);
    block->resetState(1,225);
    blade->resetState(1200,-150);
    blade2->resetState(330,-90);
    blade3->resetState(1000,-300);
    nj2->resetState(300,450);
    nj3->resetState(200,400);
    six->resetState(10,10);
    bolt->resetState();
    ninja->resetState(50,0);
    ninja2->resetState(1200,600);
    level1=true;
    level7=false;
    level2=false;
    level3=false;
    final=false;
    key=false;
    ouch1=false;
    ouch2=false; 
    ouch3=false; 
    ouch4=false; 
    ouch5=false;
    ouche=false;
    lockleft=false;
    lockright=false;
    lockup=false;
    lockdown=false;
    lives=9;
    score=1000;
    gameOver = FALSE;
    gameWon = FALSE;
    gameStarted = TRUE;
    timerId = startTimer(10);
    bomb1->setBoom(false);
    bomb2->setBoom(false);
    bomb3->setBoom(false);
  }

 

}

void Game::pauseGame()
{
  if (paused) {
    timerId = startTimer(10);
    paused = FALSE;
  } else {
    paused = TRUE;
    killTimer(timerId);
   }
}

void Game::stopGame()
{
  killTimer(timerId);
  gameOver = TRUE;
  gameStarted = FALSE;
}

void Game::victory()
{
  killTimer(timerId);
  gameWon = TRUE;
  gameStarted = FALSE;
}

void Game::checkCollision() {
   lockleft=false;
  
   lockup=false;
 
   lockdown=false;
   
   lockright=false;
 
 if (((nj->getRect()).intersects(six->getRect())||(nj2->getRect()).intersects(six->getRect())||(nj3->getRect()).intersects(six->getRect()))&&level1==true) {
  lives--;
  score-=311;
  if(lives>0)
 six->resetState(10,10);
  else
   gameOver=true ;
 }
//check hit lazers
 if (((six->getRect()).intersects(lazer->getRect())||(six->getRect()).intersects(lazer2->getRect())||(six->getRect()).intersects(lazer3->getRect())||(six->getRect()).intersects(lazer4->getRect())||(six->getRect()).intersects(L->getRect())||(six->getRect()).intersects(lazer5->getRect())||(six->getRect()).intersects(lazer6->getRect())||(six->getRect()).intersects(lazerl->getRect()))&&level1==true) {
  buzz.play();
 lives--;
  score-=600;
  if(lives>0)
 six->resetState(10,10);
  else
   gameOver=true ;
 }
//did it hit block?
 if (((six->getRect()).intersects(block->getRect()))&&level1==true) {
  lives--;
  score -=300;
  if(lives>0)
 six->resetState(10,10);
  else
   gameOver=true ;
 }
//check collision with each bomb and if it was destroyed already
 if (((six->getRect()).intersects(bomb1->getRect())&&!(bomb1->boom()))&&level1==true) {
  lives--;
  score-=100;
  bomb1->setBoom(true);
  if(lives>0)
 six->resetState(10,10);
  else
   gameOver=true ;
 }
  if ((six->getRect()).intersects(seven->getRect())&&final==true&&gameWon==false) { 
  gameWon=true;
  score+=100000;
 }
  int y = six->getRect().y();
  if (y>400&&final==true&&gameWon==false) { 
  score--;
 }
  if(final==true&&gameWon==false&&gameOver==false){//cant go thru eye until its hit many times 
        
       int sixLEFT=six->getRect().left();
  int sixHEIGHT=six->getRect().height();
  int sixWIDTH = six->getRect().width();
  int sixTOP = six->getRect().top();

      QPoint pointRight(sixLEFT + sixWIDTH + 2, sixTOP+(sixHEIGHT/4));
        QPoint pointRight2(sixLEFT + sixWIDTH + 2, sixTOP+(3*sixHEIGHT/4));
        QPoint pointLeft(sixLEFT - 2, sixTOP+(sixHEIGHT/4));  
        QPoint pointLeft2(sixLEFT - 2, sixTOP+(3*sixHEIGHT/4));  
       QPoint pointTop(sixLEFT+(sixWIDTH/2), sixTOP -2);
       QPoint pointBottom(sixLEFT+(sixWIDTH/2), sixTOP + sixHEIGHT + 2); 
    
     if(aye->getRect().contains(pointLeft)||(aye->getRect().contains(pointLeft2))){
       lockleft=true; o++;
       }
      else if(aye->getRect().contains(pointTop)){
      lockup=true; o++;}
     else if(aye->getRect().contains(pointBottom)){
     lockdown=true; o++;
      }
     else  if(aye->getRect().contains(pointRight)||aye->getRect().contains(pointRight2))
     {lockright=true; o++;}
    if(o==10) 
     ouche=true;


  }


  if (((six->getRect()).intersects(bomb2->getRect())&&!(bomb2->boom()))&&level1==true) {
  lives--;
  score-=100;
  bomb2->setBoom(true);
  if(lives>0)
 six->resetState(10,10);
  else
   gameOver=true ;
 }
   if (((six->getRect()).intersects(bomb3->getRect())&&!(bomb3->boom()))&&level1==true) {
  lives--;
  score-=100;
  bomb3->setBoom(true);
  if(lives>0)
 six->resetState(10,10);
  else
   gameOver=true ;
 }
 if ((six->getRect()).intersects(port2->getRect())&&level1==true)//check the portal for reset to top
 {six->resetState(500,130);}

 //check portal to third level
 if((six->getRect()).intersects(port3->getRect())&&level1==true)//check the portal for reset to top
 {level1=false;
  level3=true;
  six->resetState(1000,550);
  }
 if((six->getRect()).intersects(port4->getRect())&&level1==true)//check the portal for reset to top
 {  six->resetState(750,500);
  }
 //check portal to middle of the field
 if (((six->getRect()).intersects(blade->getRect())||(six->getRect()).intersects(blade2->getRect())||(six->getRect()).intersects(blade3->getRect()))&&level1==true) {
  lives--;
  score-=100;
  if(lives>0)
 six->resetState(10,10);
  else
   gameOver=true ;
 }
  if ((six->getRect()).intersects(bolt->getRect())&&final==true) {
  lives--;
  score-=500;
  bolt->resetState();
  if(lives>=0)
 six->resetState(1000,550);
  else
   gameOver=true ;
 }
 //does portal to siete gets reached
 if(level3==true&&(six->getRect()).intersects(portsiete->getRect())){
    level3=false;
    level7=true;
      dio=0;
     six->resetState(600,100);
 }
//return
 else if(level7==true&&(six->getRect()).intersects(portsiete->getRect())){
    level7=false;
    level3=true;

 } 
//check other portal
   
   if(level1==true&&(six->getRect()).intersects(port5->getRect())){
    level3=true;
    level1=false;
     six->resetState(1000,600);
 } 

//check the door AND key is true
 if((six->getRect()).intersects(door->getRect())&&key==true&&level1==true){
     level1=false;
     final=true;
     six->resetState(100,100);

 }
//hit other lazer thats verticall
 if (((six->getRect()).intersects(lwall->getRect())||(six->getRect()).intersects(lwall2->getRect())||(six->getRect()).intersects(lastwall->getRect())||(six->getRect()).intersects(psych->getRect()))&&level1==true) {

 lives--;
  score-=30;
  if(lives>0)
 six->resetState(10,10);
  else
   gameOver=true ;
 }

 if(((six->getRect()).intersects(port1->getRect()))&&(level1==true||level2==true)){
  if(level1==true){
   level1=false;
   level2=true; 
   six->resetState(658,500);}
  else
   {level1=true;  level2=false;
    six->resetState(10,10);}
  
  } 
 int sixLEFT=six->getRect().left();
  int sixHEIGHT=six->getRect().height();
  int sixWIDTH = six->getRect().width();
  int sixTOP = six->getRect().top();

      QPoint pointRight(sixLEFT + sixWIDTH + 2, sixTOP+(sixHEIGHT/4));
        QPoint pointRight2(sixLEFT + sixWIDTH + 2, sixTOP+(3*sixHEIGHT/4));
      QPoint pointLeft(sixLEFT - 2, sixTOP+(sixHEIGHT/4));  
       QPoint pointLeft2(sixLEFT - 2, sixTOP+(3*sixHEIGHT/4));  
      QPoint pointTop(sixLEFT+(sixWIDTH/2), sixTOP -2);
      QPoint pointBottom(sixLEFT+(sixWIDTH/2), sixTOP + sixHEIGHT + 2); 

  if(level2==true&&level3==false){//on level two check collisions with bricks ninjas eyes and bubble 

  if((ouch1==false&&(six->getRect()).intersects(bleh1->getRect()))||(ouch2==false&&(six->getRect()).intersects(bleh2->getRect()))||(ouch3==false&&(six->getRect()).intersects(bleh3->getRect()))||(ouch4==false&&(six->getRect()).intersects(bleh4->getRect()))||(ouch5==false&&(six->getRect()).intersects(bleh5->getRect())))
    {score-=312;
     six->resetState(658,500);
     lives--;
    if(lives>0)
 six->resetState(658,500);
  else
   gameOver=true ;}
    
 if((six->getRect()).intersects(ninja->getRect())||(six->getRect()).intersects(ninja2->getRect())){

     score-=1000;
     ninja->resetState(50,0);
     ninja2->resetState(1200,600);
     lives--;
if(lives>0)
 six->resetState(658,500);
  else
   gameOver=true ;

 }


 for (int i=0;i<45;i++){
 if((six->getRect()).intersects(bricks[i]->getRect())){
  lockleft=false;
  
   lockup=false;
 
   lockdown=false;
   
    lockright=false;
 
   if(!(i==23 &&ouch2==true)&&!(i==19&& ouch1==true)&&!(i==12 &&ouch3==true)&&!(i==0&& ouch4==true)&&!(i==6&& ouch5==true)){
       if(bricks[i]->getRect().contains(pointLeft)||(bricks[i]->getRect().contains(pointLeft2))){
       lockleft=true;
       }
      else if(bricks[i]->getRect().contains(pointTop)){
      lockup=true;}
     else if(bricks[i]->getRect().contains(pointBottom)){
     lockdown=true;
      }
     else  if(bricks[i]->getRect().contains(pointRight)||bricks[i]->getRect().contains(pointRight2))
     {lockright=true;}
     
  if((i==0||i==6 || i==12|| i==19||i==23)&&(lockup==true||lockdown==true||lockleft==true||lockright==true))//check if an eyball was hit
   {//paint 0 image to look like u hit it
       
      count[i]+=1;//cout up to three to die
       int x = six->getRect().x();
       int y = six->getRect().y();
       if(lockdown==true)six->moveUp(x,y-10);//bumb off
       if(lockup==true)six->moveDown(x,y+10);
       if(lockleft==true)six->moveRight(x-10);
       if(lockright==true)six->moveLeft(x+10);
        if(count[i]==3){
          score+=3000;
       
          lockdown=false;//be able to go thru now
          lockleft=false;
          lockup=false;
          lockright=false; 
          if(i==23) {ouch2=true;sight1=12;key=true;}
          if(i==19) {ouch1=true;sight3=64;score+=100000;}
          if(i==12) {ouch3=true;sight2=100;lives+=9;}
          if(i==0) ouch4=true;
          if(i==6) ouch5=true;
         
        }       //check if died
   }
 
 
  }
  }
 }
 }
//checklevel3 stuff
if(level3==true){
       lockdown=false;//be able to go thru now
       lockleft=false;
       lockup=false;
       lockright=false; 
  /*
     if(side3->getRect().contains(pointLeft)|| side3->getRect().contains(pointLeft2)  ){//checks right wall
     lockleft=true;}   

    if(side2->getRect().contains(pointTop)){//checks bottom wall
   lockup=true;}
  
   if(side1->getRect().contains(pointRight)||side1->getRect().contains(pointRight2))//checks left wall
    {lockright=true;}
   
 if((six->getRect()).intersects(cloud1->getRect())){

   lockleft=true; lockright=true;lockup=true;lockup=true;//gets it stuck while in a cloud  
 }

 if((six->getRect()).intersects(cloud2->getRect())){

   lockleft=true; lockright=true;lockup=true;lockup=true;//gets it stuck while in a cloud  
 }
if((six->getRect()).intersects(cloud3->getRect())){

   lockleft=true; lockright=true;lockup=true;lockup=true;//gets it stuck while in a cloud  
 }
if((six->getRect()).intersects(cloud4->getRect())){

   lockleft=true; lockright=true;lockup=true;lockup=true;//gets it stuck while in a cloud  
 }
if((six->getRect()).intersects(cloud5->getRect())){

   lockleft=true; lockright=true;lockup=true;lockup=true;//gets it stuck while in a cloud  
 }
if((six->getRect()).intersects(cloud6->getRect())){

   lockleft=true; lockright=true;lockup=true;lockup=true;//gets it stuck while in a cloud  
 }
*/
if((six->getRect()).intersects(portsiete->getRect()))//checks portal to siete
{ level3=false;
  level7=true;
}
if((six->getRect()).intersects(portskull->getRect()))//checks portal to skull
{ level3=false;
  level1=true;
  six->resetState(850,400);
}
if((six->getRect()).intersects(port2->getRect()))//checks portal back
{ level3=false;
  level1=true;
  six->resetState(600,100);
}
 int pianoy=((piano->getRect().top())+((3*piano->getRect().height())/4));
 int pianox=piano->getRect().x();
 QPoint pp(pianox,pianoy);
if((six->getRect()).contains(pp)){
 score--;


}

//hit by lightning or not
 if ((six->getRect()).intersects(bolt->getRect())) {
  lives--;
  score-=500;
  bolt->resetState();
  if(lives>=0)
 six->resetState(600,550);
  else
   gameOver=true ;
 }
}
}
