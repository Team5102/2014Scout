#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    //Detects if the change in value is > 1?
    if(arg1 > 0)
    {
        //Incriments the "Attempted" value by 1, if the "Goals" value is updated
        ui->spinBox->setValue(ui->spinBox->value() +1);
    }
}
