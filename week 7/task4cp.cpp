#include<iostream>
using namespace std;
main()
{
    float mod,divide;
    int digit,number,count=0;
    cout<<"Enter a  number:";
    cin>>number;
    cout<<"Enter a digit to check:";
    cin>>digit;
    while (number!=0)
    {
      mod= number%10;
      number=number/10;
      if (mod==digit)
      {
        count++;
      }
    }
    cout<<"Frequency:"<<count;
   
    

}