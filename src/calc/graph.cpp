#include "graph.h"
#include "ui_graph.h"
#include <QVector>
#include "qcustomplot.h"

graph::graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::graph)
{
    ui->setupUi(this);

    float h = 0.1;
    int xBegin = -3;
    int xEnd = 3;

    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(0, 9);
    for (int X = xBegin; X <= xEnd; X += h) {
        x.push_back(X);
        y.push_back(X+X);
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
}

graph::~graph()
{
    delete ui;
}
