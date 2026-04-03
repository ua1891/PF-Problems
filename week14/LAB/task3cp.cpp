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
    string line;
    fstream file;
    char toFind;
    file.open(fileName + ".txt", ios::in);
    getline(file, line);
   
    
    toFind = line[0];
    ASC = toFind;
    while (!file.eof())
    {
        getline(file, line);
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i]=='S')
            {
                line[i]='s';
            }
            
            int asc=line[i];
          if(line[i]==toFind||asc==32+ASC)
            {
                count++;
            }
        }
    }

    file.close();
    cout<<count;
}