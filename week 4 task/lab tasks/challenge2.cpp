#include<iostream>

using namespace std;

  main(){
float salary, laptopPrice;

cout<<"Enter your monthly salary:";
cin>>salary;

cout<<"Enter your laptop price:";
cin>>laptopPrice;


float advance=(salary/2)*6;

 if(advance>=laptopPrice){
cout<<"you can buy the laptop";


}

if(advance<laptopPrice){

float month=(laptopPrice-advance)/salary;
cout<<"month needed:"<< month;

}




}