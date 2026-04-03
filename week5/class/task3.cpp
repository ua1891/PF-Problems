#include<iostream>
using namespace std;
main()
{

    string name,password;

   cout<<"lets begin.."<<endl;
   cout<<"who's there:"<<endl;
   cin>>name;
    if(name=="other")
    {
        cout<<"I don't know";
    }
    if(name=="cancel")
    {
        cout<<"canceled";
    }
    if(name=="Admin")
    {
        cout<<"Enter your password";
        cin>>password;
        if(password=="cancel")
        {
            cout<<"cancel";
        }
        if(password=="other")
        {
            cout<<"wrong password";
        }
        if(password=="TheMaster")
        {
            cout<<"welcome!!";
        }
       
        
    }

}