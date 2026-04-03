#include<iostream>
using namespace std;

 main(){
int population;
int birth;
cout<<"Enter the current world population:";
cin>>population;
cout<<"Enter the NO.of child birth per month";
cin>>birth;
int oneyearpopulation;
oneyearpopulation=population*birth*12;
int threedecades;
threedecades=oneyearpopulation*30;
cout<<"The world poulation after three Decades is:"<<threedecades;




}