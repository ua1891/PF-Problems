#include <iostream>
using namespace std;
main()
{
    int table;
    float product;
    cout<<"Enter the number";
    cin>>table;
    for (int num=1;num<=10;num++)
    {
        product=table*num;
        cout<<table<<"*"<<num<<"="<<product<<endl;
    }
    
}