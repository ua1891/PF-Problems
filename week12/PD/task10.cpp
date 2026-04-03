#include <iostream>
using namespace std;
void discount(string country, int price);
main()
{
    while (true)
    {

        string name;
        int ticketPrice = 0;
        cout << "Enter name country:";
        cin >> name;
        cout << "Enter ticket price:";
        cin >> ticketPrice;
        discount(name, ticketPrice);
        cout<<endl;
    }
}
void discount(string country, int price)
{
    float discounted = 0;
    if (country == "Pakistan")
    {
        discounted = price - (price * 5 / 100.0);
    }
    if (country == "Ireland")
    {
        discounted = price - (price * 10 / 100.0);
    }
    if (country == "India")
    {
        discounted = price - (price * 20 / 100.0);
    }
    if (country == "England")
    {
        discounted = price - (price * 30 / 100.0);
    }
    if (country == "Canada")
    {
        discounted = price - (price * 45 / 100.0);
    }
    cout << "Price of the ticket after discount is:"
         << discounted;
}