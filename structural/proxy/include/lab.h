#pragma once
#include <iostream>
#include "proxy.h"
using namespace std;

class lab : public proxy 
{
    public:
    void Open();
    void Close();
};