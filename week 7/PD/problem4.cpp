#include<iostream>
using  namespace std;
main()
{
    float integer=0;
    int number=0;
    float count_2=0,count_3=0,count_4=0;
    float p1=0,p2=0,p3=0;

    cout<<"Enter the integer:";
    cin>>integer;

    for (int i = 0; i < integer; i++)
    {
        cout<<"Enter numbers:";
        cin>>number;

        if (number%2==0)
        {
            count_2++;
        }
         if (number%3==0)
        {
            count_3++;
        }
         if (number%4==0)
        {
            count_4++;
        }      
    }

    p1=(count_2/integer)*100.0;
    p2=(count_3/integer)*100.0;
    p3=(count_4/integer)*100.0;

    cout<<"p1:"<<p1<<".00%"<<endl;
    cout<<"p2:"<<p2<<".00%"<<endl;
    cout<<"p3:"<<p3<<".00%"<<endl;
    
}