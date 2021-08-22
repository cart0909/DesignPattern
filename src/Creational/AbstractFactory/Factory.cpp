#include "Factory.h"
#include "Product.h"
#include <iostream>

namespace dp {
namespace AbstractFactory {

Factory::Factory()
{
    std::cout << "Factory Constructor" << std::endl;
}

IProductA::Ptr Factory::createProductA()
{
    return std::make_shared<ProductA>();
}

IProductB::Ptr Factory::createProductB()
{
    return std::make_shared<ProductB>();
}

std::unique_ptr<IFactory> makeFactory()
{
    return std::make_unique<Factory>();
}

}
}