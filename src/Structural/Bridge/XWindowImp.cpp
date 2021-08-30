#include "XWindowImp.h"
#include <iostream>

namespace dp {
namespace Bridge {

void XWindowImp::devDrawText() {
    std::cout << "XWindowImp::devDrawText()" << std::endl;
}

void XWindowImp::devDrawLine(const std::string& line) {
    std::cout << "XWindowImp::devDrawLine(): " << line << std::endl;
}

}
}