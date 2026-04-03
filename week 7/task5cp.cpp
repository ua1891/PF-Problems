#include<iostream>
using namespace std;

main()
{
    int number,sum_of_digits;
    /*first I take a mode than ad mode in sum_digit
    varaible than to reduce size dive number with10*/
    cout<<"Enter a Number:";
    cin>>number;

    while(number>0)
    {
       int mode=number%10;
       sum_of_digits=sum_of_digits+mode;
       number=number/10; 
     }
       cout<<"sum:"<<sum_of_digits;
}