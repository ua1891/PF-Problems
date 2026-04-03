#include<iostream>
using namespace std;
main()
{
    string temp,humidity;
    cout<<"Enter  tempreture:";
    cin>>temp;
    cout<<"Enter humidity ";
    cin>>humidity;

    if(temp=="warm")
    {
        if(humidity=="dry")
        {
            cout<<"Play tennis";
        }
        if(humidity=="humid")
        {
            cout<<"swim";
        }
    }
    if(temp=="cold")
    {
        if(humidity=="dry")
        {
            cout<<"Play basketball";
        }
        if(humidity=="humid")
        {
            cout<<"watch tv ";
        }
    }
}