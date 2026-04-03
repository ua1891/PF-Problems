#include<iostream>
using namespace std;
  main(){

string country;
float price;
float discount;
float DoscountedPrice;
  cout<<"Enter country name:";
cin>>country;

cout<<"Enter the ticket price";
cin>>price;

  if(country=="Ireland"){
 discount=price*10/100;
DoscountedPrice=price-discount;

cout<<"Discounted price is:"<<DoscountedPrice;

}

 else{
discount=price*0.05;

DoscountedPrice=price-discount;
cout<<"Discounted price is:"<<DoscountedPrice;
}






   }