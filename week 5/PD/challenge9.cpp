#include <iostream>
using namespace std;

 main()
 {
    int h,x,y;
    cout<<"Enter the value of h:";
    cin>>h;
    cout<<"Enter the value of x cordinate:";
    cin>>x;
    cout<<"Enter the value of y cordinate:";
    cin>>y;
    
        if(x<=h&&x<=2*h&&y<=h&&y<=4*h)
        {
            cout<<"Point lie indide the figure";
        }
        else if(x==h&&x==2*h&&y==h&&y==4*h)
        {
            cout<<"Point lie at the BORDER of thr figure";
        }
        else{
            cout<<"point lies OUTSIDE the figure";
        }
 }