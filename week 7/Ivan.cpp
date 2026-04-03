#include <iostream>
using namespace std;

main()
{
    int inherited_money = 0, starting_year = 1800;
    /*Two variable in which we have already the values stored*/
    int desired_year = 0, Ivan_age = 18;

    cout << "Enter Inherited money which you recieved:";
    cin >> inherited_money;
    cout << "Enter year:";
    cin >> desired_year;

    for (starting_year = 1800; starting_year <= desired_year; starting_year++)
    {
        if (starting_year % 2 == 0)
        {
            inherited_money -= 12000;
        }
        else if (starting_year != 0)
        {
            inherited_money -= 12000 + 50 * (Ivan_age);
        }
        Ivan_age++;
    }
    if (inherited_money > 0)
    {
        cout << "YES!";
        cout << " He wiil live a carefree free life and will have" << inherited_money << " dollars left.";
    }
    else
    {
        inherited_money *= -1;
        cout << "He will need " << inherited_money << " dollars to survive.";
    }
}