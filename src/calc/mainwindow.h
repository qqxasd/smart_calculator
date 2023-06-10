#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_digit_1_button_clicked();

    void on_digit_2_button_clicked();

    void on_digit_3_button_clicked();

    void on_digit_4_button_clicked();

    void on_digit_5_button_clicked();

    void on_digit_6_button_clicked();

    void on_digit_7_button_clicked();

    void on_digit_8_button_clicked();

    void on_digit_9_button_clicked();

    void on_digit_0_button_clicked();

    void on_dot_button_clicked();

    void on_eq_button_clicked();

    void on_clear_button_clicked();

    void on_r_bracket_button_clicked();

    void on_l_bracket_button_clicked();

    void on_plus_button_clicked(bool checked);

    void on_minus_button_clicked();

    void on_mult_button_clicked();

    void on_division_button_clicked();

    void on_pow_button_clicked();

    void on_log_button_clicked();

    void on_atan_button_clicked();

    void on_ln_button_clicked();

    void on_asin_button_clicked();

    void on_cos_button_clicked();

    void on_acos_button_clicked();

    void on_tan_button_clicked();

    void on_sin_button_clicked();

    void on_sqrt_button_clicked();

    void on_mod_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
