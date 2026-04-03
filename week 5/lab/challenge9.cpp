#include<iostream>
using namespace std;
main()
{
    float weight,cost;
    char ticket_type;
    cout<<"Enter your ticket type(b foe buisseness and e for econmy):";
    cin>>ticket_type;
    cout<<"Enter the weight of your luggage:";
    cin>>weight;
    if(ticket_type=='b'&&weight<=40)
    {
        cost=15000;
    }
    if(ticket_type=='e'&&weight<=25)
    {
        cost=8000;

    }
    if(ticket_type=='b'&&weight>40)
    {
        cost=15000+((weight-40)*1000);
    }
    if(ticket_type=='e'&&weight>25)
    {
        cost=15000+((weight-25)*500);
    }
    cout<<"total amount applicable to passenger:"<<cost;
}