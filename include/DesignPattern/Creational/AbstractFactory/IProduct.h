#pragma once
#include <memory>

namespace dp {
namespace AbstractFactory {

class IProductA
{
public:
    using Ptr = std::shared_ptr<IProductA>;
    virtual ~IProductA() = default;
};

class IProductB
{
public:
    using Ptr = std::shared_ptr<IProductB>;
    virtual ~IProductB() = default;
};

}
}