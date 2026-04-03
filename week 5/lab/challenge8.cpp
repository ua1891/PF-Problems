#include<iostream>
using namespace std;
main()
{
    string day,month;
    float price,discount,payable;
    cout<<"Enter the total purchase amount:";
    cin>>price;
    cout<<"Enter the day of purchase:";
    cin>>day;
    cout<<"Enter the month of purchase:";
    cin>>month;

    if(day=="sunday"&& month=="october")
    {
        discount=price*10/100;
        payable=price-discount;
        cout<<"price payable"<<payable;
    }
     else if((day=="thursday")&&(month=="novmber"))
    {
        discount=price*10/100;
        payable=price-discount;
        cout<<"price payable"<<payable;
    }
}