#include<iostream>
using namespace std;
main()
{
    string brand;
    int cost;
    cout<<"Enter brand name";
    cin>>brand;
    cout<<"Enter the cost of dress";
    cin>>cost;

        if(brand=="MTJ"||brand=="mtj")
        {
            if(cost<1500)
            {
                cout<<"purchase the dress";

            }
        
        
            else{
            cout<<"donot buy the dress";
                }
            }    


}