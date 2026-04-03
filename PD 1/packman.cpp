#include <iostream>
#include <windows.h>
using namespace std;
// Function Prototype
void printMaze();
void movePacmanLeft();
void movePacmanRight();
void movePacmanUP();
void movePacmanDown();
void gost1Petrolling();
// Global Parameters
char maze[10][10] = {
    {'%', '%', '%', '%', '%', '%', '%', '%', '%', '%'},
    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},
    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},
    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},
    {'%', ' ', ' ', ' ', 'P', ' ', ' ', ' ', ' ', '%'},
    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},
    {'%', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', '%'},
    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},
    {'%', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '%'},
    {'%', '%', '%', '%', '%', '%', '%', '%', '%', '%'}};

int pacmanX = 4; // X Coordinate of Pacman
int pacmanY = 4; // Y Coordinate of Pacman

int gostX1 = 6;
int gostY2 = 7;
  bool gameRunning = true;

main() // Main Function
{
  
    while (gameRunning)
    {
        Sleep(200);
        system("CLS");
        printMaze();
        gost1Petrolling();
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
            movePacmanUP();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePacmanDown();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false; // Stop the game
        }
    }
}

bool gost1forwarding = true;
int glost1Steps = 0;
void gost1Petrolling()
{
    glost1Steps++;
    if (glost1Steps == 4)
    {
        gost1forwarding = !gost1forwarding;
        glost1Steps = 0;
    }
    if (gost1forwarding)
    {
        maze[gostX1][gostY2] = ' ';
        gostY2 = gostY2 - 1;
        maze[gostX1][gostY2] = 'G';
    }
    else
    {
        maze[gostX1][gostY2] = ' ';
        gostY2 = gostY2 + 1;
        maze[gostX1][gostY2] = 'G';
    }
}
void printMaze()
{
    for (int row = 0; row < 10; row = row + 1)
    {
        for (int col = 0; col < 10; col = col + 1)
        {
            cout << maze[row][col];
        }
        cout << endl;
    }
}

void movePacmanLeft()
{
    if (maze[pacmanX][pacmanY - 1] != '%')
    {
        maze[pacmanX][pacmanY] = ' ';
        pacmanY = pacmanY - 1;

        maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanRight()
{
    if (maze[pacmanX][pacmanY + 1] != '%')
    {
        maze[pacmanX][pacmanY] = ' ';
        pacmanY = pacmanY + 1;
        maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanUP()
{
    maze[pacmanX][pacmanY] = ' ';
    pacmanX = pacmanX - 1;
    maze[pacmanX][pacmanY] = 'P';
}

void movePacmanDown()
{
    maze[pacmanX][pacmanY] = ' ';
    pacmanX = pacmanX + 1;
    maze[pacmanX][pacmanY] = 'P';
}
