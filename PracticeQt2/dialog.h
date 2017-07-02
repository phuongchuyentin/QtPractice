#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class QListWidgetItem;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
