#pragma once
#include <DesignPattern/Structural/Bridge/Window.h>

namespace dp {
namespace Bridge {

class IconWindow : public Window
{
public:
    IconWindow();
    void drawBorder();
};

}
}