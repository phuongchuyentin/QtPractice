#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include <QObject>
#include <QVector>
#include <product.h>

class ProductManager : public QObject
{
    Q_OBJECT
public:
    explicit ProductManager(QObject *parent = nullptr);

signals:

public slots:
    void addProduct(Product*);
private:
    QVector<Product*> m_Products;
};

#endif // PRODUCTMANAGER_H
