#include <iostream>
using namespace std;
// function prototype________
void movePlayerLeft();
void movePlayerRight();
void fire();
void moveEnemy(char object, string direction);
void moveFire(int timeStep);
void printBoard();
// function prottype end--------

// global data structure.
const int ROWS = 15;
const int COLS = 15;

char board[ROWS][COLS] = {
    // 0   1   2   3   4   5   6   7   8   9  10  11  12  13  14
    {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}, // Row 0
    {'#', ' ', ' ', ' ', ' ', ' ', 'x', ' ', 'x', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 1
    {'#', ' ', ' ', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'e', ' ', ' ', '#'}, // Row 2
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 3
    {'#', ' ', ' ', ' ', ' ', 'x', ' ', ' ', ' ', 'x', ' ', ' ', ' ', ' ', '#'}, // Row 4
    {'#', ' ', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '#'}, // Row 5
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 6
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 7
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 8
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 9
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 10
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 11
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 12
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', 'p', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, // Row 13
    {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}  // Row 14
};

main()
{
    char OBject;
    string Dir;
    int time;
    printBoard();
    movePlayerLeft();
    cout << endl;
    // board after player move to left.
    printBoard();
    cout << endl;
    movePlayerRight();
    cout << endl;
    // print board after moving player left.
    printBoard();
    cout << "Enter the player which you want to move:";
    cin >> OBject;
    cout << " Enter the direction in which you want to move it:";
    cin >> Dir;
    moveEnemy(OBject, Dir);
    // board after moving enemy.
    printBoard();
    fire(); // calling fire function.
    printBoard();
    // move fire
    cout << "Enter how many time you wanna to fire:";
    cin >> time;
    moveFire(time);
    printBoard();
}
void printBoard()
{

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
void movePlayerLeft()
{
    int left;
    cout << " How many time you want your player move left:";
    cin >> left;
    for (int i = 0; i < COLS; i++)
    {

        if (board[13][i] == 'p')
        {
            if (i - left <= 0)
            {
                cout << " You cannot move further." << endl;
            }
            else
            {
                // for moving left
                board[13][i - left] = 'p';
                board[13][i] = ' ';
            }
            break;
        }
    }
}
void movePlayerRight()
{

    int right;
    cout << " How many time you want your player move right:";
    cin >> right;
    for (int i = 0; i < COLS; i++)
    {

        if (board[13][i] == 'p')
        {
            if (i + right >= COLS - 1)
            {
                cout << " You cannot move further." << endl;
            }
            else
            {
                // for moving right
                board[13][i + right] = 'p';
                board[13][i] = ' ';
            }
            break;
        }
    }
}
void moveEnemy(char object, string direction)
{
    int move;
    cout << "Enter how many time you wanna to move it:";
    cin >> move;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (board[i][j] == object)
            {

                if (direction == "left")
                {
                    if (j - move <= 0)
                    {
                        cout << " You cannot move further." << endl;
                    }
                    else
                    {
                        // for moving left
                        board[i][j - move] = object;
                        board[i][j] = ' ';
                    }
                    break;
                } // left case end here.
                else if (direction == "right")
                {
                    if (j + move >= COLS - 1)
                    {
                        cout << "You cannot move further:";
                    }
                    else
                    {
                        // for moving right
                        board[i][j + move] = object;
                        board[i][j] = ' ';
                    }
                    break;
                } // right case end here.
                else if (direction == "up")
                {
                    if (i - move <= 0)
                    {
                        cout << "You cannot move further.";
                    }
                    else
                    {
                        // moving up
                        board[i - move][j] = object;
                        board[i][j] = ' ';
                    }
                }
                else if (direction == "down")
                {
                    if (i + move >= 14)
                    {
                        cout << "You cannot move further.";
                    }
                    else
                    {
                        // moving up
                        board[i + move][j] = object;
                        board[i][j] = ' ';
                    }
                }
            }
        }
    }
}
void fire()
{

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (board[i][j] == 'p' && i >= 0 && board[i - 1][j] == ' ')
            {
                board[i - 1][j] = '.';
            }
        }
    }
}

void moveFire(int timeStep)
{
    for (int t = 0; t < timeStep; t++)
    {
        for (int i = 1; i < ROWS; i++) // start from row 1 to avoid going out of bounds
        {
            for (int j = 0; j < COLS; j++)
            {
                if (board[i][j] == '.')
                {
                    if (board[i - 1][j] == ' ')
                    {
                        board[i - 1][j] = '.';
                        board[i][j] = '.';
                        if (board[i-1][j]=='e'||board[i-1][j]=='x')
                        {
                            board[i-1][j]=' ';
                            break;
                        }
                        
                    }
                }
            }
        }
    }
}
