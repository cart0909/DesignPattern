#pragma once
#include <memory>

namespace dp {
namespace Bridge {

class WindowImp;

class Window
{
public:
    Window();
    virtual ~Window();

    void drawText();
    void drawRect();
    
private:
    std::unique_ptr<WindowImp> imp;
};

}
}