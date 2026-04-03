#include <iostream>
#include <windows.h>
using namespace std;

const int ROWS = 18;
const int COLS = 40;

char maze[ROWS][COLS + 1] = {
    "########################################",
    "#S.....*........####......*.....E.....#",
    "#....#####......#..#........#####.....#",
    "#....#.........##..####.......#..#....#",
    "#....#..######.......E...######..#....#",
    "#....#..#....##..#####..##....#..#....#",
    "#....#..#.*..##..#..#...##..*.#..#....#",
    "#....######..#####..#####..######....#",
    "#............#..#.......#..#.........#",
    "#..#####.....#..#####...#..#..#####..#",
    "#..#...#..###########..#######...#...#",
    "#..#.*.#..#.........#..#...#.*.#.#...#",
    "#..#####..#..#####..#..#...#####.#...#",
    "#.............#.#........#.#.........#",
    "#....#####....#.#.E..#####.#..#####..#",
    "#....#...#.....#......#...#..#...#...#",
    "#....#...######......#######...#..G..#",
    "########################################"
};

int playerX = 1, playerY = 1;

void drawMaze() {
    system("cls");
    for (int i = 0; i < ROWS; i++) {
        cout << maze[i] << endl;
    }
}

bool movePlayer(int dx, int dy) {
    int newX = playerX + dx;
    int newY = playerY + dy;

    char nextPos = maze[newY][newX];
    if (nextPos == '#' || nextPos == 'E') {
        return false;
    } else if (nextPos == 'G') {
        maze[playerY][playerX] = '.';
        playerX = newX;
        playerY = newY;
        maze[playerY][playerX] = 'S';
        drawMaze();
        cout << "\nYou reached the warp gate! You win!\n";
        return true;
    } else {
        if (nextPos == '*') {
            cout << "\nPower-up collected!\n";
        }
        maze[playerY][playerX] = '.';
        playerX = newX;
        playerY = newY;
        maze[playerY][playerX] = 'S';
    }
    return false;
}

void moveEnemies() {
    for (int y = 0; y < ROWS; y++) {
        for (int x = 0; x < COLS; x++) {
            if (maze[y][x] == 'E') {
                int newX = x + ((rand() % 3) - 1);
                int newY = y + ((rand() % 3) - 1);
                if (maze[newY][newX] == '.') {
                    maze[y][x] = '.';
                    maze[newY][newX] = 'E';
                }
            }
        }
    }
}

int main() {
    bool gameOver = false;
    drawMaze();

    while (!gameOver) {
        if (GetAsyncKeyState(VK_LEFT))
            gameOver = movePlayer(-1, 0);
        if (GetAsyncKeyState(VK_RIGHT))
            gameOver = movePlayer(1, 0);
        if (GetAsyncKeyState(VK_UP))
            gameOver = movePlayer(0, -1);
        if (GetAsyncKeyState(VK_DOWN))
            gameOver = movePlayer(0, 1);
        if (GetAsyncKeyState(VK_ESCAPE))
            break;

        moveEnemies();
        drawMaze();
        Sleep(200);
    }
    return 0;
}
