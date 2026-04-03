#include<iostream>
using namespace std;

  main(){

int num1,num2,num3;
float discount;

cout<<"Enter the number of red roses purachased:";
cin>>num1;

cout<<"Enter the number of white roses purachased:";
cin>>num2;
cout<<"Enter the number of Tulips purachased:";
cin>>num3;

 float total=(num1*2.00)+(num2*4.10)+(num3*2.50);

   if (total>200){
    discount=total -(total*20/100);

}

cout<<"Orignal price is:"<<total<<endl;
cout<<"price after dicount:"<<discount<<endl;


      }