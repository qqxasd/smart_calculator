/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionkal;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *aboba;
    QPushButton *graph_button;
    QPushButton *r_bracket_button;
    QPushButton *log_button;
    QPushButton *pow_button;
    QPushButton *digit_3_button;
    QPushButton *sin_button;
    QPushButton *digit_1_button;
    QLineEdit *result;
    QPushButton *cos_button;
    QPushButton *digit_7_button;
    QPushButton *tan_button;
    QPushButton *asin_button;
    QPushButton *digit_6_button;
    QPushButton *atan_button;
    QPushButton *plus_button;
    QPushButton *division_button;
    QPushButton *l_bracket_button;
    QPushButton *mod_button;
    QPushButton *digit_4_button;
    QPushButton *mult_button;
    QPushButton *ln_button;
    QPushButton *digit_0_button;
    QPushButton *clear_button;
    QPushButton *digit_2_button;
    QPushButton *eq_button;
    QPushButton *digit_5_button;
    QPushButton *minus_button;
    QPushButton *digit_8_button;
    QPushButton *dot_button;
    QPushButton *sqrt_button;
    QPushButton *digit_9_button;
    QPushButton *acos_button;
    QLineEdit *expression;
    QLineEdit *status;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *x_min;
    QLineEdit *x_max;
    QLineEdit *y_min;
    QLineEdit *y_max;
    QPushButton *ctg_button;
    QPushButton *tg_button;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(395, 259);
        actionkal = new QAction(MainWindow);
        actionkal->setObjectName(QString::fromUtf8("actionkal"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 393, 165));
        aboba = new QGridLayout(layoutWidget);
        aboba->setSpacing(0);
        aboba->setObjectName(QString::fromUtf8("aboba"));
        aboba->setSizeConstraint(QLayout::SetNoConstraint);
        aboba->setContentsMargins(0, 0, 0, 0);
        graph_button = new QPushButton(layoutWidget);
        graph_button->setObjectName(QString::fromUtf8("graph_button"));
        graph_button->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 255, 217);"));

        aboba->addWidget(graph_button, 0, 5, 1, 1);

        r_bracket_button = new QPushButton(layoutWidget);
        r_bracket_button->setObjectName(QString::fromUtf8("r_bracket_button"));
        r_bracket_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(r_bracket_button, 1, 3, 1, 1);

        log_button = new QPushButton(layoutWidget);
        log_button->setObjectName(QString::fromUtf8("log_button"));
        log_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(log_button, 5, 1, 1, 1);

        pow_button = new QPushButton(layoutWidget);
        pow_button->setObjectName(QString::fromUtf8("pow_button"));
        pow_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(pow_button, 5, 5, 1, 1);

        digit_3_button = new QPushButton(layoutWidget);
        digit_3_button->setObjectName(QString::fromUtf8("digit_3_button"));
        digit_3_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_3_button, 2, 4, 1, 1);

        sin_button = new QPushButton(layoutWidget);
        sin_button->setObjectName(QString::fromUtf8("sin_button"));
        sin_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(sin_button, 2, 0, 1, 1);

        digit_1_button = new QPushButton(layoutWidget);
        digit_1_button->setObjectName(QString::fromUtf8("digit_1_button"));
        digit_1_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_1_button, 2, 2, 1, 1);

        result = new QLineEdit(layoutWidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setReadOnly(true);

        aboba->addWidget(result, 0, 4, 1, 1);

        cos_button = new QPushButton(layoutWidget);
        cos_button->setObjectName(QString::fromUtf8("cos_button"));
        cos_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(cos_button, 3, 1, 1, 1);

        digit_7_button = new QPushButton(layoutWidget);
        digit_7_button->setObjectName(QString::fromUtf8("digit_7_button"));
        digit_7_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_7_button, 4, 2, 1, 1);

        tan_button = new QPushButton(layoutWidget);
        tan_button->setObjectName(QString::fromUtf8("tan_button"));
        tan_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(tan_button, 2, 1, 1, 1);

        asin_button = new QPushButton(layoutWidget);
        asin_button->setObjectName(QString::fromUtf8("asin_button"));
        asin_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(asin_button, 4, 0, 1, 1);

        digit_6_button = new QPushButton(layoutWidget);
        digit_6_button->setObjectName(QString::fromUtf8("digit_6_button"));
        digit_6_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_6_button, 3, 4, 1, 1);

        atan_button = new QPushButton(layoutWidget);
        atan_button->setObjectName(QString::fromUtf8("atan_button"));
        atan_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(atan_button, 4, 1, 1, 1);

        plus_button = new QPushButton(layoutWidget);
        plus_button->setObjectName(QString::fromUtf8("plus_button"));
        plus_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(plus_button, 1, 5, 1, 1);

        division_button = new QPushButton(layoutWidget);
        division_button->setObjectName(QString::fromUtf8("division_button"));
        division_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(division_button, 4, 5, 1, 1);

        l_bracket_button = new QPushButton(layoutWidget);
        l_bracket_button->setObjectName(QString::fromUtf8("l_bracket_button"));
        l_bracket_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(l_bracket_button, 1, 4, 1, 1);

        mod_button = new QPushButton(layoutWidget);
        mod_button->setObjectName(QString::fromUtf8("mod_button"));
        mod_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(mod_button, 1, 0, 1, 1);

        digit_4_button = new QPushButton(layoutWidget);
        digit_4_button->setObjectName(QString::fromUtf8("digit_4_button"));
        digit_4_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_4_button, 3, 2, 1, 1);

        mult_button = new QPushButton(layoutWidget);
        mult_button->setObjectName(QString::fromUtf8("mult_button"));
        mult_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(mult_button, 3, 5, 1, 1);

        ln_button = new QPushButton(layoutWidget);
        ln_button->setObjectName(QString::fromUtf8("ln_button"));
        ln_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(ln_button, 5, 0, 1, 1);

        digit_0_button = new QPushButton(layoutWidget);
        digit_0_button->setObjectName(QString::fromUtf8("digit_0_button"));
        digit_0_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_0_button, 5, 2, 1, 1);

        clear_button = new QPushButton(layoutWidget);
        clear_button->setObjectName(QString::fromUtf8("clear_button"));
        clear_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(clear_button, 1, 2, 1, 1);

        digit_2_button = new QPushButton(layoutWidget);
        digit_2_button->setObjectName(QString::fromUtf8("digit_2_button"));
        digit_2_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_2_button, 2, 3, 1, 1);

        eq_button = new QPushButton(layoutWidget);
        eq_button->setObjectName(QString::fromUtf8("eq_button"));
        eq_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(eq_button, 5, 4, 1, 1);

        digit_5_button = new QPushButton(layoutWidget);
        digit_5_button->setObjectName(QString::fromUtf8("digit_5_button"));
        digit_5_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_5_button, 3, 3, 1, 1);

        minus_button = new QPushButton(layoutWidget);
        minus_button->setObjectName(QString::fromUtf8("minus_button"));
        minus_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(161, 99, 85);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color: white\n"
"}"));

        aboba->addWidget(minus_button, 2, 5, 1, 1);

        digit_8_button = new QPushButton(layoutWidget);
        digit_8_button->setObjectName(QString::fromUtf8("digit_8_button"));
        digit_8_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_8_button, 4, 3, 1, 1);

        dot_button = new QPushButton(layoutWidget);
        dot_button->setObjectName(QString::fromUtf8("dot_button"));
        dot_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(dot_button, 5, 3, 1, 1);

        sqrt_button = new QPushButton(layoutWidget);
        sqrt_button->setObjectName(QString::fromUtf8("sqrt_button"));
        sqrt_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(sqrt_button, 1, 1, 1, 1);

        digit_9_button = new QPushButton(layoutWidget);
        digit_9_button->setObjectName(QString::fromUtf8("digit_9_button"));
        digit_9_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(80, 78, 86);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-color: white;\n"
"}"));

        aboba->addWidget(digit_9_button, 4, 4, 1, 1);

        acos_button = new QPushButton(layoutWidget);
        acos_button->setObjectName(QString::fromUtf8("acos_button"));
        acos_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));

        aboba->addWidget(acos_button, 3, 0, 1, 1);

        expression = new QLineEdit(layoutWidget);
        expression->setObjectName(QString::fromUtf8("expression"));

        aboba->addWidget(expression, 0, 0, 1, 3);

        status = new QLineEdit(layoutWidget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setReadOnly(true);

        aboba->addWidget(status, 0, 3, 1, 1);

        aboba->setColumnStretch(0, 1);
        aboba->setColumnStretch(1, 1);
        aboba->setColumnStretch(2, 1);
        aboba->setColumnStretch(3, 1);
        aboba->setColumnStretch(4, 1);
        aboba->setColumnStretch(5, 1);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 160, 261, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        x_min = new QLineEdit(horizontalLayoutWidget);
        x_min->setObjectName(QString::fromUtf8("x_min"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(x_min->sizePolicy().hasHeightForWidth());
        x_min->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(x_min);

        x_max = new QLineEdit(horizontalLayoutWidget);
        x_max->setObjectName(QString::fromUtf8("x_max"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(x_max->sizePolicy().hasHeightForWidth());
        x_max->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(x_max);

        y_min = new QLineEdit(horizontalLayoutWidget);
        y_min->setObjectName(QString::fromUtf8("y_min"));
        sizePolicy.setHeightForWidth(y_min->sizePolicy().hasHeightForWidth());
        y_min->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(y_min);

        y_max = new QLineEdit(horizontalLayoutWidget);
        y_max->setObjectName(QString::fromUtf8("y_max"));
        sizePolicy.setHeightForWidth(y_max->sizePolicy().hasHeightForWidth());
        y_max->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(y_max);

        ctg_button = new QPushButton(centralwidget);
        ctg_button->setObjectName(QString::fromUtf8("ctg_button"));
        ctg_button->setGeometry(QRect(65, 160, 65, 20));
        ctg_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));
        tg_button = new QPushButton(centralwidget);
        tg_button->setObjectName(QString::fromUtf8("tg_button"));
        tg_button->setGeometry(QRect(0, 160, 65, 20));
        tg_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(230, 146, 82);\n"
"color: black;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(32, 32, 32);\n"
"}\n"
"QPushButton:pressed {\n"
"border-color:white;\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 180, 113, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 395, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionkal->setText(QCoreApplication::translate("MainWindow", "kal", nullptr));
        graph_button->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
        r_bracket_button->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        log_button->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pow_button->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        digit_3_button->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        sin_button->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        digit_1_button->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        cos_button->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        digit_7_button->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        tan_button->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        asin_button->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        digit_6_button->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        atan_button->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        plus_button->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        division_button->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        l_bracket_button->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        mod_button->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        digit_4_button->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        mult_button->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        ln_button->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        digit_0_button->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clear_button->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        digit_2_button->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        eq_button->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        digit_5_button->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        minus_button->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        digit_8_button->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        dot_button->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        sqrt_button->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        digit_9_button->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        acos_button->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        x_min->setText(QCoreApplication::translate("MainWindow", "x min", nullptr));
        x_max->setText(QCoreApplication::translate("MainWindow", "x max", nullptr));
        y_min->setText(QCoreApplication::translate("MainWindow", "y min", nullptr));
        y_max->setText(QCoreApplication::translate("MainWindow", "y max ", nullptr));
        ctg_button->setText(QCoreApplication::translate("MainWindow", "ctg", nullptr));
        tg_button->setText(QCoreApplication::translate("MainWindow", "tg", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "x_val", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
