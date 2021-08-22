#include <DesignPattern/Creational/Builder/Director.h>

namespace dp {
namespace Builder {

void Director::construct(Builder::Ptr builder)
{
    builder->insert(30, 0);
    builder->insert(0, 1);
    builder->insert(-3, 2);
    builder->insert(87, 100);
}

}
}