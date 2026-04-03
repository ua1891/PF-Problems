#include <iostream>
#include <fstream>
using namespace std;
void arra1();
void arry2();
int Identity();
void resu();
int arr[10][10];
int Rows, column;
int F = 0;
main()
{
    int result;
    arra1();
    result = Identity();
    if (result == F)
    {
        cout << "matrix is diagonal\n";
    }
    else
    {
        cout << "Matrix is not diagonal\n";
    }
    resu();
}
void arra1()
{
    cout << "Enter the total number of Rows and column of matrix:" << endl;
    cin >> Rows >> column;
    F = Rows + column;
    cout << "Enter the values of matrix:" << endl;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter value at" << i << "and" << j << ":";
            cin >> arr[i][j];
        }
    }
}
int Identity()
{
    int check = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j && arr[i][j] == 1)
            {
                check++;
            }
            if (i != j && arr[i][j] == 0)
            {
                check++;
            }
        }
        cout << endl;
    }
    return check;
}
void resu()
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}