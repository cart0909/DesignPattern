#include "Product.h"
#include <iostream>

namespace dp {
namespace AbstractFactory {

ProductA::ProductA()
{
    std::cout << "ProductA Consturctor" << std::endl;
}

ProductB::ProductB()
{
    std::cout << "ProductB Constructor" << std::endl;
}

}
}