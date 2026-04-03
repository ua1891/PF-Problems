#include <iostream>
#include <fstream>
using namespace std;
void printname();
main()
{
    printname();
}

void printname()
{

    fstream file;
    string name;
    file.open("name.txt", ios::in);
        getline(file, name);
    file.close();
    cout<<"The name in the file is:"<<name;
}