#ifndef IT230_HASHTABLE_H
#define IT230_HASHTABLE_H

#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

template<typename TKey, typename TValue>
class Hashtable
{
private:
    size_t getHashIndex(const TKey key) const;
};


#endif //IT230_HASHTABLE_H
