#include <iostream>
#include <fstream>
using namespace std;

const int total = 2;

void getStudentDetails(string names[total], int ages[total], float matricMarks[total], float fscMarks[total], float ecatMarks[total], int size, int count);
void saveToFile(string names[total], int ages[total], float matricMarks[total], float fscMarks[total], float ecatMarks[total], int count);
void readFromFile(string fileName);

main()
{
    string name[total];
    int age[total];
    float matric[total], fsc[total], ecat[total];
    int count = 0, size = 1;
    string check = "yes";

    while ((check == "yes" || check == "Yes") && count < total)
    {
        cout << "Enter the name of student " << count + 1 << ": ";
        cin >> name[count];
        cout << "Enter student's age: ";
        cin >> age[count];
        cout << "Enter student's matric marks: ";
        cin >> matric[count];
        cout << "Enter student's fsc marks: ";
        cin >> fsc[count];
        cout << "Enter student's ecat marks: ";
        cin >> ecat[count];

        count++;

        if (count < total)
        {
            cout << "Enter 'no' to stop or 'yes' to continue: ";
            cin >> check;
        }
    }

    getStudentDetails(name, age, matric, fsc, ecat, size, count);
    readFromFile("write.txt");

}

void getStudentDetails(string names[total], int ages[total], float matricMarks[total], float fscMarks[total], float ecatMarks[total], int size, int count)
{
    string name2[total];
    int age2[total];
    float matric2[total], fsc2[total], ecatMarks2[total];

    for (int i = 0; i < count; i++)
    {
        name2[i] = names[i];
        age2[i] = ages[i];
        matric2[i] = matricMarks[i];
        fsc2[i] = fscMarks[i];
        ecatMarks2[i] = ecatMarks[i];
    }

    saveToFile(name2, age2, matric2, fsc2, ecatMarks2, count);
}

void saveToFile(string names[total], int ages[total], float matricMarks[total], float fscMarks[total], float ecatMarks[total], int count)
{
    fstream text;
    text.open("write.txt", ios::out);

    for (int i = 0; i < count; i++)
    {
        text << "Name: " << names[i] << "\n";
        text << "Age: " << ages[i] << "\n";
        text << "Matric Marks: " << matricMarks[i] << "\n";
        text << "FSC Marks: " << fscMarks[i] << "\n";
        text << "ECAT Marks: " << ecatMarks[i] << "\n";
        text << "-------------------------\n";
    }

    text.close();
}

void readFromFile(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}
