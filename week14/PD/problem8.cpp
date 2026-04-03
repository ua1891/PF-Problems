#include <iostream>
#include <fstream>
using namespace std;

int arr[10][10];
int Rows, Columns;

// Function declarations
void readMatrix();
bool isDiagonal();
void displayMatrix();
void writeToFile();

int main() {
    readMatrix();

    if (isDiagonal()) {
        cout << "Matrix is diagonal.\n";
    } else {
        cout << "Matrix is not diagonal.\n";
    }

    displayMatrix();
    writeToFile();  // Save matrix and result to file

    return 0;
}

void readMatrix() {
    cout << "Enter total number of Rows and Columns of matrix: ";
    cin >> Rows >> Columns;

    cout << "Enter values of matrix:\n";
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            cout << "Enter value at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

bool isDiagonal() {
    if (Rows != Columns) return false;

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            if (i != j && arr[i][j] != 0)
                return false;
        }
    }
    return true;
}

void displayMatrix() {
    cout << "Matrix contents:\n";
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void writeToFile() {
    fstream file;
    file.open("matrix_output.txt", ios::out);  // Basic file output

    if (!file) {
        cout << "File could not be created.\n";
        return;
    }

    file << "Matrix contents:\n";
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            file << arr[i][j] << " ";
        }
        file << endl;
    }

    if (isDiagonal()) {
        file << "Matrix is diagonal.\n";
    } else {
        file << "Matrix is not diagonal.\n";
    }

    file.close();
}
