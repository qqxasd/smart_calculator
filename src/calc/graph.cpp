#include "graph.h"

#include <QVector>

#include "qcustomplot.h"
#include "ui_graph.h"

graph::graph(QWidget *parent) : QWidget(parent), ui(new Ui::graph) {
  ui->setupUi(this);
}

void graph::plot(int xBegin, int xEnd, int yBegin, int yEnd, double step) {
  ui->widget->clearGraphs();
  ui->widget->xAxis->setRange(xBegin, xEnd);
  ui->widget->yAxis->setRange(yBegin, yEnd);
  int dots_amount = (xEnd - xBegin) / step;
  double X = xBegin;
  for (int i = 0; i < dots_amount; i++) {
    QByteArray text = ui->function->text().toLocal8Bit();
    char *func = text.data();
    double result = 0;
    calculate_polish(func, X, &result);
    y.push_back(result);
    x.push_back(X);
    X += step;
  }
  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x, y);
  ui->widget->replot();
}

void graph::slot(QString str, int x_min, int x_max, int y_min, int y_max,
                 double step) {
  ui->function->setText(str);
  plot(x_min, x_max, y_min, y_max, step);
}

graph::~graph() { delete ui; }
