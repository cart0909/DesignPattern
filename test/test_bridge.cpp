#include <gtest/gtest.h>
#include <DesignPattern/Structural/Bridge/IconWindow.h>
#include <DesignPattern/Structural/Bridge/TransientWindow.h>

namespace dp {
namespace Bridge {

TEST(BridgeTest, Window) {
    Window window;
    window.drawRect();
    window.drawText();
}

TEST(BridgeTest, IconWindow) {
    IconWindow window;
    window.drawBorder();
}

TEST(BridgeTest, TransientWindow) {
    TransientWindow window;
    window.drawCloseBox();
}

}
}