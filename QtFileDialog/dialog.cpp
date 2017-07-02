#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_released()
{
    // Nho la dung hai dau cham phay
    // giua hai kieu file : "Executable (*.exe);;Text file (*.txt)"

    QString s = QFileDialog::getOpenFileName(this, "Open File", QString(),
                   "Executable (*.exe);;Text file (*.txt);; All file (*.*)");
    ui->lineEdit->setText(s);
}
