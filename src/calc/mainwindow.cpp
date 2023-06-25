#include "mainwindow.h"

#include <QPixmap>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  graph = new class graph;
  //      connect(ui->EqualButton, SIGNAL(clicked()), this,
  //    SLOT(s21_equal_clicked())); connect(ui->count, SIGNAL(clicked()), this,
  //    SLOT (s21_count_clicked)));
  connect(this, &MainWindow::signal, graph, &graph::slot);
}

MainWindow::~MainWindow() {
  delete ui;
  //    QString text = ui->expression->text();
}

// void MainWindow::s21_equal_clicked() {
//     QString text = ui->expression->text();
//     std::string str2 = text.toStdString();
//     const char *str = str2.c_str();
//     int error = 0;
//     if (ui->expression->text().contains("x")) {
//         s21_null_fields();
//         s21_draw_graph(str);
//     }else {
//         double result = parse_str(str, &error, 0);
//         if (!error) {
//             QString strResult = QString::number(result);
//             ui->Result_label->setText(strResult);
//         }
//         else {
//             ui->Result_label->setText("ERROR");
//         }
//     }
// }

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

int MainWindow::check_info() {
  int er = 0;
  if (QString::compare(ui->status->text(), "OK")) {
    er = 1;
  }
  if (ui->x_min->text().toInt() >= ui->x_max->text().toInt()) {
    ui->status->setText("aboba");
    er = 1;
  }
  if (ui->y_min->text().toInt() >= ui->y_max->text().toInt()) {
    ui->status->setText("amogus");
    er = 1;
  }
  if (ui->graph_step->text().toDouble() >=
      ui->x_max->text().toInt() - ui->x_min->text().toInt()) {
    ui->status->setText("abobus");
    er = 1;
  }
  if (!ui->expression->text().contains("x")) {
    ui->status->setText("ABOBA+AMOGUS");
    er = 1;
  }
  return er;
}

void MainWindow::on_graph_button_clicked() {
  if (!check_info()) {
    emit signal(ui->expression->text(), ui->x_min->text().toInt(),
                ui->x_max->text().toInt(), ui->y_min->text().toInt(),
                ui->y_max->text().toInt(), ui->graph_step->text().toDouble());
    graph->show();
  }
}
