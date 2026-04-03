#include <iostream>
using namespace std;
main()
{
    string name_fruit;
    string fruit[] = {"peach", "apple", "gava", "watermelon"};
    int price[] = {60, 70, 40, 30};
    int kg;
    int total = 1;
    cout << "Enter the fruit name:";
    cin >> name_fruit;
    cout << "Enter the total weight:";
    cin >> kg;

    for (int i = 0; i < 4; i++)
    {
        if (fruit[i] == name_fruit)
        {
            total = price[i] * kg;
        }
    }
    cout << "Total price is :" << total;
}
