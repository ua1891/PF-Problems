#include <iostream>
using namespace std;
main()
{
    int num[3];
    int transformation;
    cout << "How many time you want transformation:";
    cin >> transformation;
    cout << "Enter te array of number:";

    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }

    for (int j = 0; j < transformation; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (num[i] % 2 == 0)
            {
                num[i] -= 2;
            }
            else
            {
                num[i] += 2;
            }
        }
    }
    for (int result = 0; result < 3; result++)
    {
        cout << num[result]<<" ";
    }
}