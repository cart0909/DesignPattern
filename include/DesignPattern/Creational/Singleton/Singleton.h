#pragma once
#include <memory>

namespace dp
{
namespace Singleton
{

class Singleton
{
public:
    static Singleton* instance();

    int mySetting = 0;

protected:
    Singleton() = default;
private:
    static std::unique_ptr<Singleton> _instance;
};

}
}