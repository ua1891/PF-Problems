#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 3;
char A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
void take_A();
void take_B();
void printA();
void printB();
void addtion(char a[SIZE][SIZE], char b[SIZE][SIZE]);
void subtraction(char a[SIZE][SIZE], char b[SIZE][SIZE]);
void multiplication(char a[SIZE][SIZE], char b[SIZE][SIZE]);
void calculation(string op);
void printC();
void isIdentity();
void isDiagonal();
void final_check(string op);

main()
{
    string opreator;
    string input;
    cout << "Enter the value of matrix A";
    take_A();
    cout << "Enter the value of matrix B" << endl;
    take_B();
    cin >> input;
    if (input == " print(A)")
    {
        printA();
    }
    if (input == " print(B)")
    {
        printB();
    }
    cout << "Enter the opretation which you want like (C=A-B):\n";
    cin >> opreator;
    calculation(opreator);
    cout << "Enter Y to print matrix C:";
    char matrixC;
    cin >> matrixC;
    if (matrixC == 'Y')
    {
        printC();
    }
    cout << "Enter the opreation which you wanna to check:";
    string opreator;
    cin >> opreator;
    final_check(opreator);
}
void take_A()
{
    char a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A[i][j] = a[i][j];
        }
        cout << endl;
    }
}
void printA()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
void take_B()
{
    char b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            B[i][j] = b[i][j];
        }
        cout << endl;
    }
}
void printB()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}
void calculation(string op)
{

    if (op == "C=A+B")
    {
        addtion(A, B);
    }
    if (op == "C=A-B")
    {
        subtraction(A, B);
    }
    if (op == "C=A*B")
    {
        multiplication(A, B);
    }
}
void addtion(char a[SIZE][SIZE], char b[SIZE][SIZE])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = a[i][j] + b[i][j];
        }
        cout << endl;
    }
}
void subtraction(char a[SIZE][SIZE], char b[SIZE][SIZE])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = a[i][j] - b[i][j];
        }
        cout << endl;
    }
}
void multiplication(char a[SIZE][SIZE], char b[SIZE][SIZE])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = a[i][j] * b[i][j];
        }
        cout << endl;
    }
}
void printC()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
void isIdentity()
{
    int check = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            if (i == j && C[i][j] == 1)
            {
                check++;
            }
            if (i != j && C[i][j] == 0)
            {
                check++;
            }
        }
        cout << endl;
    }
    if (check == 9)
    {
        cout << "Matrix is identity matrix.";
    }
}
void digonal()
{
    int check = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && C[i][j] != 0)
            {
                check++;
            }
            if (i != j && C[i][j] == 0)
            {
                check++;
            }
        }
        cout << endl;
    }
    if (check == 9)
    {
        cout << "Matrix is diagonal matrix.";
    }
}
void final_check(string op)
{
    if (op == "isIdentity(A)")
    {
        isIdentity();
    }
    if (op == "isDiagonal(B)")
    {
        isDiagonal();
    }
}