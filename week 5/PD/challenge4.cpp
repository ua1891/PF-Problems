#include<iostream>
using namespace std;
main()
{
    int date;
    string month;
    cout<<"Enter the date of Birth:";
    cin>>date;
    cout<<"Enter the Month of Birth: ";
    cin>>month;
    if((date>=21&& month=="march")||(month=="april"&& date<=19))
    {
        
        cout<<"zodiac Aries";
        
    }
    else if((date>=20&&month=="April")||(date<=20&&month=="may"))
    {
            cout<<"Tarusus";    
    }
    else if((date>=21&&month=="may")||(date<=20&&month=="june"))
    {
            cout<<"Gemini";    
    }
    else if((date>=21&&month=="june")||(date<=22&&month=="july"))
    {
            cout<<"cancer";    
    }
    else if((date>=23&&month=="july")||(date<=22&&month=="August"))
    {
            cout<<"leo";    
    }
    else if((date>=23&&month=="august")||(date<=22&&month=="september"))
    {
            cout<<"vigro";    
    }
    else if((date>=23&&month=="september")||(date<=22&&month=="october"))
    {
            cout<<"libia";    
    }
    else if((date>=23&&month=="october")||(date<=21&&month=="november"))
    {
            cout<<"scorpio";    
    }
    else if((date>=22&&month=="november")||(date<=21&&month=="December"))
    {
            cout<<"Sagittarius";    
    }
    else if((date>=22&&month=="December")||(date<=19&&month=="january"))
    {
            cout<<"capricorn";    
    }
    else if((date>=20&&month=="january")||(date<=18&&month=="february"))
    {
            cout<<"Aquarius";    
    }
    else if((date>=19&&month=="february")||(date<=20&&month=="march"))
    {
            cout<<"Pisces";    
    }
    
    
    
    
    
 

    

    
}
