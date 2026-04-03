#include <iostream>
using namespace std;
main()
{
    int num[10];
    cout << "Enter the 10 number:";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    for (int j = 9; j >= 0; j--)
    { 
        cout<<num[j]<<" ";
    }

}