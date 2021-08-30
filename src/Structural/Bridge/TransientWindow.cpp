#include <DesignPattern/Structural/Bridge/TransientWindow.h>

namespace dp {
namespace Bridge {

TransientWindow::TransientWindow()
    : Window() {}

void TransientWindow::drawCloseBox()
{
    drawRect();
}

}
}