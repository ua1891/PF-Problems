#include<iostream>
using namespace std;
main()
{
    string name;
    float purchase,discount,payable;
    cout<<"Enter the day";
    cin>>name;
    cout<<"Enter the total price:";
    cin>>purchase;
    if(name=="sunday")
    {
        discount=purchase*10/100;
    }
    else if(name=="monday")
    {
        discount=purchase*8/100;
    }
    else{
        discount=purchase*5/100;
     }

    payable=purchase-discount;
    cout<<"total payable"<<payable;
}