#include<iostream>
using namespace std;
main()
{
    char going,lecture;

    cout<<"Do you have class today(print 'y' for yes)";
    cin>>going;
    cout<<"Are your friend going to university(print 'y' for yes)";
    cin>>lecture;
    if(going=='y'&& lecture=='y')
    {
        cout<<"you are also going to university";
    }
}