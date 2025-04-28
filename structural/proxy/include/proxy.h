#pragma once
#include <iostream>
using namespace std;

class proxy
{
    public:
    virtual void Open() = 0;
    virtual void Close() = 0;
};