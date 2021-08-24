#pragma once
#include <memory>
#include <string>

namespace dp {
namespace Adapter {

class Adaptee
{
public:
    virtual ~Adaptee() = default;
    std::string specificRequest() const;
};

}
}