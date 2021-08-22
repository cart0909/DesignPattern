#pragma once
#include <DesignPattern/Creational/AbstractFactory/IFactory.h>

namespace dp {
namespace AbstractFactory {

class Factory : public IFactory
{
public:
    Factory();
    IProductA::Ptr createProductA() override;
    IProductB::Ptr createProductB() override;
};

}
}