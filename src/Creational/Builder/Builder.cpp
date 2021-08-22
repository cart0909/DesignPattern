#include <DesignPattern/Creational/Builder/Builder.h>

namespace dp {
namespace Builder {

void SortedDictionaryBuilder::insert(int key, int value)
{
    sortedDict[key] = value;
}

SortedDictionary SortedDictionaryBuilder::getResult() const
{
    return sortedDict;
}

void DictionaryBuilder::insert(int key, int value)
{
    dict[key] = value;
}

Dictionary DictionaryBuilder::getResult() const
{
    return dict;
}

}
}