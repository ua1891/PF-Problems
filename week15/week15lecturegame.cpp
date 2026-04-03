#include <iostream>

#include <windows.h>

using namespace std;

// Function Prototype

void printMaze();
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void printScore();
void gotoxy(int x, int y);
void movePacmanDown();

// Global Parameters

char maze[10][10] = {

    {'%', '%', '%', '%', '%', '%', '%', '%', '%', '%'},

    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},

    {'%', ' ', ' ', '.', ' ', '.', ' ', ' ', ' ', '%'},

    {'%', ' ', ' ', '.', ' ', ' ', ' ', ' ', ' ', '%'},

    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},

    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},

    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},

    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},

    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},

    {'%', '%', '%', '%', '%', '%', '%', '%', '%', '%'}

};

int pacmanX = 4; // X Coordinate of Pacman

int pacmanY = 4; // Y Coordinate of Pacman
int score = 0;

main()
{

    bool gameRunning = true;

    system("CLS");

    printMaze();

    gotoxy(pacmanY, pacmanX);
    cout << "P";
    
    while (gameRunning)
    {
        
        Sleep(100);
        printScore();

        if (GetAsyncKeyState(VK_LEFT))
        {

            movePacmanLeft();
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {

            movePacmanRight();
        }

        if (GetAsyncKeyState(VK_UP))
        {

            movePacmanUp();
        }

        if (GetAsyncKeyState(VK_DOWN))
        {

            movePacmanDown();
        }

        if (GetAsyncKeyState(VK_ESCAPE))
        {

            gameRunning = false;
        }
    }
}

void movePacmanLeft()
{
    if (maze[pacmanX][pacmanY - 1] == ' ' || maze[pacmanX][pacmanY - 1] == '.')
    {
        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanY = pacmanY - 1;

        // Check for dot and increase score
        if (maze[pacmanX][pacmanY] == '.')
        {
            score++;
        }

        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void movePacmanRight()

{

    if (maze[pacmanX][pacmanY + 1] == ' ' || maze[pacmanX][pacmanY + 1] == '.')

    {

        maze[pacmanX][pacmanY] = ' ';

        gotoxy(pacmanY, pacmanX);

        cout << " ";

        pacmanY = pacmanY + 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
            score++;
        }

        maze[pacmanX][pacmanY] = ' ';

        gotoxy(pacmanY, pacmanX);

        cout << "P";
    }
}
void movePacmanUp()

{

    if (maze[pacmanX - 1][pacmanY] == ' ' || maze[pacmanX - 1][pacmanY] == '.')

    {

        maze[pacmanX][pacmanY] = ' ';

        gotoxy(pacmanY, pacmanX);

        cout << " ";

        pacmanX = pacmanX - 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
            score++;
        }

        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);

        cout << "P";
    }
}
void movePacmanDown()

{

    if (maze[pacmanX + 1][pacmanY] == ' ' || maze[pacmanX + 1][pacmanY] == '.')

    {

        maze[pacmanX][pacmanY] = ' ';

        gotoxy(pacmanY, pacmanX);

        cout << " ";

        pacmanX = pacmanX + 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
            score++;
        }

        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);

        cout << "P";
    }
}
void printMaze()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}
void printScore()
{
    gotoxy(11, 11);
    cout << "Score is:" << score;
}