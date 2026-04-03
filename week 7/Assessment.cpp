#include <iostream>
using namespace std;

main()
{
    int factorial, multiply = 1;
    cout << "Enter a number of your choice:(>0)";
    cin >> factorial;

    for (int itre = factorial; itre >= 1; itre--)
    {
        multiply = multiply * itre;
    }
    cout << multiply;
}