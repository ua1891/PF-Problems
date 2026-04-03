#include <iostream>
using namespace std;
main()
{
    int num1=0,digits;
    cout<<"Enter number:";
    cin>>num1;
    while (num1>0)     
    {
       num1=num1/10; 
        digits++;
         
    }
    cout<<"total number of digits are:"<<digits;

}