#include "graph.h"

#include <QVector>

#include "qcustomplot.h"
#include "ui_graph.h"

graph::graph(QWidget *parent) : QWidget(parent), ui(new Ui::graph) {
  ui->setupUi(this);
}

void graph::plot(int xBegin, int xEnd, int yBegin, int yEnd,
                 double step) {  // draws the graph;
  ui->widget->clearGraphs();
  ui->widget->xAxis->setRange(xBegin, xEnd);
  ui->widget->yAxis->setRange(yBegin, yEnd);
  int dots_amount = (xEnd - xBegin) / step;
  double X = xBegin;
  QVector<double> x, y;
  for (int i = 0; i < dots_amount; i++) {
    QByteArray text = ui->function->text().toLocal8Bit();
    char *func = text.data();  // gets the string from label
    double result = 0;
    calculate_polish(func, X,
                     &result);  // goes into c funciton for calculations
    y.push_back(result);        // saves the result
    x.push_back(X);             // saves  the result
    X += step;
  }
  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x, y);
  ui->widget->replot();
}

void graph::slot(
    QString str) {  // draws the graph first time when user opens the window;
  int xBegin = -100;
  int xEnd = 100;
  int yBegin = -100;
  int yEnd = 100;
  double step = 0.5;
  ui->function->setText(str);
  plot(xBegin, xEnd, yBegin, yEnd, step);
}

graph::~graph() { delete ui; }

int graph::check_info(int xBegin, int xEnd, int yBegin,
                      int yEnd) {  // checks the info about axis for validity
  if (xBegin == 0 || xEnd == 0 || yBegin == 0 || yEnd == 0) {
    return FAILURE;
  }
  if (xBegin >= xEnd) {
    return FAILURE;
  }
  if (yBegin >= yEnd) {
    return FAILURE;
  }
  return SUCCESS;
}

void graph::on_redraw_button_clicked()  // redraws the graph when the button
                                        // clicked
{
  int xBegin = ui->x_min->text().toInt();
  int xEnd = ui->x_max->text().toInt();
  int yBegin = ui->y_min->text().toInt();
  int yEnd = ui->y_max->text().toInt();
  double step = 0.5;
  if (!check_info(xBegin, xEnd, yBegin, yEnd)) {
    plot(xBegin, xEnd, yBegin, yEnd, step);
  }
}
