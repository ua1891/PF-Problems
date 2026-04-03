#include <iostream>
using namespace std;
// function prototype.
bool setGravityStatus();
int timeTick(char arr[5][5], int time);
void displayWorld(char arr[5][5]);
int tick(char array[5][5]);
// Data structure.
bool gravity;
bool blackHool = true;
char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};
main()
{
    gravity = false;
    setGravityStatus();
    cout << " orignal Galaxy:" << endl;
    displayWorld(objects);
    cout << endl;
    cout << "Galaxy after change:" << endl;
    tick(objects);
}
void displayWorld(char arr[5][5])
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
bool setGravityStatus()
{
    gravity = true;
    return gravity;
}
int timeTick(char arr[5][5], int time)
{ // we pass thiis function to another loop orfunction in which loop run and then enter in this function and continue this process.
    if (time < 3)
    {
        for (int i = 3; i >= 0; i--)
        {
            for (int j = 0; j < 5; j++)
            {
                if (arr[i][j] == '#')
                {
                    if (arr[i + 1][j] == '-')
                    {
                        arr[i + 1][j] = arr[i][j];
                        arr[i][j] = '-';
                    }
                }
            }
        }
        if (blackHool == true)
        {

            for (int j = 0; j < 5; j++)
            {
                if (arr[4][j] == '#' && arr[0][j] == '-')
                {
                    arr[0][j] = arr[4][j];
                    arr[4][j] = '-';
                }
            }
        }
    }
}
int tick(char array[5][5])
{
    for (int tick = 0; tick < 3; tick++)
    {
        timeTick(objects, tick);
        cout << "For:" << tick + 1 << " Tick." << endl;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
    }
}
