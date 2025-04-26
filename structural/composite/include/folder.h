#pragma once
#include <string>
#include<list>
#include "IDirectory.h"
using namespace std;

class folder : public IDirectory
{
private:
    list<IDirectory*> directory;
    string foldername;
public:
    folder(string name);
    ~folder();
    void Display(int indent = 0);
    void Add(IDirectory* dir);
};
