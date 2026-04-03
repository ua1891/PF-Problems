#include<iostream>
using namespace std;
 main()
 {
     string day,month;
     float purchase,discount,payable;
     cout<<"Enter the day:";
     cin>>day;
     cout<<"Enter the month:";
     cin>>month;
     cout<<"Enter total purchase amount:";
     cin>>purchase;
     
     if(day=="sunday" && (month=="october"||month=="march"||month=="august"))
     {
        discount==purchase*10/100;
     }
     else if(day=="monday"&&(month=="november"||month=="december"))
     {
        discount=purchase*5/100;
     }    
    payable=purchase-discount;
    cout<<"total after discount"<<payable;
    
    
 }    