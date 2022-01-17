#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}


// моя ошибка, у тебя вообще этой функции быть не должно
void MainWindow::on_pushButton_clicked(){
    // this does nothing, but if i remove it programm doesn't compile
}

void MainWindow::on_txt_btn_clicked(){
    ui -> chng_lbl -> setText(ui -> txt_entry -> text());
    // ui -> id лэйбла, на котором меняяется текст -> функция изменения текста на лэйбле(ui -> id поля ввода -> текст на том самом поле)
    // лэйбел с киберрсылкой (вообще 100% не обязательно)
    ui -> link_lbl -> setText("<a href=\"https://github.com/GeorgePavlov1580/My-first-qt-proj/\">My GitHub</a>");
    ui -> link_lbl -> setTextFormat(Qt::RichText);
    ui -> link_lbl -> setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui -> link_lbl -> setOpenExternalLinks(true);
    // конец

}

