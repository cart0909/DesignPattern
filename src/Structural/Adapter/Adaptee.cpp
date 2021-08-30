#include <DesignPattern/Structural/Adapter/Adaptee.h>

namespace dp {
namespace Adapter {

std::string Adaptee::specificRequest() const
{
    return "Adaptee::specificRequest()";
}

}
}