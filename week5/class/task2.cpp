
#include<iostream>
using namespace std;
 main()
 {
    float age;
    char gender;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your gender(m for male and f for female):";
    cin>>gender;
    if(age>=16&&gender=='m')
    {
        cout<<"Mr.";
    }
    else if(age>=16&&gender=='f')
    {
        cout<<"Ms.";

    }
    else if(age<16&&gender=='f')
    {
        cout<<"Miss";

    }
    else if(age<16&&gender=='m')
    {
        cout<<"Mister";

    }
 }