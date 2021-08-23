#include <DesignPattern/Creational/Singleton/Singleton.h>

namespace dp
{
namespace Singleton
{
std::unique_ptr<Singleton> Singleton::_instance;

Singleton* Singleton::instance()
{
    if(_instance == nullptr) {
        _instance = std::unique_ptr<Singleton>(new Singleton()); // cannot use std::make_unique<Singleton>();
    }
    return _instance.get();
}

}
}