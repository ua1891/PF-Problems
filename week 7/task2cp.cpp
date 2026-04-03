#include <iostream>
using namespace std;
main()
{
    int length,next;
    cout<<"Enter te length of fibonacci series:";
    cin>>length;
    int num_1=0;
    int num_2=1;
    cout<<"0"<<" ";
    cout<<"1"<<" ";
    for ( int i=0;i<length;i++)
    {
          next=num_1+num_2;
          cout<<next<<" ";
         num_1=num_2;
         num_2 =next;
     }
    

}