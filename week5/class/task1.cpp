#include <iostream>
using namespace std;
 main() 
 {

    int num1,num2,num3;
    cout<<"Enter the number one";
    cin>>num1;
    cout<<"Enter the number two ";
    cin>>num2;

    cout<<"Enter the number three";
    cin>>num3;
    if(num1=50)
    {
        cout<<"one of the number is too large";
    }
    else if(num1>50)
    {
       cout<<"one of the number is two large";
    
    }
    else if(num2>=50)
    {
      cout<<"one of the is too large";
    }
    else if(num3>=50)
    {
        cout<<"one of the is too large";
    }
    else
    {
        cout<<"no number is larger than 50";
    }
 }