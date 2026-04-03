#include<iostream>
using namespace std;
 main()
 {
    string day;
    float purchase;
    cout<<"Enter the day";
    cin>>day;
    cout<<"Enter total purchase";
    cin>>purchase;

    if(day=="sunday")
    {
        if(purchase>5000)
        {
            float discount=purchase*10/100;
            float payable=purchase-discount;
            cout<<"amount after discount"<<payable;

        }
    }
 }