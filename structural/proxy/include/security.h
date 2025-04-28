#pragma once
#include "proxy.h"
#include "lab.h"

class security : public proxy
{
    private:
    lab* labobj;
    string Password;
    public:
    security(lab* ob);
    void Open();
    void Close();
    bool authenticate(string name);
};