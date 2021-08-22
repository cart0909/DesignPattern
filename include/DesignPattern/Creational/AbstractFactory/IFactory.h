#pragma once
#include <memory>
#include <DesignPattern/Creational/AbstractFactory/IProduct.h>

namespace dp {
namespace AbstractFactory {

class IFactory
{
public:
    virtual ~IFactory() = default;
    virtual IProductA::Ptr createProductA() = 0;
    virtual IProductB::Ptr createProductB() = 0;
};

std::unique_ptr<IFactory> makeFactory();

}
}