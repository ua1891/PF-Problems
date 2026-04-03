#include <iostream>
#include <vector>
#include <stack>
#include <utility>
#include <cstdlib>
#include <ctime>
#include <conio.h> // For _kbhit() and _getch() on Windows
#include <chrono>
#include <thread>
#include <queue>
#include <algorithm>

#ifdef _WIN32
#include <windows.h> // For Windows console functions
#else
#include <unistd.h> // For usleep on Unix-like systems
#endif

using namespace std;

// Maze dimensions
const int WIDTH = 21;  // Must be odd
const int HEIGHT = 21; // Must be odd

// Cell types
enum Cell {
    WALL = '#',
    PATH = ' ',
    PLAYER = 'P',
    EXIT = 'E',
    GHOST = 'G',
    VISITED = '.'
};

// Directions for movement
enum Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    NONE
};

class Maze {
private:
    vector<vector<Cell>> grid;
    pair<int, int> playerPos;
    pair<int, int> exitPos;
    vector<pair<int, int>> ghosts;
    int steps;
    chrono::time_point<chrono::system_clock> startTime;
    bool gameOver;
    bool gameWon;

    // Initialize maze with all walls
    void initialize() {
        grid.resize(HEIGHT, vector<Cell>(WIDTH, WALL));
        steps = 0;
        gameOver = false;
        gameWon = false;
        startTime = chrono::system_clock::now();
    }

    // Check if a position is within bounds
    bool inBounds(int x, int y) {
        return x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT;
    }

    // Check if a cell is a wall (for generation purposes)
    bool isWall(int x, int y) {
        return inBounds(x, y) && grid[y][x] == WALL;
    }

    // Count the number of adjacent paths
    int countAdjacentPaths(int x, int y) {
        int count = 0;
        if (x > 0 && grid[y][x-1] == PATH) count++;
        if (x < WIDTH-1 && grid[y][x+1] == PATH) count++;
        if (y > 0 && grid[y-1][x] == PATH) count++;
        if (y < HEIGHT-1 && grid[y+1][x] == PATH) count++;
        return count;
    }

    // Generate maze using DFS algorithm
    void generateMazeDFS(int startX, int startY) {
        stack<pair<int, int>> s;
        s.push({startX, startY});
        grid[startY][startX] = PATH;

        // Possible movement directions
        int dx[] = {0, 1, 0, -1};
        int dy[] = {-1, 0, 1, 0};

        while (!s.empty()) {
            auto [x, y] = s.top();
            vector<int> directions = {0, 1, 2, 3};
            
            // Shuffle directions
            for (int i = 0; i < 4; i++) {
                swap(directions[i], directions[rand() % 4]);
            }

            bool found = false;
            for (int dir : directions) {
                int nx = x + dx[dir] * 2;
                int ny = y + dy[dir] * 2;

                if (inBounds(nx, ny) && grid[ny][nx] == WALL) {
                    grid[y + dy[dir]][x + dx[dir]] = PATH;
                    grid[ny][nx] = PATH;
                    s.push({nx, ny});
                    found = true;
                    break;
                }
            }

            if (!found) {
                s.pop();
            }
        }
    }

    // Place player, exit and ghosts
    void placeEntities() {
        // Place player in the top-left corner
        playerPos = {1, 1};
        grid[1][1] = PLAYER;

        // Place exit in the bottom-right corner
        exitPos = {WIDTH-2, HEIGHT-2};
        grid[HEIGHT-2][WIDTH-2] = EXIT;

        // Place ghosts at random positions
        ghosts.clear();
        int ghostCount = 3; // Number of ghosts
        for (int i = 0; i < ghostCount; i++) {
            int x, y;
            do {
                x = 1 + rand() % (WIDTH - 2);
                y = 1 + rand() % (HEIGHT - 2);
            } while (grid[y][x] != PATH || 
                    (x == playerPos.first && y == playerPos.second) ||
                    (x == exitPos.first && y == exitPos.second));
            
            ghosts.emplace_back(x, y);
            grid[y][x] = GHOST;
        }
    }

    // Clear screen (platform-specific)
    void clearScreen() {
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
    }

    // Find shortest path using BFS (for ghost movement)
    Direction findPathToPlayer(int ghostX, int ghostY) {
        queue<pair<pair<int, int>, vector<Direction>>> q;
        vector<vector<bool>> visited(HEIGHT, vector<bool>(WIDTH, false));
        
        // Possible movement directions
        int dx[] = {0, 1, 0, -1};
        int dy[] = {-1, 0, 1, 0};
        Direction dirs[] = {UP, RIGHT, DOWN, LEFT};

        q.push({{ghostX, ghostY}, {}});
        visited[ghostY][ghostX] = true;

        while (!q.empty()) {
            auto [pos, path] = q.front();
            auto [x, y] = pos;
            q.pop();

            // If reached player position
            if (x == playerPos.first && y == playerPos.second) {
                return path.empty() ? NONE : path[0];
            }

            // Explore all directions
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (inBounds(nx, ny) && !visited[ny][nx] && 
                    (grid[ny][nx] == PATH || grid[ny][nx] == PLAYER || grid[ny][nx] == EXIT)) {
                    vector<Direction> newPath = path;
                    newPath.push_back(dirs[i]);
                    q.push({{nx, ny}, newPath});
                    visited[ny][nx] = true;
                }
            }
        }

        return NONE; // No path found
    }

    // Move ghosts towards player
    void moveGhosts() {
        for (auto& ghost : ghosts) {
            // Clear current ghost position
            if (grid[ghost.second][ghost.first] == GHOST) {
                grid[ghost.second][ghost.first] = PATH;
            }

            // Find direction to move towards player
            Direction dir = findPathToPlayer(ghost.first, ghost.second);

            // Move ghost
            int dx = 0, dy = 0;
            switch (dir) {
                case UP: dy = -1; break;
                case DOWN: dy = 1; break;
                case LEFT: dx = -1; break;
                case RIGHT: dx = 1; break;
                case NONE: 
                    // If no path, move randomly
                    switch (rand() % 4) {
                        case 0: dy = -1; break;
                        case 1: dy = 1; break;
                        case 2: dx = -1; break;
                        case 3: dx = 1; break;
                    }
                    break;
            }

            int newX = ghost.first + dx;
            int newY = ghost.second + dy;

            // Check if move is valid
            if (inBounds(newX, newY) && grid[newY][newX] != WALL) {
                ghost.first = newX;
                ghost.second = newY;
            }

            // Update ghost position in grid
            grid[ghost.second][ghost.first] = GHOST;

            // Check if ghost caught player
            if (ghost.first == playerPos.first && ghost.second == playerPos.second) {
                gameOver = true;
                gameWon = false;
            }
        }
    }

    // Move player in specified direction
    void movePlayer(Direction dir) {
        int dx = 0, dy = 0;
        switch (dir) {
            case UP: dy = -1; break;
            case DOWN: dy = 1; break;
            case LEFT: dx = -1; break;
            case RIGHT: dx = 1; break;
            case NONE: return;
        }

        int newX = playerPos.first + dx;
        int newY = playerPos.second + dy;

        // Check if move is valid
        if (inBounds(newX, newY) && grid[newY][newX] != WALL) {
            // Check if reached exit
            if (grid[newY][newX] == EXIT) {
                gameOver = true;
                gameWon = true;
                return;
            }

            // Check if moving into ghost
            if (grid[newY][newX] == GHOST) {
                gameOver = true;
                gameWon = false;
                return;
            }

            // Update player position
            grid[playerPos.second][playerPos.first] = PATH;
            playerPos = {newX, newY};
            grid[newY][newX] = PLAYER;
            steps++;
        }
    }

    // Get elapsed time in seconds
    int getElapsedTime() {
        auto now = chrono::system_clock::now();
        return chrono::duration_cast<chrono::seconds>(now - startTime).count();
    }

public:
    Maze() {
        srand(static_cast<unsigned int>(time(nullptr)));
        initialize();
        generateMazeDFS(1, 1);
        placeEntities();
    }

    void display() {
        clearScreen();

        // Display maze
        for (const auto& row : grid) {
            for (Cell cell : row) {
                cout << static_cast<char>(cell);
            }
            cout << endl;
        }

        // Display stats
        cout << "\nSteps: " << steps << " | Time: " << getElapsedTime() << "s\n";
        cout << "Use WASD to move. Find the exit (E)! Avoid ghosts (G)!\n";
    }

    void play() {
        display();

        while (!gameOver) {
            if (_kbhit()) { // Check if key pressed (Windows-specific)
                Direction dir = NONE;
                switch (_getch()) {
                    case 'w': case 'W': dir = UP; break;
                    case 's': case 'S': dir = DOWN; break;
                    case 'a': case 'A': dir = LEFT; break;
                    case 'd': case 'D': dir = RIGHT; break;
                }
                movePlayer(dir);
                display();
            }
            
            // Move ghosts every few steps
            if (steps % 2 == 0) {
                moveGhosts();
                display();
            }
            
            // Small delay to prevent CPU overuse
            #ifdef _WIN32
            Sleep(100);
            #else
            usleep(100000);
            #endif
        }

        // Game over message
        clearScreen();
        if (gameWon) {
            cout << "Congratulations! You found the exit in " << steps << " steps and " 
                 << getElapsedTime() << " seconds.\n";
        } else {
            cout << "Game Over! A ghost caught you after " << steps << " steps and " 
                 << getElapsedTime() << " seconds.\n";
        }
    }
};

int main() {
    Maze mazeGame;
    mazeGame.play();
    return 0;
}