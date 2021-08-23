#include <gtest/gtest.h>
#include <DesignPattern/Creational/Singleton/Singleton.h>

namespace dp
{
namespace Singleton
{

TEST(SingletonTest, firstInit) {
    EXPECT_NE(Singleton::instance(), nullptr);
    EXPECT_EQ(Singleton::instance()->mySetting, 0);
    Singleton::instance()->mySetting = -1;
}

TEST(SingletonTest, secondCheck) {
    EXPECT_EQ(Singleton::instance()->mySetting, -1);
}

} 
}