#include <DesignPattern/Structural/Bridge/IconWindow.h>

namespace dp {
namespace Bridge {

IconWindow::IconWindow() : Window() {}

void IconWindow::drawBorder() {
    drawRect();
    drawText();
}

}
}