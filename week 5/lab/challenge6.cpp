#include<iostream>
using namespace std;
main()
{
    string day,month;
    float purchase,discount,payable;
    cout<<"Enter the day";
    cin>>day;
    cout<<"Enter the month";
    cin>>month;
    cout<<"Enter total purchase amount";
    cin>>purchase;

    if(day=="sunday"&&(month=="october"||month=="march"))
    {
        discount=purchase*10/100;
        payable=purchase-discount;
        cout<<"amount after discount:"<<payable;
    }
     
}
