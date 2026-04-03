#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <random>
using namespace std;
// GLOBAL ARRAYS
char maze[24][71] = {
    {"#####################################################################"},
    {"||..        ...............      ...............        .......... ||"},
    {"||.. %%%%%%%%%%%%%%%% ... %%%%%%%%%%%%%% |%|..        %%%%         ||"},
    {"||.. |%| |%| |%|   |%| |%| |%|   |%||%| |%| |%| |%| |%| |%| |%|    ||"},
    {"||.. |%| |%| |%|   |%| |%| |%|   |%|                             ..||"},
    {"||.. %%%%%%%%     |%|   %%%%%%%%%%%%%%    %%%%%%%%%%%%%%%%%%       ||"},
    {"||.. |%|     |%|           .......... |%|         ......%%%%       ||"},
    {"||.. %%%%%%%%%%     |%|   %%%%%%%%%%%% |%|    %%%%           ...   ||"},
    {"||.. |%|. |%|           |%|   .......................|%|%||%||%|   ||"},
    {"||..         |%|       |%|   .......|%|     .......%%%%%%%%%%%%    ||"},
    {"||..|%| |%|%%%|%| |%|   |%|     ....|%| |%|   ....               ..||"},
    {"||..|%| |%| |%|   %%%%%%%%%%%%%      |%| |%|     ...|%||%|.........||"},
    {"||..|%| |%| |%|      |%| %%%%%%   |%|                   .......... ||"},
    {"||..|%|     |%| |%|   |%|  |%| |%| |%| |%|     .........%%%%%%%%   ||"},
    {"||..|%| %%%%%%%%%%%%%%   |%|%%%%%%%%%% |%|  |%|%%%%%%              ||"},
    {"||.............................................  |%|          ...  ||"},
    {"||         ..............               ...............    %%%%%%  ||"},
    {"||..|%| |%| |%|   %%%%%%%%%%%%%      |%| |%|   |%|                 ||"},
    {"||..|%| |%| |%|     |%| %%%%%% |%|   |%|.                          ||"},
    {"||..|%|     |%| |%|  |%|   |%| %%%%%%%%%%%%       .......          ||"},
    {"||..|%| %%%%%%%%%%%%%%   |%|%%%%%%%%%% |%|   |%|%%%%%%             ||"},
    {"||..............................................|%|        ....    ||"},
    {"||         .................           .................           ||"},
    {"#####################################################################"},

};

// GLOBAL VARIABLES
int lives = 3, pacmanx = 2, pacmany = 3, decision_count, paths, random, ghost1step = 0, score = 0, g1x = 1, g1y = 10, g2x = 20, g2y = 66, g3x = 15, g3y = 25, g4x = 10, g4y = 2, paths4 = 0;
char last = ' ', last2 = ' ', last3 = '.', last4 = ' ';
string last_place3 = " ", last_place4, pacman_move;
bool gamerunning = true, forwarding1 = true, upward = true, up_move = false, down_move = false, right_move = true, left_move = false, up, down, up4 = false, down4 = false, right4 = false, left4 = false, rights, lefts;

// FUNCTIONS PROOTYPES DEFINED
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void gotoxy(int x, int y);
void print_maze();
void print_score();
void move_pacman_up();
void move_pacman_down();
void move_pacman_right();
void move_pacman_left();
void ghost_patrol();
void ghost_patrol2();
void ghost_patrol3();
void ghost_patrol4();
void print_lives();
void dead();
void up_wall();
void down_wall();
void right_wall();
void left_wall();
void up_wall4();
void down_wall4();
void right_wall4();
void left_wall4();
void hideCursor();
main()
{
    system("cls");
    print_maze();
    hideCursor();
    while (gamerunning)
    {
        Sleep(100);
        SetConsoleTextAttribute(h, 14);
        gotoxy(pacmany, pacmanx);
        cout << "P";
        SetConsoleTextAttribute(h, 7);
        ghost_patrol();
        ghost_patrol2();
        ghost_patrol3();
        ghost_patrol4();
        print_score();
        print_lives();
        if (GetAsyncKeyState(VK_UP))
        {
            move_pacman_up();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            move_pacman_down();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            move_pacman_right();
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            move_pacman_left();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gamerunning = false;
        }
    }
}
void move_pacman_up()
{
    if (maze[pacmanx - 1][pacmany] == ' ' || maze[pacmanx - 1][pacmany] == '.')
    {
        gotoxy(pacmany, pacmanx);
        cout << " ";
        pacmanx--;
        if (maze[pacmanx][pacmany] == '.')
        {
            maze[pacmanx][pacmany] = ' ';
            score++;
        }
        SetConsoleTextAttribute(h, 14);
        gotoxy(pacmany, pacmanx);
        cout << "P";
        SetConsoleTextAttribute(h, 7);
        dead();
        pacman_move = "up";
    }
}
void move_pacman_down()
{
    if (maze[pacmanx + 1][pacmany] == ' ' || maze[pacmanx + 1][pacmany] == '.')
    {
        gotoxy(pacmany, pacmanx);
        cout << " ";
        pacmanx++;
        if (maze[pacmanx][pacmany] == '.')
        {
            maze[pacmanx][pacmany] = ' ';
            score++;
        }
        SetConsoleTextAttribute(h, 14);
        gotoxy(pacmany, pacmanx);
        cout << "P";
        SetConsoleTextAttribute(h, 7);
        dead();
        pacman_move = "down";
    }
}
void move_pacman_right()
{
    if (maze[pacmanx][pacmany + 1] == ' ' || maze[pacmanx][pacmany + 1] == '.')
    {
        gotoxy(pacmany, pacmanx);
        cout << " ";
        pacmany++;
        if (maze[pacmanx][pacmany] == '.')
        {
            maze[pacmanx][pacmany] = ' ';
            score++;
        }
        SetConsoleTextAttribute(h, 14);
        gotoxy(pacmany, pacmanx);
        cout << "P";
        SetConsoleTextAttribute(h, 7);
        dead();
        pacman_move = "right";
    }
}
void move_pacman_left()
{
    if (maze[pacmanx][pacmany - 1] == ' ' || maze[pacmanx][pacmany - 1] == '.')
    {
        gotoxy(pacmany, pacmanx);
        cout << " ";
        pacmany--;
        if (maze[pacmanx][pacmany] == '.')
        {
            maze[pacmanx][pacmany] = ' ';
            score++;
        }
        SetConsoleTextAttribute(h, 14);
        gotoxy(pacmany, pacmanx);
        cout << "P";
        SetConsoleTextAttribute(h, 7);
        dead();
        pacman_move = "left";
    }
}

void ghost_patrol4()
{
    paths4 = 0;
    up4 = down4 = right4 = left4 = false;
    up_move = down_move = right_move = left_move = false;
    up_wall4();
    down_wall4();
    right_wall4();
    left_wall4();

    if (paths4 == 1)
    {
        if (up4 && !down4 && !right4 && !left4)
        {
            up_move = true;
            last_place4 = "up";
        }
        else if (!up4 && down4 && !right4 && !left4)
        {
            down_move = true;
            last_place4 = "down";
        }
        else if (!up4 && !down4 && right4 && !left4)
        {
            right_move = true;
            last_place4 = "right";
        }
        else if (!up4 && !down4 && !right4 && left4)
        {
            left_move = true;
            last_place4 = "left";
        }
    }
    else if (paths4 == 2)
    {
        if (up4 && right4 && !down4 && !left4)
        {
            if (pacman_move == "up")
            {
                up_move = true;
                last_place4 = "up";
            }
            else if (pacman_move == "right")
            {
                right_move = true;
                last_place4 = "right";
            }
        }
        else if (down4 && left4 && !up4 && !right4)
        {
            if (pacman_move == "down")
            {
                down_move = true;
                last_place4 = "down";
            }
            else if (pacman_move == "left")
            {
                left_move = true;
                last_place4 = "left";
            }
        }
        else if (up4 && down4 && !left4 && !right4)
        {
            if (pacman_move == "up")
            {
                up_move = true;
                last_place4 = "up";
            }
            else if (pacman_move == "down")
            {
                down_move = true;
                last_place4 = "down";
            }
        }
        else if (right4 && left4 && !up4 && !down4)
        {
            if (pacman_move == "right")
            {
                right_move = true;
                last_place4 = "right";
            }
            else if (pacman_move == "left")
            {
                left_move = true;
                last_place4 = "left";
            }
        }
        else if (up4 && left4 && !right4 && !down4)
        {
            if (pacman_move == "up")
            {
                up_move = true;
                last_place4 = "up";
            }
            else if (pacman_move == "left")
            {
                left_move = true;
                last_place4 = "left";
            }
        }
        else if (right4 && down4 && !up4 && !left4)
        {
            if (pacman_move == "down")
            {
                down_move = true;
                last_place4 = "down";
            }
            else if (pacman_move == "right")
            {
                right_move = true;
                last_place4 = "right";
            }
        }
    }
    else if (paths4 == 3)
    {
        if (up4 && down4 && left4 && !right4)
        {
            if (last_place4 != "up")
            {
                down_move = true;
                last_place4 = "down";
            }
            else if (last_place4 != "down")
            {
                up_move = true;
                last_place4 = "up";
            }
            else
            {
                left_move = true;
                last_place4 = "left";
            }
        }
        else if (up4 && down4 && !left4 && right4)
        {
            if (last_place4 != "up")
            {
                down_move = true;
                last_place4 = "down";
            }
            else if (last_place4 != "down")
            {
                up_move = true;
                last_place4 = "up";
            }
            else
            {
                right_move = true;
                last_place4 = "right";
            }
        }
        else if (up4 && !down4 && left4 && right4)
        {
            if (last_place4 != "right")
            {
                left_move = true;
                last_place4 = "left";
            }
            else if (last_place4 != "left")
            {
                right_move = true;
                last_place4 = "right";
            }
            else
            {
                up_move = true;
                last_place4 = "up";
            }
        }
        else if (!up4 && down4 && left4 && right4)
        {
            if (last_place4 != "left")
            {
                right_move = true;
                last_place4 = "right";
            }
            else if (last_place4 != "right")
            {
                left_move = true;
                last_place4 = "left";
            }
            else
            {
                down_move = true;
                last_place4 = "down";
            }
        }
    }
    else if (paths4 == 4)
    {
        if (pacman_move == "right")
        {
            right_move = true;
            last_place4 = "right";
        }
        else if (pacman_move == "left")
        {
            left_move = true;
            last_place4 = "left";
        }
        if (pacman_move == "up")
        {
            up_move = true;
            last_place4 = "up";
        }
        if (pacman_move == "down")
        {
            down_move = true;
            last_place4 = "down";
        }
    }

    if (right_move)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g4y, g4x);
        cout << last4;
        last4 = maze[g4x][g4y + 1];
        g4y++;
        SetConsoleTextAttribute(h, 12);
        gotoxy(g4y, g4x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    else if (left_move)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g4y, g4x);
        cout << last4;
        last4 = maze[g4x][g4y - 1];
        g4y--;
        SetConsoleTextAttribute(h, 12);
        gotoxy(g4y, g4x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    else if (up_move)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g4y, g4x);
        cout << last4;
        last4 = maze[g4x - 1][g4y];
        g4x--;
        SetConsoleTextAttribute(h, 12);
        gotoxy(g4y, g4x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    else if (down_move)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g4y, g4x);
        cout << last4;
        last4 = maze[g4x + 1][g4y];
        g4x++;
        SetConsoleTextAttribute(h, 12);
        gotoxy(g4y, g4x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    pacman_move = " ";
}
void ghost_patrol3()
{
    paths = 0;
    up_move = down_move = right_move = left_move = false;
    up = down = rights = lefts = false;
    up_wall();
    down_wall();
    right_wall();
    left_wall();
    if (paths == 1)
    {
        if (up && !down && !rights && !lefts)
        {
            up_move = true;
            last_place3 = "up";
        }
        else if (!up && down && !rights && !lefts)
        {
            down_move = true;
            last_place3 = "down";
        }
        else if (!up && !down && rights && !lefts)
        {
            right_move = true;
            last_place3 = "right";
        }
        else if (!up && !down && !rights && lefts)
        {
            left_move = true;
            last_place3 = "left";
        }
    }
    else if (paths == 2)
    {
        if (up && rights && !down && !lefts)
        {
            if (last_place3 != "down")
            {
                up_move = true;
                last_place3 = "up";
            }
            else
            {
                right_move = true;
                last_place3 = "right";
            }
        }
        else if (down && lefts && !up && !rights)
        {
            if (last_place3 != "up")
            {
                down_move = true;
                last_place3 = "down";
            }
            else
            {
                left_move = true;
                last_place3 = "left";
            }
        }
        else if (up && down && !lefts && !rights)
        {
            if (last_place3 != "down")
            {
                up_move = true;
                last_place3 = "up";
            }
            else
            {
                down_move = true;
                last_place3 = "down";
            }
        }
        else if (rights && lefts && !up && !down)
        {
            if (last_place3 != "left")
            {
                right_move = true;
                last_place3 = "right";
            }
            else
            {
                left_move = true;
                last_place3 = "left";
            }
        }
        else if (up && lefts && !rights && !down)
        {
            if (last_place3 != "down")
            {
                up_move = true;
                last_place3 = "up";
            }
            else
            {
                left_move = true;
                last_place3 = "left";
            }
        }
        else if (rights && down && !up && !lefts)
        {
            if (last_place3 != "down")
            {
                down_move = true;
                last_place3 = "down";
            }
            else
            {
                right_move = true;
                last_place3 = "right";
            }
        }
    }
    else if (paths == 3)
    {

        if (up && down && lefts && !rights)
        {
            if (last_place3 != "up")
            {
                down_move = true;
                last_place3 = "down";
            }
            else if (last_place3 != "down")
            {
                up_move = true;
                last_place3 = "up";
            }
            else
            {
                left_move = true;
                last_place3 = "left";
            }
        }
        else if (up && down && !lefts && rights)
        {
            if (last_place3 != "up")
            {
                down_move = true;
                last_place3 = "down";
            }
            else if (last_place3 != "down")
            {
                up_move = true;
                last_place3 = "up";
            }
            else
            {
                right_move = true;
                last_place3 = "right";
            }
        }
        else if (up && !down && lefts && rights)
        {
            if (last_place3 != "right")
            {
                left_move = true;
                last_place3 = "left";
            }
            else if (last_place3 != "left")
            {
                right_move = true;
                last_place3 = "right";
            }
            else
            {
                up_move = true;
                last_place3 = "up";
            }
        }
        else if (!up && down && lefts && rights)
        {
            if (last_place3 != "left")
            {
                right_move = true;
                last_place3 = "right";
            }
            else if (last_place3 != "right")
            {
                left_move = true;
                last_place3 = "left";
            }
            else
            {
                down_move = true;
                last_place3 = "down";
            }
        }
    }
    else if (paths == 4)
    {
        if (decision_count != 10)
        {
            right_move = true;
            last_place3 = "right";
        }
        else
        {
            left_move = true;
            last_place3 = "left";
        }

        decision_count++;
    }
    if (right_move)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g3y, g3x);
        cout << last3;
        last3 = maze[g3x][g3y + 1];
        g3y++;
        SetConsoleTextAttribute(h, 10);
        gotoxy(g3y, g3x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    else if (left_move)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g3y, g3x);
        cout << last3;
        last3 = maze[g3x][g3y - 1];
        g3y--;
        SetConsoleTextAttribute(h, 10);
        gotoxy(g3y, g3x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    else if (up_move)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g3y, g3x);
        cout << last3;
        last3 = maze[g3x - 1][g3y];
        g3x--;
        SetConsoleTextAttribute(h, 10);
        gotoxy(g3y, g3x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    else if (down_move)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g3y, g3x);
        cout << last3;
        last3 = maze[g3x + 1][g3y];
        g3x++;
        SetConsoleTextAttribute(h, 10);
        gotoxy(g3y, g3x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
}
void ghost_patrol2()
{
    if (upward)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g2y, g2x);
        cout << last2;
        last2 = maze[g2x - 1][g2y];
        g2x--;
        SetConsoleTextAttribute(h, 13);
        gotoxy(g2y, g2x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    else if (!upward)
    {
        SetConsoleTextAttribute(h, 1);

        gotoxy(g2y, g2x);
        cout << last2;
        last2 = maze[g2x + 1][g2y];
        g2x++;
        SetConsoleTextAttribute(h, 13);
        gotoxy(g2y, g2x);
        cout << "G";
        SetConsoleTextAttribute(h, 7);
        dead();
    }
    if (maze[g2x - 1][g2y] != '.' && maze[g2x - 1][g2y] != ' ')
    {
        upward = !upward;
    }
    else if (maze[g2x + 1][g2y] != '.' && maze[g2x + 1][g2y] != ' ')

    {
        upward = !upward;
    }
}
void ghost_patrol()
{
    if (forwarding1)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g1y, g1x);
        cout << last;
        last = maze[g1x][g1y + 1];
        g1y++;
        SetConsoleTextAttribute(h, 9);
        gotoxy(g1y, g1x);
        cout << "G";
    }
    else if (!forwarding1)
    {
        SetConsoleTextAttribute(h, 1);
        gotoxy(g1y, g1x);
        cout << last;
        last = maze[g1x][g1y - 1];
        g1y--;
        SetConsoleTextAttribute(h, 9);
        gotoxy(g1y, g1x);
        cout << "G";
    }
    SetConsoleTextAttribute(h, 7);
    dead();

    if (maze[g1x][g1y + 1] == '|')
    {
        forwarding1 = !forwarding1;
    }
    else if (maze[g1x][g1y - 1] == '|')
    {
        forwarding1 = !forwarding1;
    }
}
void dead()
{

    if ((pacmanx == g1x && pacmany == g1y) || (pacmanx == g2x && pacmany == g2y) || (pacmanx == g3x && pacmany == g3y) || (pacmanx == g4x && pacmany == g4y))
    {
        lives--;
        gotoxy(g1y, g1x);
        cout << " ";
        gotoxy(g2y, g2x);
        cout << " ";
        gotoxy(g3y, g3x);
        cout << " ";
        gotoxy(g4y, g4x);
        cout << " ";
        gotoxy(pacmany, pacmanx);
        cout << " ";
        pacmanx = 3, pacmany = 2;
        g1x = 1, g1y = 10, g2x = 20, g2y = 66, g3x = 15, g3y = 25, g4x = 10, g4y = 2;
        Sleep(500);
        SetConsoleTextAttribute(h, 14);
        gotoxy(pacmany, pacmanx);
        cout << "P";
        SetConsoleTextAttribute(h, 7);
        Sleep(300);
    }
    if (lives == 0)
    {
        system("cls");
        SetConsoleTextAttribute(h, 12);
        gotoxy(30, 12);
        cout << "GAME OVER!";
        SetConsoleTextAttribute(h, 7);
        Sleep(500);
        gamerunning = false;
    }
}
void up_wall4()
{
    if (maze[g4x - 1][g4y] != '|' && maze[g4x - 1][g4y] != '%' && maze[g4x - 1][g4y] != '#')
    {
        up4 = true;
        paths4++;
    }
    else
    {
        up4 = false;
    }
}

void down_wall4()
{
    if (maze[g4x + 1][g4y] != '|' && maze[g4x + 1][g4y] != '%' && maze[g4x + 1][g4y] != '#')
    {
        down4 = true;
        paths4++;
    }
    else
    {
        down4 = false;
    }
}

void right_wall4()
{
    if (maze[g4x][g4y + 1] != '|' && maze[g4x][g4y + 1] != '%' && maze[g4x][g4y + 1] != '#')
    {
        right4 = true;
        paths4++;
    }
    else
    {
        right4 = false;
    }
}

void left_wall4()
{
    if (maze[g4x][g4y - 1] != '|' && maze[g4x][g4y - 1] != '%' && maze[g4x][g4y - 1] != '#')
    {
        left4 = true;
        paths4++;
    }
    else
    {
        left4 = false;
    }
}
void up_wall()
{
    if (maze[g3x - 1][g3y] != '|' && maze[g3x - 1][g3y] != '%' && maze[g3x - 1][g3y] != '#')
    {
        up = true;
        paths++;
    }
    else
    {
        up = false;
    }
}
void down_wall()
{
    if (maze[g3x + 1][g3y] != '|' && maze[g3x + 1][g3y] != '%' && maze[g3x + 1][g3y] != '#')
    {
        down = true;
        paths++;
    }
    else
    {
        down = false;
    }
}
void right_wall()
{
    if (maze[g3x][g3y + 1] != '|' && maze[g3x][g3y + 1] != '%' && maze[g3x][g3y + 1] != '#')
    {
        rights = true;
        paths++;
    }
    else
    {
        rights = false;
    }
}
void left_wall()
{
    if (maze[g3x][g3y - 1] != '|' && maze[g3x][g3y - 1] != '%' && maze[g3x][g3y - 1] != '#')
    {
        lefts = true;
        paths++;
    }
    else
    {
        lefts = false;
    }
}
void print_score()
{
    gotoxy(0, 25);
    cout << "SCORE:" << score << " ";
}
void print_lives()
{
    gotoxy(0, 26);
    cout << "LIVES: " << lives;
}
void print_maze()
{
    SetConsoleTextAttribute(h, 1);
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 71; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    SetConsoleTextAttribute(h, 7);
}
void gotoxy(int x, int y)
{

    COORD coordinates;

    coordinates.X = x;

    coordinates.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void hideCursor()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}