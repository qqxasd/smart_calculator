#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
        ui->setupUi(this);
//    connect(ui->EqualButton, SIGNAL(clicked()), this, SLOT(s21_equal_clicked()));
//    connect(ui->count, SIGNAL(clicked()), this, SLOT (s21_count_clicked)));
}

MainWindow::~MainWindow()
{
      delete ui;
//    QString text = ui->expression->text();
}

//void MainWindow::s21_equal_clicked() {
//    QString text = ui->expression->text();
//    std::string str2 = text.toStdString();
//    const char *str = str2.c_str();
//    int error = 0;
//    if (ui->expression->text().contains("x")) {
//        s21_null_fields();
//        s21_draw_graph(str);
//    }else {
//        double result = parse_str(str, &error, 0);
//        if (!error) {
//            QString strResult = QString::number(result);
//            ui->Result_label->setText(strResult);
//        }
//        else {
//            ui->Result_label->setText("ERROR");
//        }
//    }
//}

//void MainWindow::on_one_clicked()
//{
//    ui->aboba->setText("aboba");
//}

void MainWindow::on_digit_1_button_clicked()
{
    ui->expression->insert("1");
}


void MainWindow::on_digit_2_button_clicked()
{
    ui->expression->insert("2");
}


void MainWindow::on_digit_3_button_clicked()
{
    ui->expression->insert("3");
}


void MainWindow::on_digit_4_button_clicked()
{
    ui->expression->insert("4");
}


void MainWindow::on_digit_5_button_clicked()
{
    ui->expression->insert("5");
}


void MainWindow::on_digit_6_button_clicked()
{
    ui->expression->insert("6");
}


void MainWindow::on_digit_7_button_clicked()
{
        ui->expression->insert("7");
}


void MainWindow::on_digit_8_button_clicked()
{
        ui->expression->insert("8");
}


void MainWindow::on_digit_9_button_clicked()
{
        ui->expression->insert("9");
}




void MainWindow::on_digit_0_button_clicked()
{
    ui->expression->insert("0");
}



void MainWindow::on_dot_button_clicked()
{
    ui->expression->insert(".");
}


void MainWindow::on_eq_button_clicked()
{
    ui->expression->insert("9");
}


void MainWindow::on_clear_button_clicked()
{
    ui->expression->clear();
}


void MainWindow::on_r_bracket_button_clicked()
{
    ui->expression->insert("(");
}


void MainWindow::on_l_bracket_button_clicked()
{
    ui->expression->insert(")");
}


void MainWindow::on_plus_button_clicked(bool checked)
{
    ui->expression->insert("+");
}


void MainWindow::on_minus_button_clicked()
{
    ui->expression->insert("-");
}


void MainWindow::on_mult_button_clicked()
{
    ui->expression->insert("*");
}


void MainWindow::on_division_button_clicked()
{
    ui->expression->insert("/");
}


void MainWindow::on_pow_button_clicked()
{
    ui->expression->insert("^");
}


void MainWindow::on_log_button_clicked()
{
    ui->expression->insert("log(");
}


void MainWindow::on_atan_button_clicked()
{
    ui->expression->insert("atan(");
}


void MainWindow::on_ln_button_clicked()
{
    ui->expression->insert("ln(");
}


void MainWindow::on_asin_button_clicked()
{
    ui->expression->insert("asin(");
}


void MainWindow::on_cos_button_clicked()
{
    ui->expression->insert("cos(");
}


void MainWindow::on_acos_button_clicked()
{
    ui->expression->insert("acos(");
}


void MainWindow::on_tan_button_clicked()
{
    ui->expression->insert("tan(");
}


void MainWindow::on_sin_button_clicked()
{
    ui->expression->insert("sin(");
}


void MainWindow::on_sqrt_button_clicked()
{
    ui->expression->insert("sqrt(");
}


void MainWindow::on_mod_button_clicked()
{
    ui->expression->insert("mod(");
}

