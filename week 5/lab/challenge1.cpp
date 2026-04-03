#include<iostream>
using namespace std;
main()
{
   
    float total_amount;
    float discount;
       
        cout<<"Enter the total amount purchase";
        cin>>total_amount;
      discount=total_amount*10/100;
       float payable=total_amount-discount;
     cout<<"total amount payable"<<payable;   
            

}