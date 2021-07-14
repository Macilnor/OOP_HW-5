#pragma once
#include "Hand.h"
#include <string>

using namespace std;

class GenericPlayer :
    public Hand
{
private:
    string m_name;
public:
    GenericPlayer(const string& n);
    virtual bool IsHitting() const = 0;
    bool IsBoosted() const;
    void Bust() const;
};

