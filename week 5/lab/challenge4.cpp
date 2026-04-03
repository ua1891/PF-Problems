#include<iostream>
using namespace std;
main()
{
    string day;
    float purchase,discount,payable;
    cout<<"Enter the day:";
    cin>>day;
    cout<<"Enter total purchase amount";
    cin>>purchase;

    if(day=="sunday"&&purchase>5000)
    {
        discount=purchase*10/100;
    }
    else if(day!="sunday")
    {
        discount=purchase*5/100;
    }
    payable=purchase-discount;
    cout<<"total payable:"<<payable;
}
