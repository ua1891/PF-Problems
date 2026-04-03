#include<iostream>
using namespace std;

  main(){
int num;
char word;
 float perimeter;

cout<<"Enter the integer number(sides or radius):";
cin>>num;

cout<<"Enter the letter:";
cin>>word;


    if(word=='c'){
   perimeter=6.28*num;
 }

if(word=='s'){
perimeter=4*num;
   }


cout<<"The perimeter is:"<<perimeter;

     }