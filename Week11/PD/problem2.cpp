#include <iostream>
using namespace std;
main()
{
    string move[] = {"Gladiator", "StarWars", "Terminator", "TakingLive", "TombRider"};
    double dis = 0;
    string name;
    cout << "Enter the name of movie:";
    cin >> name;

    for (int i = 0; i < 5; i++)
    {
        if (name == "starWars" || name == "TombRider")
        {
            dis = 5;
        }
        else
        {
            dis = 10;
        }
    }
    float discount = 500 - (500 * (dis / 100));
    cout << "Actual prize:500" << endl;
    cout << "Discount is :" << dis<<"%"<<endl;
    cout << "Discounted prize :" << discount;
}