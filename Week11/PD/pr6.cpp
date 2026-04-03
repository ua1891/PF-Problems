#include <iostream>
using namespace std;
main()
{
    int x;
    cout << "Enter the size of array:";
    cin >> x;
    string name[x];
    int count = 0, pencil_switch = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> name[i];
        count++;
    }
    for (int i = 0; i < x; i++)
    {
        if (i == 0)
        {
            pencil_switch=pencil_switch;
        }
        else if (name[i] == name[i + 1])
        {
            pencil_switch=pencil_switch;
        
        }
        else
        {
            pencil_switch++;
        }
    }

    int colors_time = count * 2;
    int pencil_change = pencil_switch * 1;
    int total = colors_time + pencil_change;

    cout << "color pattern time is:" << total;
}