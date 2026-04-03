#include <iostream>
using namespace std;
main()
{
    int num[10];
    int smallest=num[0];
    cout << "Enter the 10 number:";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        if (num[i]<smallest)
        {
          smallest=num[i];
        }
    }
    
    cout<<smallest;
}