#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(doSomething()));
}

void Dialog::doSomething(){
    ui->pushButton->setText("Clicked");
}

Dialog::~Dialog()
{
    delete ui;
}
