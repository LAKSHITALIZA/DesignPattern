#include "security.h"
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
#define MAX_ATTEMPT 3

security::security(lab* ob)
:labobj(ob)
{

}

void security::Open()
{
    int attempt = MAX_ATTEMPT;
    while(attempt > 0)
    {
        cout << "Enter Password: (Attempts left)" << attempt << endl;
        cin >> Password;
        if(authenticate(Password))
        {
            labobj->Open();
            this_thread::sleep_for(chrono::seconds(6));
            return;
        }
        else
        {
            cout << "Entery Declined! Wrong Password --- Try again" << endl;
            --attempt;
        }
    }
    cout << "Entered Wrong Password for attempts -> " << MAX_ATTEMPT << " Access Denied" << endl;
}

void security::Close()
{
    labobj->Close();
}

bool security::authenticate(string name)
{
    if(name == "Lakshita")
    {
        return true;
    }
    else
        return false;
}