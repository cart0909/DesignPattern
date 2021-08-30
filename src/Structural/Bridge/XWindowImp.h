#pragma once
#include "WindowImp.h"

namespace dp {
namespace Bridge {

class XWindowImp : public WindowImp
{
public:
    void devDrawText();
    void devDrawLine(const std::string& line);
};

}
}