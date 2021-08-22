#include <vector>
#include <gtest/gtest.h>
#include <DesignPattern/Creational/Builder/Director.h>
#include <DesignPattern/Creational/Builder/Builder.h>

namespace dp {
namespace Builder {

TEST(BuilderTest, SortedDictionaryBuilder)
{
    Director director;
    SortedDictionaryBuilder::Ptr builder = std::make_shared<SortedDictionaryBuilder>();
    director.construct(builder);
    SortedDictionary dict = builder->getResult();

    std::vector<std::pair<int, int>> expected_kv = {
        std::make_pair(-3, 2),
        std::make_pair(0, 1),
        std::make_pair(30, 0),
        std::make_pair(87, 100)
    };

    int idx = 0;
    for(auto& it : dict) {
        EXPECT_EQ(it.first, expected_kv[idx].first);
        EXPECT_EQ(it.second, expected_kv[idx].second);
        ++idx;
    }
}

TEST(BuilderTest, DictionaryBuilder)
{
    Director director;
    DictionaryBuilder::Ptr builder = std::make_shared<DictionaryBuilder>();
    director.construct(builder);
    Dictionary dict = builder->getResult();

    std::vector<std::pair<int, int>> expected_kv = {
        std::make_pair(87, 100),
        std::make_pair(-3, 2),
        std::make_pair(0, 1),
        std::make_pair(30, 0)
    };

    int idx = 0;
    for(auto& it : dict) {
        EXPECT_EQ(it.first, expected_kv[idx].first);
        EXPECT_EQ(it.second, expected_kv[idx].second);
        ++idx;
    }
}

}
}