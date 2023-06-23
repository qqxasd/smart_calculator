#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
#include <QVector>

namespace Ui {
class graph;
}

class graph : public QWidget
{
    Q_OBJECT

public:
    explicit graph(QWidget *parent = nullptr);
    ~graph();

private:
    Ui::graph *ui;

    QVector<double> x,y;
};

#endif // GRAPH_H
