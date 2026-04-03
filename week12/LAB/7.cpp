#include<iostream>
using namespace std;
 void check(int a);

main(){
       int num=0;
       cout<<"Enter number:";
       cin>>num;
       check(num);
}
void check(int a){
    if (a%2==0)
    {
        cout<<"even";

    }
    if(a%3==0){
        cout<<"odd";
    }
    else{
        cout<<"Neither even not odd";
    }
}