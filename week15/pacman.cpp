#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

const int ROWS = 23;
const int COLS = 104;
char maze[ROWS][COLS + 1] = {
    // (same maze as before)
};

int pacX = 4, pacY = 8;
int ghostX = 3, ghostY = 26;
bool ghostMovingRight = true;

void gotoxy(int x, int y) {
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void loadBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }
}

void drawPacman() {
    gotoxy(pacY, pacX);
    cout << "P";
}

void erasePacman() {
    gotoxy(pacY, pacX);
    cout << " ";
}

void drawGhost() {
    gotoxy(ghostY, ghostX);
    cout << "G";
}

void eraseGhost() {
    gotoxy(ghostY, ghostX);
    cout << " ";
}

void resetPacman() {
    erasePacman();
    pacX = 4;
    pacY = 8;
    drawPacman();
}

void checkCollision() {
    if (pacX == ghostX && pacY == ghostY) {
        resetPacman();
    }
}

void moveGhost() {
    eraseGhost();
    if (ghostMovingRight) {
        if (maze[ghostX][ghostY + 1] != '%' && maze[ghostX][ghostY + 1] != '|') {
            ghostY++;
        } else {
            ghostMovingRight = false;
        }
    } else {
        if (maze[ghostX][ghostY - 1] != '%' && maze[ghostX][ghostY - 1] != '|') {
            ghostY--;
        } else {
            ghostMovingRight = true;
        }
    }
    drawGhost();
}

void movePacmanLeft() {
    if (maze[pacX][pacY - 1] != '%' && maze[pacX][pacY - 1] != '|') {
        erasePacman();
        pacY--;
        drawPacman();
        checkCollision();
    }
}

void movePacmanRight() {
    if (maze[pacX][pacY + 1] != '%' && maze[pacX][pacY + 1] != '|') {
        erasePacman();
        pacY++;
        drawPacman();
        checkCollision();
    }
}

void movePacmanUp() {
    if (maze[pacX - 1][pacY] != '%' && maze[pacX - 1][pacY] != '|') {
        erasePacman();
        pacX--;
        drawPacman();
        checkCollision();
    }
}

void movePacmanDown() {
    if (maze[pacX + 1][pacY] != '%' && maze[pacX + 1][pacY] != '|') {
        erasePacman();
        pacX++;
        drawPacman();
        checkCollision();
    }
}

int main() {
    bool isGame = true;

    loadBoard();
    drawPacman();
    drawGhost();
    while (isGame) {
        Sleep(150);

        // Pac-Man controls
        if (GetAsyncKeyState(VK_LEFT)) movePacmanLeft();
        if (GetAsyncKeyState(VK_RIGHT)) movePacmanRight();
        if (GetAsyncKeyState(VK_UP)) movePacmanUp();
        if (GetAsyncKeyState(VK_DOWN)) movePacmanDown();
        if (GetAsyncKeyState(VK_ESCAPE)) isGame = false;

        // Ghost movement + collision check
        moveGhost();
        checkCollision();
    }

    return 0;
}
