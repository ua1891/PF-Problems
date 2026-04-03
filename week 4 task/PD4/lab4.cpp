#include<iostream>
using namespace std;
 main()
 {
    string my_password= "Pass@123";
    
    string user_password;
    cout<<"enter password";
    cin>>user_password;
    if (user_password==my_password)
    {
        cout<<"wow! you have cracked the code";

    }
    if (user_password!=my_password)
    {
        cout<<"It is not simple,Try again ";
    }
    
 }