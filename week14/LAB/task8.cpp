#include <iostream>
#include <fstream>
using namespace std;
void takeInput();
void readData();
string getField(string record, int field);
int menu();
string name[20];
string pass[20];
string role[20];

main()
{
    int op;
    while (true)
    {
        op = menu();
        if (op == 1)
        {
            takeInput();
        }
        else if (op == 2)
        {
           readData();
        }
        else if (op == 3)
        {
            cout << "Thanks for using options" << endl;
        }
    }
}
int menu()
{
    int choice;
    cout << "\n--- Welcome to the Business Application ---\n";
    cout << "1. Sign Up\n";
    cout << "2. Sign In\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
void takeInput()
{

    string username, password, role;

    cout << "\n--- Sign Up ---\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    cout << "Enter role (admin/user): ";
    cin >> role;
    string line = username + "," + password + "," + role;

    fstream file;
    file.open("data2.txt", ios::app);
    file << line;
    file.close();
}
string getField(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void readData()
{
    string record;
    fstream data;
    string N,p;

    int count = 0;
    data.open("data2.txt", ios::in);
    while (!(data.eof()))
    {
        getline(data, record);
        name[count] = getField(record, 1);
        pass[count] = getField(record, 2);
        role[count] = getField(record, 3);
    }
    cout<<"Enter name and passwrod:";
    cin>>N>>p;
    for (int i = 0; i < 20; i++)
    {
        if (name[i]==N&&pass[i]==p)
        {
            cout<<"Welcome"<<role[i];
        }
        
    }
    

}