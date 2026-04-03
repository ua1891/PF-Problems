#include <iostream>
#include <fstream>
#include<string>
using namespace std;
void readInteger();
void readDecimal();
void readCh();
main()
{
    readInteger();
    readDecimal();
    readCh();
}
void readInteger(){
     fstream file;
    string name;
    file.open("integer.txt", ios::in);
        getline(file, name);
    file.close();
    int b=stoi(name);
    cout<<"The integr in the file is:"<<b<<"\n";
}
void readDecimal(){
     fstream file;
    string name;
    file.open("decimal.txt", ios::in);
        getline(file, name);
    file.close();
     float A=stof(name);
    cout<<"The decimal in the file is:"<<A<<"\n";
}
void readCh(){
     fstream file;
    string name;
    file.open("character.txt", ios::in);
        getline(file, name);
    file.close();

    cout<<"The character in the file is:"<<name<<"\n";
}