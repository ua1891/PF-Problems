#include<iostream>
using namespace std;
void Name(string nam);
main(){
    
    string name;
    cout<<"Enter name:";
    cin>>name;
    while (true)
    {
       Name(name);
       cout<<endl;
   }
   

}
void Name(string nam){

    cout<<nam;
   
}