#include<iostream>
using namespace std;

main(){
cout<<"Enter the initial velocity(m/s):";
int intialVelocity;
cin>>intialVelocity;
cout<<"Enter Accleration(m/s^2):";
int Accleration;
cin>>Accleration;
cout<<"Enter time:";
int time;
cin>>time;
int finalVelocity;
finalVelocity=Accleration*time+intialVelocity;
cout<<"The final velocity is(m/s):"<<finalVelocity;




}