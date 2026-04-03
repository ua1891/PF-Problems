#include <iostream>
using namespace std;
main()
{
     int number=0;
    
     cout<<"Enter the number:";
     cin>>number;
     int initialize=0;

     for ( initialize=1;initialize<=number;initialize++)
     {
        
        if (initialize%4==0)
        {
         cout<<initialize*10<<endl;  
        }
        else 
        {
           cout<< initialize<<endl;
        }      
       
     }
     

}