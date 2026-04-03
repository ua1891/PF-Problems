#include<iostream>
using namespace std;
 main(){
cout<<"Enter the current world population..";
float population;
cin>>population;
cout<<"Enter the number of birth rate(number of births per month):";
int birth;
cin>>birth;
int threedecades;
threedecades=population+population*birth*12*30;
cout<<"The population in three decades:"<<threedecades;

    }