#include "dialog.h"
#include "ui_dialog.h"
#include <QFile>
#include <QTextStream>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // no se doc file trong thu muc debug
    // Project -> run -> working directory
    QFile file("text.txt");
    if(!file.open(QIODevice::ReadOnly)){
        ui->label->setText("File error");
    }

    QTextStream textStream(&file);
    textStream.setCodec("UTF-8");
    // QTextStream dong vai tro thao tac text file cua ban
    QString s;
    s = textStream.readAll();
//    textStream.readAll();
    // read doc cac tu tiep theo cach nhau boi dau cach
    // readAll tra ve mot QString chua noi dung file do
    // readLine
    ui->label->setText(s);

}

Dialog::~Dialog()
{
    delete ui;
}
