#ifndef GRAPH_H
#define GRAPH_H

#include <QVector>
#include <QWidget>
extern "C" {
#include "polish/data_structures.h"
#include "polish/polish_notation.h"
}

namespace Ui {
class graph;
}

class graph : public QWidget {
  Q_OBJECT

 public:
  explicit graph(QWidget *parent = nullptr);
  ~graph();

 private:
  Ui::graph *ui;
  void plot(int xBegin, int xEnd, int yBegin, int yEnd, double step);

 public slots:
  void slot(QString exp);
 private slots:
  void on_redraw_button_clicked();
  int check_info(int xBegin, int xEnd, int yBegin, int yEnd);
};

#endif  // GRAPH_H
