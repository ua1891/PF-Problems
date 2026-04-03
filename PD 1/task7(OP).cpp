#include<iostream>
using namespace std;
 main(){
float adultTicketPrice;
string name;
float childTicketPrice;
float childTicketSold;
float percentageDonatedTocharity;
float adultTicketSold;
float amountgeneratedfromsales;


cout<<"Enter the movie name:";
cin>>name;

cout<<"Enter the adult ticket price:";
cin>>adultTicketPrice;

cout<<"Enter the child ticket price:";
cin>>childTicketPrice;

cout<<"Enter the adult ticket sold:";
cin>>adultTicketSold;
cout<<"Enter the child ticket sold";
cin>>childTicketSold;

cout<<"Enter the percentage of the amount to be donated to charity:";
float Donatedtocharity;
cin>> Donatedtocharity;


amountgeneratedfromsales= (adultTicketSold*adultTicketPrice)+(childTicketPrice*childTicketSold);


percentageDonatedTocharity=(Donatedtocharity/100)*amountgeneratedfromsales;
 

float AmountRemainig;

 AmountRemainig=amountgeneratedfromsales-percentageDonatedTocharity;

cout<<"Total amount generated from ticket sales:"<<amountgeneratedfromsales<<endl;

cout<<"Donation to charity(10%):"<<percentageDonatedTocharity<<endl;
cout<<"Amount Remainig after Donation:"<<AmountRemainig<<endl;
cout<<"Remaining amount after Donation:"<< AmountRemainig<<endl;



}