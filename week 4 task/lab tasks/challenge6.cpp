#include<iostream>
using namespace std;

  main(){
int age1, age2, age3;
string name1;
string name2;
string name3;

cout<<"Enter the name  of your first  brother:";
cin>>name1;
cout<<"Enter the age of your first brother:";
cin>>age1;
cout<<"Enter the name of your second brother:";
cin>>name2;

cout<<"Enter the age of your second brother:";
cin>>age2;

cout<<"Enter the name of your third brother:";
cin>>name3;

cout<<"Enter the age of your age brother:";
cin>>age3;

  if(age1<age2){

   if(age1<age3)
  cout<<"the younger brother is:"<<name1;

}

if(age2<age1){

   if(age2<age3)
  cout<<"the younger brother is:"<<name2;

}
if(age3<age2){

   if(age3<age1)
  cout<<"the younger brother is:"<<name3;

}







   }