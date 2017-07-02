#include "productmanager.h"
#include <QDebug>

ProductManager::ProductManager(QObject *parent) : QObject(parent)
{

}

void ProductManager::addProduct(Product* product){
    m_Products.push_back(product);
    qDebug() << "New product added";

}
