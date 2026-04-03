#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 20;
int playerX = WIDTH / 2;
int enemyX = rand() % WIDTH;
int enemyY = 0;
int score = 0;
bool gameOver = false;

void draw() {
    system("cls");
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == playerX && y == HEIGHT - 1) {
                cout << "P";
            } else if (x == enemyX && y == enemyY) {
                cout << "E";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            if (playerX > 0) playerX--;
            break;
        case 'd':
            if (playerX < WIDTH - 1) playerX++;
            break;
        }
    }
}

void logic() {
    if (enemyY >= HEIGHT) {
        enemyX = rand() % WIDTH;
        enemyY = 0;
        score++;
    }
    enemyY++;
    if (playerX == enemyX && HEIGHT - 1 == enemyY) {
        gameOver = true;
    }
}

int main() {
    srand(time(0));
    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(100);
    }
    cout << "Game Over! Final Score: " << score << endl;
   return 0;
}