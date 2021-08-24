#include <DesignPattern/Structural/Adapter/Adapter.h>
#include <gtest/gtest.h>
#include <iostream>

namespace dp {
namespace Adapter {

TEST(AdapterTest, ClassAdapter)
{
    Target::Ptr target = std::make_unique<ClassAdapter>();
    std::string result = target->request();
    std::cout << result << std::endl;
    EXPECT_EQ(result, "Adaptee::specificRequest()");
}

TEST(AdapterTest, ObjectAdapter)
{
    Target::Ptr target = std::make_unique<ObjectAdapter>();
    std::string result = target->request();
    std::cout << result << std::endl;
    EXPECT_EQ(result, "Adaptee::specificRequest()");
}

}
}