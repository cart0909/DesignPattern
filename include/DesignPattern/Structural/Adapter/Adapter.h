#pragma once
#include <DesignPattern/Structural/Adapter/Adaptee.h>
#include <DesignPattern/Structural/Adapter/Target.h>

namespace dp {
namespace Adapter {

class ClassAdapter : public Target, private Adaptee
{
public:
    std::string request() const override;
};

class ObjectAdapter : public Target
{
public:
    ObjectAdapter();
    std::string request() const override;
private:
    std::unique_ptr<Adaptee> adaptee;
};

}
}