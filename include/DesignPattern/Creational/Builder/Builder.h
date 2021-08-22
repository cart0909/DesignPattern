#pragma once
#include <memory>
#include <DesignPattern/Creational/Builder/Product.h>

namespace dp {
namespace Builder {

class Builder {
public:
    using Ptr = std::shared_ptr<Builder>;
    virtual void insert(int key, int value) = 0; /// buildPart
};

class SortedDictionaryBuilder : public Builder {
public:
    using Ptr = std::shared_ptr<SortedDictionaryBuilder>;
    void insert(int key, int value) override;
    SortedDictionary getResult() const;
private:
    SortedDictionary sortedDict;
};

class DictionaryBuilder : public Builder {
public:
    using Ptr = std::shared_ptr<DictionaryBuilder>;
    void insert(int key, int value) override;
    Dictionary getResult() const;
private:
    Dictionary dict;
};

}
}