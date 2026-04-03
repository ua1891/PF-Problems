#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

// Constants
const int ROWS = 23;
const int COLS = 104;

// Maze definition
char maze[ROWS][COLS + 1] = {
    "################################################################################################",
    "||..  .............................................................................    ......  ||",
    "||..  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%           ...   %%%%%%%%%%%%%%%%  |%| ..     %%%%   ||",
    "||..                        G          |%|        |%|...   |            |%|  |%| ..      |%|   ||",
    "||..                       |           |%|        |%|...    G           |%|  |%| ..      |%|   ||",
    "||..                       %%%%%%%%%%%%%%   .  .  |%|...   %%%%%%%%%%%%%%%%      ..      %%  . ||",
    "||..                       |%|              .  .  |%|...   ................. |%| ..          . ||",
    "||..                       %%%%%%%%%%%%%%%%%.  .  |%|...   %%%%%%%%%%%%%%    |%| ..      %%%%. ||",
    "||..                                     |%|.              |%|........       |%| ..       |%|. ||",
    "||..                    ...............  |%|.              |%|........|%|        ..       |%|. ||",
    "||..|%|               |%|%%%%%%%%%%|%|.  |%|. |%|          |%|........|%|        ..|%|    |%|. ||",
    "||..|%|        G      |%|          |%|.. |%|. %%%%%%%%%%%%%%  ........|%|         .|%|.   |%|. ||",
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

// Pac-Man position
int x = 4; // row
int y = 8; // column

// Function prototypes
void gotoxy(int x, int y);
void loadBoard();
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();
int counttotal();
int main() {
    bool isGame = true;
    system("cls");
    loadBoard();
    gotoxy(y, x);
    cout << "P";
    
    while (isGame) {
        Sleep(100); 

        if (GetAsyncKeyState(VK_LEFT)) {
            movePacmanLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            movePacmanRight();
        }
        if (GetAsyncKeyState(VK_UP)) {
            movePacmanUp();
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            movePacmanDown();
        }
        if (GetAsyncKeyState(VK_ESCAPE)) {
            isGame = false; // Stop the game
        }
    }
    return 0;
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void loadBoard() {
    for (int i = 0; i < ROWS; i++) {
        cout << maze[i] << endl;
    }
}

int counttotal() {
    int totalfood = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) { // Fixed: j < COLS (not i < COLS)
            if (maze[i][j] == '.' || maze[i][j] == 'G') { // Count both '.' and 'G'
                totalfood++;
            }
        }
    }
    return totalfood;
}

// Movement functions (to be implemented)
void movePacmanLeft() {}
void movePacmanRight() {}
void movePacmanUp() {}
void movePacmanDown() {}