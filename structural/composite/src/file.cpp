#include <iostream>
#include "file.h"
using namespace std;

file::file(string str)
{
    name = str;
}

file::~file()
{
}

void file::Display(int indent)
{
    printIndent(indent);              // <-- should compile
    cout << "- " << name << '\n';
}
