#include<iostream>
using namespace std;

main()
{
    string day;
    float purchase,discount,payable;
    cout<<"Enter the day:";
    cin>>day;
    cout<<"Enter the total purchase amount:";
    cin>>purchase;

    if(day=="sunday")
    {
        discount=purchase*10/100;
        payable=purchase-discount;
        cout<<"Total payable"<<payable;


    }
    else
    {
        cout<<"totalpayable"<<purchase;
    }
        
     
}