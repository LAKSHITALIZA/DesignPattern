#include <iostream>
#include "file.h"
#include "folder.h"
using namespace std;

int main()
{
    cout << "----------------Directory----------------" << endl;
    file* first = new file("Lakshita");
    file* second = new file("Pious");
    IDirectory* root = new folder("root");
    folder* firstfolder = new folder("FirstFolder");
    folder* secondfolder = new folder("Second folder");
    root->Add(first);
    root->Add(second);
    root->Add(firstfolder); 
    secondfolder->Add(second);
    firstfolder->Add(secondfolder);
    root->Display();
    cout << endl;
    firstfolder->Display();
    cout << endl;
    return 0;
}