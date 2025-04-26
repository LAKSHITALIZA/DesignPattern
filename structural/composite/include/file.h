#pragma once
#include <string>
#include "IDirectory.h"
using namespace std;

class file : public IDirectory
{
private:
    string name;
public:
    file(string name);
    ~file();
    void Display(int indent = 0);
};

