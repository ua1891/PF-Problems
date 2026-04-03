#include <iostream>
using namespace std;
main()
{
    int number, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter five numbers:";
        cin >> number;
        sum += number;
    }
    cout << "sum is:" << sum;
}