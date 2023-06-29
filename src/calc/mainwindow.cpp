#include "mainwindow.h"

#include <QPixmap>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  graph = new class graph;
  connect(this, &MainWindow::signal, graph, &graph::slot);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_digit_1_button_clicked() { ui->expression->insert("1"); }

void MainWindow::on_digit_2_button_clicked() { ui->expression->insert("2"); }

void MainWindow::on_digit_3_button_clicked() { ui->expression->insert("3"); }

void MainWindow::on_digit_4_button_clicked() { ui->expression->insert("4"); }

void MainWindow::on_digit_5_button_clicked() { ui->expression->insert("5"); }

void MainWindow::on_digit_6_button_clicked() { ui->expression->insert("6"); }

void MainWindow::on_digit_7_button_clicked() { ui->expression->insert("7"); }

void MainWindow::on_digit_8_button_clicked() { ui->expression->insert("8"); }

void MainWindow::on_digit_9_button_clicked() { ui->expression->insert("9"); }

void MainWindow::on_digit_0_button_clicked() { ui->expression->insert("0"); }

void MainWindow::on_dot_button_clicked() { ui->expression->insert("."); }

void MainWindow::on_eq_button_clicked() {
  QByteArray text = ui->expression->text().toLocal8Bit();
  char *str = text.data();
  double result = 0;
  double x_val = ui->x_value->text().toDouble();
  int error = calculate_polish(str, x_val, &result);
  if (!error) {
    QString strResult = QString::number(result);
    ui->result->setText(strResult);
    ui->status->setText("OK");
  } else {
    ui->status->setText("FAIL");
  }
}

void MainWindow::on_clear_button_clicked() { ui->expression->clear(); }

void MainWindow::on_r_bracket_button_clicked() { ui->expression->insert("("); }

void MainWindow::on_l_bracket_button_clicked() { ui->expression->insert(")"); }

void MainWindow::on_plus_button_clicked(bool checked) {
  ui->expression->insert("+");
}

void MainWindow::on_minus_button_clicked() { ui->expression->insert("-"); }

void MainWindow::on_mult_button_clicked() { ui->expression->insert("*"); }

void MainWindow::on_division_button_clicked() { ui->expression->insert("/"); }

void MainWindow::on_pow_button_clicked() { ui->expression->insert("^"); }

void MainWindow::on_log_button_clicked() { ui->expression->insert("log("); }

void MainWindow::on_atan_button_clicked() { ui->expression->insert("atan("); }

void MainWindow::on_ln_button_clicked() { ui->expression->insert("ln("); }

void MainWindow::on_asin_button_clicked() { ui->expression->insert("asin("); }

void MainWindow::on_cos_button_clicked() { ui->expression->insert("cos("); }

void MainWindow::on_acos_button_clicked() { ui->expression->insert("acos("); }

void MainWindow::on_tan_button_clicked() { ui->expression->insert("tan("); }

void MainWindow::on_sin_button_clicked() { ui->expression->insert("sin("); }

void MainWindow::on_sqrt_button_clicked() { ui->expression->insert("sqrt("); }

void MainWindow::on_mod_button_clicked() { ui->expression->insert("mod"); }

void MainWindow::on_tg_button_clicked() { ui->expression->insert("tan("); }

void MainWindow::on_ctg_button_clicked() { ui->expression->insert("ctan("); }

void MainWindow::on_x_button_clicked() { ui->expression->insert("x"); }

int MainWindow::check_info() {  // checks that the func is valid
  if (!ui->expression->text().contains("x")) {
    return FAILURE;
  }
  QByteArray text = ui->expression->text().toLocal8Bit();
  char *str = text.data();
  double result = 0;
  double x_val = 1;
  int error = calculate_polish(str, x_val, &result);
  return error;
}

void MainWindow::on_graph_button_clicked() {
  if (!check_info()) {
    emit signal(ui->expression->text());
    graph->show();
  } else {
    ui->status->setText("FAIL");
  }
}
