#include<iostream>
using namespace std;

main (){
cout<<"Enter the name of person:";
string name;
cin>>name;

cout<<"Enter the target weight loss in kilograms";
float kilograms;
cin>>kilograms;

float daysRequried;
daysRequried=kilograms*15;

cout<<name<<"will need "<<daysRequried <<" to loss"<<kilograms<<"kilograms of weight by following the doctor's suggestions";

 }