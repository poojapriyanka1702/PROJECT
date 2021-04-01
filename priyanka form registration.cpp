#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QValidator>
#include <QButtonGroup>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_label_linkActivated(const QString &link)
{
   ui->label->setText("Hello");
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::information(this,"Poojapriyanka V.I","212218108042 SUCCESSFULLY COMPLETED");
}

void MainWindow::on_lineEdit_8_textChanged(const QString &link)
{
    ui->lineEdit->setValidator(new QIntValidator(50,100,ui->lineEdit));

}


void MainWindow::on_radioButton_clicked()
{
    QButtonGroup group;
    QList<QRadioButton *>allButtons=ui->label->findChildren<QRadioButton *>();
    qDebug() <<allButtons.size();
    for(int i=0;i<allButtons.size();++i)
    {
        group.addButton(allButtons[i],i);
    }
    qDebug() <<group.checkedId();
    qDebug() <<group.checkedButton();
}
