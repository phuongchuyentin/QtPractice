#include <QCoreApplication>
#include "product.h"
#include "productmanager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Product* product = new Product();
    ProductManager* mgr = new ProductManager();
    QObject::connect(product, SIGNAL(newProduct(Product*)), mgr, SLOT(addProduct(Product*)));
    product->input();

    return a.exec();
}
