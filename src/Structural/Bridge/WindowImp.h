#pragma once
#include <string>

namespace dp {
namespace Bridge {

class WindowImp {
public:
    virtual ~WindowImp() = default;
    virtual void devDrawText() = 0;
    virtual void devDrawLine(const std::string& line) = 0;
};

}
}