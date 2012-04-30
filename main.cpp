#include "game.h"
#include <QDesktopWidget>
#include <QApplication>
#include <QPalette>

void center(QWidget &widget)
{
  int x, y;
  int screenWidth;
  int screenHeight;
  QDesktopWidget *desktop = QApplication::desktop();
  screenWidth = desktop->width();
  screenHeight = desktop->height();

  int WIDTH = 1400-10;
  int HEIGHT = 800;


 


  x = 0;
  y = 0;

  widget.setGeometry(x, y, WIDTH, HEIGHT);
  widget.setFixedSize(WIDTH, HEIGHT);
    QPalette palette;
  palette.setBrush(widget.backgroundRole(), QBrush(Qt::black));
  widget.setPalette(palette);
}


int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  Game window;



  window.setWindowTitle("LAZERS");
  window.show();
  center(window);

  return app.exec();
}

