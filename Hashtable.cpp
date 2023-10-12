#include "Hashtable.h"

using namespace std;

template<typename TKey, typename TValue>
size_t Hashtable<TKey, TValue>::getHashIndex(const TKey key) const
{
    return hash<TKey>{}(key) % DEFAULT_CAPACITY;//TODO make sure you define DEFAULT_CAPACITY in your header and initialize it
}