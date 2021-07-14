#pragma once
#include "Pair.h"
#include <string>

using namespace std;

template <typename T>
class StringValuePair :
    public Pair<string, T>
{
public:
    StringValuePair(string s, T v);
};

template<typename T>
inline StringValuePair<T>::StringValuePair(string s, T v) : Pair<string, T>(s, v)
{
};
