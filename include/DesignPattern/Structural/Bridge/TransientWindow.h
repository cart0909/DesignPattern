#pragma once
#include <DesignPattern/Structural/Bridge/Window.h>

namespace dp {
namespace Bridge {

class TransientWindow : public Window
{
public:
    TransientWindow();
    void drawCloseBox();
};

}
}