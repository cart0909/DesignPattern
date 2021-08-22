#pragma once
#include <DesignPattern/Creational/AbstractFactory/IProduct.h>

namespace dp {
namespace AbstractFactory {

class ProductA : public IProductA
{
public:
    ProductA();
    using Ptr = std::shared_ptr<ProductA>;
};

class ProductB : public IProductB
{
public:
    ProductB();
    using Ptr = std::shared_ptr<ProductB>;
};


}
}