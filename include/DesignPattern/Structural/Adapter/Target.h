#pragma once
#include <memory>
#include <string>

namespace dp {
namespace Adapter {

class Target {
public:
    using Ptr = std::shared_ptr<Target>;
    virtual ~Target() = default;
    virtual std::string request() const = 0;
};

}
}