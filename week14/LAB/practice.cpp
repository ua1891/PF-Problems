#include <iostream>
#include <fstream>
using namespace std;
int calculateFrequency(string fileName);
int ASC;
main()
{

    string name = "task3";
    calculateFrequency(name);
}
int calculateFrequency(string fileName)
{
    int count=0;
    fstream file;
    char ch;
    char to=ch;

    file.open(fileName+".txt",ios::in);
    while (!file.eof())
    {
    file<<ch;
    if (ch=='S')
    {
        ch='s';
    }
    if (ch=to)
    {
       count++;
    }
    cout<<count;
}
}