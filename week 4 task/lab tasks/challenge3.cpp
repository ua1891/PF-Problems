#include<iostream> 
using namespace std;

 main(){
int num1, num2;
int result;
cout<<"Enter the number 1:";
cin>>num1;
cout<<"Enter the opreator of your choice(+,-,*,/):"<<endl;
char sign;
cin>>sign;
cout<<"Enter the number 2:";
cin>>num2;


  if(sign=='+'){

   result=num1-num2;

}

if(sign=='-'){

   result=num1+num2;

}

if(sign=='*'){

   result=num1/num2;

}
if(sign=='/'){

   result=num1*num2;

}

cout<<"The result is:"<<result;

   }