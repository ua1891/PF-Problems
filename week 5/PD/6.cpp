#include<iostream>
using namespace std;
main()
{
   string fruit,day;
   float price,payable;
   float Quantity;

   cout<<"Enter the fruit name(banana/apple/orange/grapefruit/kiwi/pineapple/grapes):";
   cin>>fruit;
   cout<<"Enter the day of purchase:";
   cin>>day;
   cout<<"Enter the quantity:";
   cin>>Quantity;

   if(day!="sunday"&&fruit=="banana")
   {
        payable=Quantity*2.50;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day!="sunday"&&fruit=="apple")
   {
        payable=Quantity*1.20;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day!="sunday"&&fruit=="orange")
   {
        payable=Quantity*0.85;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day!="sunday"&&fruit=="grape fruit")
   {
        payable=Quantity*1.45;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day!="sunday"&&fruit=="kiwi")
   {
        payable=Quantity*2.70;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day!="sunday"&&fruit=="pineapple")
   {
        payable=Quantity*5.50;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day!="sunday"&&fruit=="grapes")
   {
        payable=Quantity*3.85;
        cout<<"payable amount is"<<payable<<"$";
   }


    else if(day=="sunday"&&fruit=="banana")
   {
        payable=Quantity*2.70;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day=="sunday"&&fruit=="apple")
   {
        payable=Quantity*1.25;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day=="sunday"&&fruit=="orange")
   {
        payable=Quantity*0.90;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day=="sunday"&&fruit=="grape fruit")
   {
        payable=Quantity*1.60;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day=="sunday"&&fruit=="kiwi")
   {
        payable=Quantity*3.00;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day=="sunday"&&fruit=="pineapple")
   {
        payable=Quantity*5.60;
        cout<<"payable amount is"<<payable<<"$";
   }
   else if(day=="sunday"&&fruit=="grapes")
   {
        payable=Quantity*4.20;
        cout<<"payable amount is"<<payable<<"$";
   }
   
   else{
        cout<<"error";
   }

}