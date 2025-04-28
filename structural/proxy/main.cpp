#include <iostream>
#include "lab.h"
#include "security.h"
using namespace std;

int main()
{
    proxy* doorop = new security(new lab()); 
    doorop->Open();
    doorop->Close();
    return 0;
}
