#include "dialog.h"
#include "ui_dialog.h"
#include <QListWidgetItem>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Item 1");
    ui->listWidget->addItem("Item 2");
    ui->listWidget->addItem("Item 3");
    ui->listWidget->addItem("Item 4");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->label->setText(item->text());
}
