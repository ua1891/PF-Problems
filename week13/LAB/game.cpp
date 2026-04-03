 #include <iostream>
using namespace std;

const int ROWS = 15;
const int COLS = 25;

char board[ROWS][COLS];

// Function Prototypes
void initializeBoard();
void printBoard();
void movePlayerLeft();
void movePlayerRight();
void fire();
void moveFire();
void moveEnemy(char enemy, string direction);

int playerRow, playerCol; // Track player's position

int main() {
    initializeBoard();
    printBoard();

    // Example usage
    movePlayerRight();
    fire();
    moveFire();
    moveEnemy('e', "left");

    cout << "\nAfter moves:\n";
    printBoard();

    return 0;
}

// Initialize the board
void initializeBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            // Borders
            if (i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1)
                board[i][j] = '#';
            else
                board[i][j] = ' ';
        }
    }

    // Place player
    playerRow = ROWS - 2;
    playerCol = COLS / 2;
    board[playerRow][playerCol] = 'p';

    // Place enemies
    board[2][5] = 'e';
    board[3][15] = 'x';
    board[4][10] = 'e';
    board[5][20] = 'x';
}

// Print the board
void printBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

// Move player left
void movePlayerLeft() {
    if (board[playerRow][playerCol - 1] == ' ') {
        board[playerRow][playerCol] = ' ';
        playerCol--;
        board[playerRow][playerCol] = 'p';
    }
}

// Move player right
void movePlayerRight() {
    if (board[playerRow][playerCol + 1] == ' ') {
        board[playerRow][playerCol] = ' ';
        playerCol++;
        board[playerRow][playerCol] = 'p';
    }
}

// Fire a bullet
void fire() {
    if (board[playerRow - 1][playerCol] == ' ')
        board[playerRow - 1][playerCol] = '.';
}

// Move bullets upward
void moveFire() {
    for (int i = 1; i < ROWS; i++) {
        for (int j = 1; j < COLS - 1; j++) {
            if (board[i][j] == '.') {
                if (board[i - 1][j] == 'e' || board[i - 1][j] == 'x') {
                    board[i - 1][j] = ' '; // hit enemy
                } else if (board[i - 1][j] == ' ') {
                    board[i - 1][j] = '.';
                }
                board[i][j] = ' ';
            }
        }
    }
}

// Move enemies (basic left/right)
void moveEnemy(char enemy, string direction) {
    if (direction == "left") {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 1; j < COLS; j++) {
                if (board[i][j] == enemy && board[i][j - 1] == ' ') {
                    board[i][j - 1] = enemy;
                    board[i][j] = ' ';
                }
            }
        }
    } else if (direction == "right") {
        for (int i = 0; i < ROWS; i++) {
            for (int j = COLS - 2; j >= 0; j--) {
                if (board[i][j] == enemy && board[i][j + 1] == ' ') {
                    board[i][j + 1] = enemy;
                    board[i][j] = ' ';
                }
            }
        }
    }
}
