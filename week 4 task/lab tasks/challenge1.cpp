#include<iostream>
using namespace std;

  main(){
float amount;
float payable;
cout<<"Enter the amount:";
cin>>amount;

float discount;

  if(amount<=5000){

discount=amount*0.05;
 payable=amount-discount;
}

  if(amount>5000){
discount=amount*0.1;
 payable=amount-discount;


}
    
 

cout<<"price after discount is :"<<payable;



}