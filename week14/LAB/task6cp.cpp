#include <iostream>
#include <fstream>
using namespace std;
void  countlines(string fileName);

main()
{

    string name = "task6";
    countlines(name);
}
void  countlines(string fileName)
{
    int count = 0;
    string line;
    fstream file;
    char toFind;
    file.open(fileName + ".txt", ios::in);
    getline(file, line);
    toFind = line[0];
    while (getline(file, line))
    {
        if (line[0]=='F')
        {
            line[0]='f';
        }
        
        if (line[0] != toFind)
        {
            count++;
        }
    }

    file.close();
    cout << count;
}