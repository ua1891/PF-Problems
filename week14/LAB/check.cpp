#include <iostream>
#include <fstream>
using namespace std;

char maze[25][25];  // 2D array to store the maze

void loadMaze() {
    ifstream file("character.txt",ios::in);
    string line;
    for (int i = 0; i < 25; i++) {
        getline(file, line);  // read one full line
        for (int j = 0; j < 25; j++) {
           
                maze[i][j] = line[j];  // copy character from line
             
        }
    }

    file.close();
}

void printMaze() {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 25; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }
}

int main() {
    loadMaze();
    printMaze();
    return 0;
}
