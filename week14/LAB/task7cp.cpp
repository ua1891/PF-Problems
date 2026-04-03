#include <iostream>
#include <fstream>
using namespace std;
void countString(string name);

main()
{
    string filename = "task7";
    countString(filename);
}
void countString(string name)
{
    string word;
    fstream file;
    file.open(name + ".txt", ios::in);
    while (!(file.eof()))
    {
        file >> word;
        if (word.length() == 3)
        {
            cout << word<<" ";
        }
    }
}