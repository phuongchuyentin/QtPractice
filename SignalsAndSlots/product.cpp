#include "product.h"

Product::Product(QObject *parent) : QObject(parent)
{

}

void Product::input(){
    emit newProduct(this);
}
