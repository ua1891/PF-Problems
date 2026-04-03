#include <iostream>
using namespace std;

main()
{
    float washing_machine;
    int age=0,toy_price=0,count_toys=0,current_money=10;
    int total_toy_Money=0;
    float remaining;
    int money_recieved=0;

    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter the price of washing machine:";
    cin>>washing_machine;
    cout<<"Enter the unit price of your toy:";
    cin>>toy_price;

   for(int x= 1; x <= age; x++)
   {
       
        if (x%2==0)
        {
            money_recieved=money_recieved+current_money;
            money_recieved=money_recieved-1;
            current_money+=10;
                
        }
        else 
        {
            count_toys++;
        }        
   }
        total_toy_Money=count_toys*toy_price;
        float  Money_saved=total_toy_Money+money_recieved;

   if(Money_saved>=washing_machine)
   {
      cout<<"YES!"<<endl;
      remaining=Money_saved-washing_machine;
      cout<<remaining;
    }
    else
    {
        cout<<"NO!"<<endl;
        remaining=washing_machine-Money_saved;
        cout<<remaining;
    }   
}
