#include<iostream>
using namespace std;
 void tes(int a);

main(){
       int marks=0;
       cout<<"Enter your marks:";
       cin>>marks;
       tes(marks);
}
void tes(int a){
    if (a>50)
    {
        cout<<"Pass";

    }
    else{
        cout<<"Fail";
    }
}