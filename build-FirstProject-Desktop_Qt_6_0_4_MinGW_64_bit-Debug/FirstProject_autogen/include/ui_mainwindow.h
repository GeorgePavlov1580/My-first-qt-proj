/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *txt_btn;
    QLineEdit *txt_entry;
    QLabel *welcome_lbl;
    QLabel *chng_lbl;
    QLabel *link_lbl;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(800, 500));
        MainWindow->setWindowTitle(QString::fromUtf8("Text Reader V1"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txt_btn = new QPushButton(centralwidget);
        txt_btn->setObjectName(QString::fromUtf8("txt_btn"));
        txt_btn->setGeometry(QRect(50, 310, 691, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        txt_btn->setFont(font);
        txt_btn->setText(QString::fromUtf8("Apply"));
        txt_btn->setFlat(false);
        txt_entry = new QLineEdit(centralwidget);
        txt_entry->setObjectName(QString::fromUtf8("txt_entry"));
        txt_entry->setGeometry(QRect(50, 240, 691, 41));
        welcome_lbl = new QLabel(centralwidget);
        welcome_lbl->setObjectName(QString::fromUtf8("welcome_lbl"));
        welcome_lbl->setGeometry(QRect(50, 40, 691, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(25);
        font1.setBold(true);
        welcome_lbl->setFont(font1);
        welcome_lbl->setTextFormat(Qt::RichText);
        welcome_lbl->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        chng_lbl = new QLabel(centralwidget);
        chng_lbl->setObjectName(QString::fromUtf8("chng_lbl"));
        chng_lbl->setGeometry(QRect(50, 150, 681, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cascadia Mono SemiLight"));
        font2.setPointSize(14);
        font2.setBold(false);
        chng_lbl->setFont(font2);
        chng_lbl->setTextFormat(Qt::PlainText);
        chng_lbl->setAlignment(Qt::AlignCenter);
        link_lbl = new QLabel(centralwidget);
        link_lbl->setObjectName(QString::fromUtf8("link_lbl"));
        link_lbl->setGeometry(QRect(50, 430, 691, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(12);
        link_lbl->setFont(font3);
        link_lbl->setTextFormat(Qt::RichText);
        link_lbl->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        welcome_lbl->setText(QCoreApplication::translate("MainWindow", "Welcome to the text reader V1!", nullptr));
        chng_lbl->setText(QCoreApplication::translate("MainWindow", "Enter some text down below!", nullptr));
        link_lbl->setText(QCoreApplication::translate("MainWindow", "Change text first to reveal the link!", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
