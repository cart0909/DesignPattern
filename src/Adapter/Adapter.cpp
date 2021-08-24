#include <DesignPattern/Structural/Adapter/Adapter.h>

namespace dp {
namespace Adapter {

std::string ClassAdapter::request() const
{
    return specificRequest();
}

ObjectAdapter::ObjectAdapter()
    : adaptee(std::make_unique<Adaptee>())
{}

std::string ObjectAdapter::request() const
{
    return adaptee->specificRequest();
}

}
}