#include <iostream>
using namespace std;
main()
{
    int num[10];
    int largest=num[0];
    cout<<"Enter the 10 number:";
    for (int i = 0; i < 10; i++)
    {
        cin>>num[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (num[i]>largest)
        {
            largest=num[i];
        }
        
    }
    cout<<largest;
}