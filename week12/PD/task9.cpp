#include <iostream>
using namespace std;
void reverse(string check);
main()
{
    string input;
    cout << "Enter word:";
    cin >> input;
    reverse(input);
}
void reverse(string check)
{
    if (check == "true")
    {
        cout << "False";
    }
    if (check == "false")
    {
        cout << "true";
    }
}