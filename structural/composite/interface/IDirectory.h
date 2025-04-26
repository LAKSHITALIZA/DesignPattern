#pragma once
#include<iostream>
class IDirectory
{
    public:
    IDirectory() {}
    virtual void Add(IDirectory*) {}
    virtual void Display(int indent = 0) = 0;
    virtual ~IDirectory() {}
    protected:
    static void printIndent(int n) { while (n--) std::cout << ' '; }
};