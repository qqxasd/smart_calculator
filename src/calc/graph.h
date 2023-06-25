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
  QVector<double> x, y;

 public slots:
  void slot(QString exp, int x_min, int x_max, int y_min, int y_max,
            double step);
};

#endif  // GRAPH_H
