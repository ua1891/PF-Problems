 #include <iostream>
#include <fstream>
using namespace std;
void arra1();
void arry2();
void multiplication();
int array1[2][2];
int array2[2][2];
int multiplication1[2][2];
main()
{

    cout << "Enter the values of matrix one of 2x2";
    arra1();
    cout << "Enter the values of matrix two of 2x2";
    arry2();
    cout << "The multiplication is:";
    multiplication();
}
void arra1()
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array1[i][j];
        }
    }
}
void arry2()
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array2[i][j];
        }
    }
}
void multiplication()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            multiplication1[i][j] = array1[i][j] * array2[i][j];
        }
        cout << endl;
    }
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<multiplication1[i][j]<<" ";
        }
        cout << endl;
    }
}
