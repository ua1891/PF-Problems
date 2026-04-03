#include <iostream>
using namespace std;

bool IsGoalScored(string field[7][16], int row, int col);

int main() {
    int row, col;
    string field[7][16] = {
        {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
        {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
        {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
        {"#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#"},
        {" ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " "}
    };

    cout << "Enter row (0-6): ";
    cin >> row;
    cout << "Enter column (0-15): ";
    cin >> col;
    bool flag = IsGoalScored(field, row, col);

    if (flag) {
        cout << "Goal Scored";
    } else {
        cout << "No Goal Scored";
    }

    return 0;
}

bool IsGoalScored(string field[7][16], int row, int col) {
    if ((row >= 0 && row <= 2) && (col > 0 && col < 15)) {
        if (field[row][col] == " ") {
            return true;
        }
    }
    return false;
}
