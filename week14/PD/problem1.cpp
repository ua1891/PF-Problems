#include <iostream>
#include <fstream>
using namespace std;
void loadaSeatArangment();
int UserToInput();
int reserveseatR();
char reserveseatC();
void final(int R, char C);
void plan();
void storeInfile();
void NewPlanseat();

char array[13][6];
main()
{
    int op;
    while (true)
    {
        op = UserToInput();
        if (op == 1)
        {
            loadaSeatArangment();
        }
        if (op == 2)
        {
            int row = reserveseatR();
            char col = reserveseatC();
            final(row, col);
        }
        if (op == 3)
        {
            plan();
        }
        if (op == 4)
        {
            storeInfile();
        }
        if (op == 5)
        {
            NewPlanseat();
        }
    }
}
int UserToInput()
{
    int choice;
    cout << "\n--- Airline Reservation System Menu ---\n";
    cout << "1. Load reserved seats from file\n";
    cout << "2. Reserve a seat\n";
    cout << "3. Print seating plan\n";
    cout << "4. Store reserved seats in file\n";
    cout << "5. New plane (reset all seats)\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
void loadaSeatArangment()
{

    fstream file;
    file.open("1.txt", ios::in);
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            file >> array[i][j];
            cout << " ";
        }
        cout << endl;
    }
    file.close();
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
int reserveseatR()
{
    int row;
    cout << "Enter the row(1-13):";
    cin >> row;
    return row;
}
char reserveseatC()
{
    char column;
    cout << "Enter the column(A-F):";
    cin >> column;
    return column;
}
void final(int R, char C)
{
    R = R - 1;
   int col = C - 'A';  // Converts 'A'-'F' to 0–5;
    if (array[R][col] == '*')
    {
        array[R][col] = 'X';
        cout << "Your seat is reserved.";
    }
    else
    {
        cout << "Sorry!!Already booked";
    }
}
void plan()
{

    cout << "Your new seating plan is:" << endl;
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
void storeInfile()
{

    fstream file;
    file.open("1.txt", ios::out);
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            file << array[i][j];
        }
        file<<endl;
    }
    file.close();
    cout<<"Your new data is stored successfully!";
}
void NewPlanseat()
{
    string check;
    cout << "Are you sure you wanna to reset all seat:";
    cin >> check;
    if (check == "yes")
    {
        fstream file;
        file.open("1.txt", ios::out);
        for (int i = 0; i < 13; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                array[i][j] = '*';
                file << array[i][j];
            }
            cout << endl;
        }
        file.close();
    }
    else
    {
        cout << "Your data is remain unchanged.";
    }
}
