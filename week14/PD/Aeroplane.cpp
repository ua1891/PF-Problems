#include <iostream>
using namespace std;

const int SIZE = 3;
int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

void takeMatrix(int matrix[SIZE][SIZE], char name);
void printMatrix(int matrix[SIZE][SIZE], char name);
void add(int a[SIZE][SIZE], int b[SIZE][SIZE]);
void subtract(int a[SIZE][SIZE], int b[SIZE][SIZE]);
void multiply(int a[SIZE][SIZE], int b[SIZE][SIZE]);
void printC();
void isIdentity(int matrix[SIZE][SIZE], char name);
void isDiagonal(int matrix[SIZE][SIZE], char name);
void final_check(string op);

int main()
{
    string input, op, checkCmd;
    char ch;

    takeMatrix(A, 'A');
    takeMatrix(B, 'B');

    cout << "Enter a command (print(A), print(B)): ";
    cin >> input;
    if (input == "print(A)") printMatrix(A, 'A');
    if (input == "print(B)") printMatrix(B, 'B');

    cout << "Enter the operation (C=A+B, C=A-B, C=A*B): ";
    cin >> op;
    if (op == "C=A+B") add(A, B);
    else if (op == "C=A-B") subtract(A, B);
    else if (op == "C=A*B") multiply(A, B);
    else cout << "Invalid operation.\n";

    cout << "Print matrix C? (Y/N): ";
    cin >> ch;
    if (ch == 'Y' || ch == 'y') printC();

    cout << "Enter matrix property check (e.g., isIdentity(A), isDiagonal(B), etc.): ";
    cin >> checkCmd;
    final_check(checkCmd);

    return 0;
}

void takeMatrix(int matrix[SIZE][SIZE], char name) {
    cout << "Enter elements for matrix " << name << " (3x3):\n";
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            cin >> matrix[i][j];
}

void printMatrix(int matrix[SIZE][SIZE], char name) {
    cout << "Matrix " << name << ":\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void add(int a[SIZE][SIZE], int b[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            C[i][j] = a[i][j] + b[i][j];
}

void subtract(int a[SIZE][SIZE], int b[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            C[i][j] = a[i][j] - b[i][j];
}

void multiply(int a[SIZE][SIZE], int b[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; ++k)
                C[i][j] += a[i][k] * b[k][j];
        }
}

void printC() {
    cout << "Matrix C:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }
}

void isIdentity(int matrix[SIZE][SIZE], char name) {
    bool identity = true;
    for (int i = 0; i < SIZE && identity; ++i)
        for (int j = 0; j < SIZE && identity; ++j) {
            if (i == j && matrix[i][j] != 1)
                identity = false;
            if (i != j && matrix[i][j] != 0)
                identity = false;
        }
    cout << "Matrix " << name << (identity ? " is an identity matrix.\n" : " is NOT an identity matrix.\n");
}

void isDiagonal(int matrix[SIZE][SIZE], char name) {
    bool diagonal = true;
    for (int i = 0; i < SIZE && diagonal; ++i)
        for (int j = 0; j < SIZE && diagonal; ++j)
            if (i != j && matrix[i][j] != 0)
                diagonal = false;
    cout << "Matrix " << name << (diagonal ? " is a diagonal matrix.\n" : " is NOT a diagonal matrix.\n");
}

void final_check(string op) {
    if (op == "isIdentity(A)") isIdentity(A, 'A');
    else if (op == "isIdentity(B)") isIdentity(B, 'B');
    else if (op == "isIdentity(C)") isIdentity(C, 'C');
    else if (op == "isDiagonal(A)") isDiagonal(A, 'A');
    else if (op == "isDiagonal(B)") isDiagonal(B, 'B');
    else if (op == "isDiagonal(C)") isDiagonal(C, 'C');
    else cout << "Invalid check command.\n";
}
