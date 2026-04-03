#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h> // for getch()
using namespace std;

const int SIZE = 10;
char map[SIZE][SIZE];
bool revealed[SIZE][SIZE];
int playerX = 0, playerY = 0;
int treasureX, treasureY;
int stamina = 30;

// Generate a random map
void generateMap() {
    srand(time(0));
    for (int y = 0; y < SIZE; y++)
        for (int x = 0; x < SIZE; x++) {
            map[y][x] = '.';
            revealed[y][x] = false;
        }

    // Place treasure
    treasureX = rand() % SIZE;
    treasureY = rand() % SIZE;
    map[treasureY][treasureX] = 'T';

    // Place traps
    for (int i = 0; i < 10; i++) {
        int x, y;
        do {
            x = rand() % SIZE;
            y = rand() % SIZE;
        } while (map[y][x] != '.' || (x == 0 && y == 0));
        map[y][x] = 'X';
    }
}

// Show the current map
void drawMap() {
    system("cls");
    cout << "Stamina: " << stamina << "\n";
    cout << "Use W/A/S/D to move, E to dig\n\n";

    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            if (x == playerX && y == playerY)
                cout << "P ";
            else if (revealed[y][x])
                cout << map[y][x] << " ";
            else
                cout << "? ";
        }
        cout << endl;
    }

    // Compass
    cout << "\nCompass: ";
    if (playerY > treasureY) cout << "N";
    else if (playerY < treasureY) cout << "S";
    if (playerX < treasureX) cout << "E";
    else if (playerX > treasureX) cout << "W";
    cout << endl;
}

// Handle player movement
void movePlayer(char dir) {
    int newX = playerX;
    int newY = playerY;

    switch (dir) {
        case 'W': case 'w': newY--; break;
        case 'S': case 's': newY++; break;
        case 'A': case 'a': newX--; break;
        case 'D': case 'd': newX++; break;
        default: return;
    }

    if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE) {
        playerX = newX;
        playerY = newY;
        revealed[playerY][playerX] = true;
        stamina--;
        if (map[playerY][playerX] == 'X') {
            cout << "You stepped on a trap! Game Over!\n";
            exit(0);
        }
    }
}

// Dig command
void dig() {
    if (map[playerY][playerX] == 'T') {
        cout << "You found the treasure! You win!\n";
        exit(0);
    } else {
        cout << "Nothing here...\n";
        stamina--;
    }
    system("pause");
}

int main() {
    generateMap();
    revealed[0][0] = true;

    while (stamina > 0) {
        drawMap();
        char input = getch();
        if (input == 'E' || input == 'e')
            dig();
        else
            movePlayer(input);
    }

    cout << "You ran out of stamina! Game Over!\n";
    return 0;
}
