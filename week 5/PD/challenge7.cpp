#include<iostream>
using namespace std;

main()
{
    string month;
    int number_of_stays;
    float studio,Apartment,totalstudio,totalApartment;
    cout<<"Enter month(May, June, July, August, September, October):";
    cin>>month;
    cout<<"Enter number of stays integer( within the range [0...200]):";
    cin>>number_of_stays;
    
    if(month=="May"||month=="october")
    {
        if(number_of_stays<=7)
        {
            totalstudio=number_of_stays*50;
        }
        if(number_of_stays>7)
        {
            studio=number_of_stays*50;
            totalstudio=studio-(studio*0.05);  
        }
        if(number_of_stays>=14)
        {
         Apartment=number_of_stays*65;
        }
         if(number_of_stays>14)
         {
         studio=number_of_stays*50;
         totalstudio=studio-(studio*0.3);
         Apartment=number_of_stays*65;
         totalApartment=Apartment-(Apartment*0.1);
        }
    }

     if(month=="june"||month=="september")
     {
        if(number_of_stays<=14)
        {
             Apartment=number_of_stays*68.70;
             studio=number_of_stays*75.20;
        }
        if(number_of_stays>14)
        {
            Apartment=number_of_stays*68.70;
            totalApartment=Apartment-(Apartment*0.1);
            studio=(number_of_stays*75.20);
            totalstudio=studio-(studio*0.20);
        }
     }
        if(month=="july"||month=="August")
        {
            totalstudio=number_of_stays*76;
            if(number_of_stays<=14)
            {
                totalApartment=number_of_stays*77;
            }
            if(number_of_stays>14)
            {
                Apartment=number_of_stays*77;
                totalApartment=Apartment-(Apartment*0.1);
            }        
        }
        
     
     cout<<"Apartment :"<<totalApartment<<"$"<<endl;
     cout<<"Studio:"<<totalstudio<<"$";

}