#pragma once
#include <memory>
#include <DesignPattern/Creational/Builder/Builder.h>

namespace dp {
namespace Builder {

class Director
{
public:
    using Ptr = std::shared_ptr<Director>;
    void construct(Builder::Ptr builder);
};

}
}