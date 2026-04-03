#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// function prototypes
void gotoxy(int x, int y);
void loadBoard();
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();
void updatePacman();

// data structure
const int ROWS = 23;
const int COLS = 104;
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

// Pacman's position (row = x, column = y)
int x = 4;
int y = 8;

int main() {
    bool isGame = true;

    loadBoard(); // Draw maze once
    gotoxy(y, x);
    cout << "P"; // Initial Pacman position

    while (isGame) {
        Sleep(100); // Delay for smoother movement

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
            isGame = false;
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
        for (int j = 0; j < COLS; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }
}

// Movement functions (y = column, x = row)

void movePacmanLeft() {
    if (maze[x][y - 1] != '%' && maze[x][y - 1] != '|') {
        gotoxy(y, x);
        cout << " "; // Erase old position
        y--;
        gotoxy(y, x);
        cout << "P"; // Draw at new position
    }
}

void movePacmanRight() {
    if (maze[x][y + 1] != '%' && maze[x][y + 1] != '|') {
        gotoxy(y, x);
        cout << " ";
        y++;
        gotoxy(y, x);
        cout << "P";
    }
}

void movePacmanUp() {
    if (maze[x - 1][y] != '%' && maze[x - 1][y] != '|') {
        gotoxy(y, x);
        cout << " ";
        x--;
        gotoxy(y, x);
        cout << "P";
    }
}

void movePacmanDown() {
    if (maze[x + 1][y] != '%' && maze[x + 1][y] != '|') {
        gotoxy(y, x);
        cout << " ";
        x++;
        gotoxy(y, x);
        cout << "P";
    }
}
