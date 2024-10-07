#include "MyHashtable.h"

using namespace Hashtable;

template<typename TKey, typename TValue>
size_t MyHashtable<TKey, TValue>::getHashIndex(const TKey& key) const
{
    // This method is provided for you to get the hash index of a key
    // TODO: Make sure you define DEFAULT_CAPACITY in your header and initialize it
    return std::hash<TKey>{}(key) % DEFAULT_CAPACITY;
}