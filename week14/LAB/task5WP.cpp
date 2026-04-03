#include <iostream>
#include <fstream>
using namespace std;
void printwhole();

main()
{

    printwhole();
}
void printwhole()
{
    string line;
    fstream file;
    file.open("character.txt", ios::in);
    while (!file.eof())
    {

        getline(file,line);
        cout << line << "\n";
    }
}
