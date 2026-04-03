#include<iostream>
using namespace std;
main()
{
    char service,DN;
    float minutes_used;
    float total_cost;

    cout<<"Enter the which type of the customer you are (residental or premium)select(r/p):";
    cin>>service;
    cout<<"Enter the number of mins you used for service:";
    cin>>minutes_used;

    if(service=='r')
    {
        if(minutes_used<=50)
        {
            total_cost=10;
            cout<<"The total charge are:"<<total_cost<<"$";
        }
        if(minutes_used>50)
        {
            total_cost=10+((minutes_used-50)*0.20);
            cout<<"The total charge are:"<<total_cost<<"$";
        }
        
    }
    if(service=='p')
    {
        cout<<"(press D for Day service and N for night service):";
        cin>>DN;
    }

        if(DN=='D')
        {
            if(minutes_used<=75)
            {
                total_cost=25;
                cout<<"The total charge are:"<<total_cost<<"$";
            }
            if(minutes_used>75) 
            {
                total_cost=25+((minutes_used-75)*0.10);
                cout<<"The total charge are:"<<total_cost<<"$";

            }
        }
        if(DN=='N')
        {
            if(minutes_used<=100)
            {
               total_cost=25;
               cout<<"The total charge are:"<<total_cost<<"$"; 
            }
            if(minutes_used>100)
            {
                total_cost=25+((minutes_used-100)*0.05);
                cout<<"The total charge are:"<<total_cost<<"$";
            }
        }
    
    
}