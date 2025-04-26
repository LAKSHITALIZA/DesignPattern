#include "folder.h"
#include <iostream>
using namespace std;


folder::folder(string name)
{
    foldername = name;
}

folder::~folder()
{
}

void folder::Display(int indent)
{
    printIndent(indent);
    cout << "+ " << foldername << '\n';
    for (const auto& c : directory)
        c->Display(indent + 2);
}

void folder::Add(IDirectory* dir)
{
    directory.push_back(dir);
}
