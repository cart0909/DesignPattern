#include <DesignPattern/Structural/Bridge/Window.h>
#include "XWindowImp.h"

namespace dp {
namespace Bridge {

Window::Window()
    : imp(std::make_unique<XWindowImp>()) {}

// must in here
// pimpl
Window::~Window() = default;

void Window::drawText() {
    imp->devDrawText();
}

void Window::drawRect() {
    imp->devDrawLine("up");
    imp->devDrawLine("down");
    imp->devDrawLine("left");
    imp->devDrawLine("right");
}

}
}