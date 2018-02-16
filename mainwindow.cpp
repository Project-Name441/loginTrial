#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->invalidPassword->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    /*if(username != "test" || password != "test")
    {
        ui->invalidPasssword->show();
    }*/

    if(username ==  "test" && password == "test") {
        //QMessageBox::information(this, "Login", "Username and password is correct");
        //hide();
        close();
        SecDialog = new secDialog(this);
        SecDialog->show();
    }
    else {
        ui->invalidPassword->show();
    }

}
