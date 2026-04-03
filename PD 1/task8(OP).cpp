#include<iostream>
using namespace std;

 main(){
float vegetableprice;
float fruitprice;
int vegetableinkgs;
int fruitsinkgs;
float totalpriceofvegetable;
float totalpriceoffruits;
float totalearningincoins;
float totalearninginrupees;


cout<<"Enter vegetable price per kilogram (in coins):";
cin>> vegetableprice;

cout<<"fruit price per kilogram(in coins):"<<endl;
cin>> fruitprice;

cout<<" Enter total kilograms of vegetable:"<<endl;
cin>>vegetableprice;

cout<<"Enter total kilograms of fruits:"<<endl;
cin>>totalpriceoffruits;


totalearninginrupees=(vegetableprice*vegetableinkgs+fruitprice*fruitsinkgs)/1.94;

cout<<"Total earning in rupees is:"<<totalearninginrupees; 





  }