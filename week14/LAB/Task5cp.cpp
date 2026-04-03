#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int count);
void readform5();
void nextfile(string na, int adnum, float pe);
void studentform5();
int size = 10;


main()
{
    int count = 0;
    string name[size];
    int addnumber[size];
    float percentage[size];
    string check = "y";
    while (check == "y" && count < size)
    {
        cout << "Enter the name of  student:";
        cin >> name[count];
        cout << "Enter the add number:";
        cin >> addnumber[count];
        cout << "Enter the percentage:";
        cin >> percentage[count];
        count++;
        cout << "If coninue press y";
        cin >> check;
    }
    getStudentDetails(name, addnumber, percentage, size, count);
    readform5();
     studentform5();
}
void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int coun)
{

    fstream file;
    file.open("5.txt", ios::out);
    for (int i = 0; i < coun; i++)
    {

        if (percentages[i] > 70)
        {
            file << names[i] << "\n";
            file << adNumbers[i] << "\n";
            file << percentages[i] << "\n";
        }
    }
    file.close();
}
void readform5()
{
    string name;
    int adNumber;
    float percentage;
    string N[2];
    int ad[2];
    float per[2];
    fstream file;
    file.open("5.txt", ios::in);
    while (file >> name >> adNumber >> percentage)
    {

        nextfile(name, adNumber, percentage);
    }
    file.close();
}
void nextfile(string na, int adnum, float pe)
{
    fstream file;
    file.open("task5.txt", ios::out);
    file << "name;" << na << "\n";
    file << "adnumber:" << adnum << "\n";
    file << "percentage:" << pe << "\n";
    file << "------------------";
    file.close();
}
void studentform5()
{
    string line;
    fstream nw;
    nw.open("task5.txt", ios::in);
    while (!nw.eof())
    {
        getline(nw, line);
        cout << line << endl;
    }
}
