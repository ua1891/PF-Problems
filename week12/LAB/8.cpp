#include<iostream>
using namespace std;
 void tes(string day,int p);

main(){
       int price=0;
       string dy;
       cout<<"Enter price:";
       cin>>price;
       cout<<"Enter the day of purchase:";
       cin>>dy;
       tes(dy,price);
}
void tes(string day,int p){
    if (day=="sunday")
    {
        float discount=p-(p*10/100.0);
        cout<<"Discounted price is:"<<discount;


    }
    else{
        cout<<"Discounted price is:"<<p;
    }
}