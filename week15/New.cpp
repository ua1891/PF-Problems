#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;
// Function Prototype

void printMaze();
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void printScore(int totalFood);
void gotoxy(int x, int y);
void movePacmanDown();
int counttotalFood();
void gost1Petrolling(); // ghost 1
void gost2Petrolling();
void ghost3Patrolling();
void printlive();
// Constants
const int ROWS = 23;
const int COLS = 104;
// Maze definition
char maze[ROWS][COLS + 1] = {
    "################################################################################################",
    "||..  .............................................................................    ......  ||",
    "||..  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%           ...   %%%%%%%%%%%%%%%%  |%| ..     %%%%   ||",
    "||..                        G          |%|        |%|...   |            |%|  |%| ..      |%|   ||",
    "||..                       |           |%|      G |%|...                |%|  |%| ..      |%|   ||",
    "||..                       %%%%%%%%%%%%%%   .  .  |%|...   %%%%%%%%%%%%%%%%      ..      %%  . ||",
    "||..                       |%|              .  .  |%|...   ................. |%| ..          . ||",
    "||..                       %%%%%%%%%%%%%%%%%.  .  |%|...   %%%%%%%%%%%%%%    |%| ..      %%%%. ||",
    "||..                                     |%|.              |%|........       |%| ..       |%|. ||",
    "||..                    ...............  |%|.              |%|........|%|        ..       |%|. ||",
    "||..|%|               |%|%%%%%%%%%%|%|.  |%|. |%|          |%|........|%|        ..|%|    |%|. ||",
    "||..|%|               |%|          |%|.. |%|. %%%%%%%%%%%%%%  ........|%|         .|%|.   |%|. ||",
    "||..|%|               |%|          |%|..              ...|%|       %%%%%%        . |%|.   |%|. ||",
    "||..|%|                                .              ...|%|                 |%| ..|%|.        ||",
    "||..|%|               %%%%%%%%%%%%%%%%%%%%%%%         ...|%|%%%%%%%%%%%%     |%| ..|%|%%%%%%%% ||",
    "||........................................................................   |%| ............. ||",
    "||  ......................................................................         ........... ||",
    "||..|%|               |%|    |%|..            %%%%%%%%%%%%%%   .......|%|    |%| ..|%|.        ||",
    "||..|%|               |%|    |%|..                    ...|%|      %%%%%%%    |%| ..|%|.        ||",
    "||..|%|                          .                    ...|%|                 |%| ..|%|.        ||",
    "||..|%|               %%%%%%%%%%%%%%%%%%%%%%%         ...|%|%%%%%%%%%%%%     |%| ..|%|%%%%%%%% ||",
    "||........................................................................   |%| ............. ||",
    "||  ......................................................................         ............||",
};
int lives = 3;
// Pac-Man position
int pacmanX = 4; // X Coordinate of Pacman

int pacmanY = 4; // Y Coordinate of Pacman
int PcStartX = 4;
int PcStartY = 4;
int score = 0;
// ghost1
bool isghost1isalive = true;
int ghost1X = 3, ghost1Y = 28;
bool gost1forwarding = true;
int glost1Steps = 0;
// ghost2
bool isghost2isalive = true;
int ghost2X = 4, ghost2Y = 48;
bool gost2forwarding = true;
int glost2Steps = 0;

// ghost2
bool isghost3isalive = true;
int ghost3X = 12, ghost3Y = 16;
bool gost3forwarding = true;
int glost3Steps = 0;

main()
{

    bool gameRunning = true;

    system("CLS");
    srand(time(0));
    printMaze();
    int total = counttotalFood();
    gotoxy(pacmanY, pacmanX);
    cout << "P";
    while (gameRunning)
    {
        if (lives > 0)
        {
            /* code */

            Sleep(100);
            gost1Petrolling();
            gost2Petrolling();
            ghost3Patrolling();

            printScore(total);
            printlive();
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
            if (score==total)
            {
                gameRunning=false;
                system("cls");
                cout<<"you win the game by eating all food!!";
            }
                      
        }
        else
        {
            cout << "Game is over\n";
            break;
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

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}
void printScore(int totalFood)
{
    gotoxy(COLS + 2, 0); // Position to the right of the maze
    cout << "Score: " << score << "/" << totalFood;
}
int counttotalFood()
{
    int count = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (maze[i][j] == '.')
            {
                count++;
            }
        }
    }
    return count;
}
// ghost

void gost1Petrolling()
{
    if (isghost1isalive)
    {
        /* code */

        glost1Steps++;
        if (glost1Steps == 19)
        {
            gost1forwarding = !gost1forwarding;
            glost1Steps = 0;
        }
        if (gost1forwarding)
        {
            maze[ghost1X][ghost1Y] = ' ';
            gotoxy(ghost1Y, ghost1X);
            cout << " ";
            ghost1Y = ghost1Y - 1;
            gotoxy(ghost1Y, ghost1X);
            cout << "G";
        }
        else
        {
            maze[ghost1X][ghost1Y] = ' ';
            gotoxy(ghost1Y, ghost1X);
            cout << " ";
            ghost1Y = ghost1Y + 1;
            gotoxy(ghost1Y, ghost1X);
            cout << "G";
        }
        if (pacmanX == ghost1X && pacmanY == ghost1Y)
        {
            lives--;
            gotoxy(ghost1Y, ghost1X);
            cout << " ";
            maze[ghost1X][ghost1Y] = ' ';
            pacmanX = PcStartX;
            pacmanY = PcStartY;
            gotoxy(pacmanY, pacmanX);
            cout << "p";
            isghost1isalive = false;
        }
    }
}
void gost2Petrolling()
{

    if (isghost2isalive)
    {
        /* code */

        glost2Steps++;
        if (glost2Steps == 4)
        {
            gost2forwarding = !gost2forwarding;
            glost2Steps = 0;
        }

        if (gost2forwarding)
        {
            maze[ghost2X][ghost2Y] = ' ';
            gotoxy(ghost2Y, ghost2X);
            cout << " ";
            ghost2X = ghost2X - 1;
            gotoxy(ghost2Y, ghost2X);
            cout << "G";
        }
        else
        {
            maze[ghost2X][ghost2Y] = ' ';
            gotoxy(ghost2Y, ghost2X);
            cout << " ";
            ghost2X = ghost2X + 1;
            gotoxy(ghost2Y, ghost2X);
            cout << "G";
        }
        if (pacmanX == ghost2X && pacmanY == ghost2Y)
        {
            lives--;
            maze[ghost2X][ghost2Y] = ' ';
            gotoxy(ghost2Y, ghost2X);
            cout << " ";
            pacmanX = PcStartX;
            pacmanY = PcStartY;
            gotoxy(pacmanY, pacmanX);
            cout << "p";
            isghost2isalive = false;
        }

    }
}

void printlive()
{
    gotoxy(COLS + 3, 1);
    cout << "Toatl lives is:" << lives;
}
void ghost3Patrolling()
{
    if (isghost3isalive)
    {
        // Clear old position
        maze[ghost3X][ghost3Y] = ' ';
        gotoxy(ghost3Y, ghost3X);
        cout << " ";

        // Define direction deltas: up, down, left, right
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        // Try random directions until a valid move is found
        for (int i = 0; i < 4; ++i)
        {
            int dir = rand() % 4; // Pick random direction
            int nextX = ghost3X + dx[dir];
            int nextY = ghost3Y + dy[dir];

            // Check boundaries and walkable space
            if (maze[nextX][nextY] == ' ')
            {
                ghost3X = nextX;
                ghost3Y = nextY;
                break;
            }
        }
        // Draw new position
        gotoxy(ghost3Y, ghost3X);
        cout << "G";
        maze[ghost3X][ghost3Y] = 'G';

        // Check for collision with Pac-Man
        if (pacmanX == ghost3X && pacmanY == ghost3Y)
        {
            lives--;
            gotoxy(ghost3Y, ghost3X);
            cout << " ";
            maze[ghost3X][ghost3Y] = ' ';
            pacmanX = PcStartX;
            pacmanY = PcStartY;
            gotoxy(pacmanY, pacmanX);
            cout << "p";
            isghost3isalive = false;
        }
    }
}
