#include<iostream>
using namespace std;

main()
{
    int number1,number2,HCF,LCM;
    int pre_save1,pre_save2=number2;
    cout<<"Enter first numbers:";
    cin>>number1;
    cout<<"Enter second numbers:";
    cin>>number2;
    pre_save1=number1;
    pre_save2=number2;
    /*Now first of all I find HCF of two number in loop*/
    while (number2>0)
    {
         int next=number2;
         number2=number1%number2;
         number1=next;
    }
     HCF=number1;
     /*Because number 2 is become 0*/
    LCM=pre_save1*pre_save2/HCF;
    cout<<"GCD:"<<HCF<<endl;
    cout<<"LCM:"<<LCM;
}