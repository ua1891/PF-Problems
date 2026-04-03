#include <iostream>
using namespace std;
main()
{
    int power = 0;
    cout << "Enter the power of 2:";
    cin >> power;
    cout<<"1 ";
    for (int i = 1; i <= power; i++)
    {
        if (i % 2 == 0)
        {
            int value = 1;
            for (int x = 1; x <= i; x++)
            {
                value = value * 2;
            }
            cout << value << " ";
        }
    }
}
