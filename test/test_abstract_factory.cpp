#include <gtest/gtest.h>
#include <DesignPattern/Creational/AbstractFactory/IFactory.h>

TEST(AbstractFactoryTest, example)
{
    auto factory = dp::AbstractFactory::makeFactory();
    auto product_a = factory->createProductA();
    auto product_b = factory->createProductB();
    EXPECT_NE(factory, nullptr);
    EXPECT_NE(product_a, nullptr);
    EXPECT_NE(product_b, nullptr);
}