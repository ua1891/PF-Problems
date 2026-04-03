#include<iostream>
using namespace std;
 void tes(string day,int p);

main(){
       int price=0;
       string dy;
       cout<<"Enter the day of purchase:";
       cin>>dy;
       cout<<"Enter price:";
       cin>>price;
       tes(dy,price);
}
void tes(string day,int p){
    float discount=0;
    if (day=="sunday")
    {
         discount=p-(p*10/100.0);

    }
    else{
         discount=p-(p*5/100.0);
    }
    cout<<"Discounted price is:"<<discount;
}