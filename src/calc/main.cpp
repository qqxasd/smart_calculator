#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;
  w.setFixedSize(395, 210);
  w.show();
  return a.exec();
}
