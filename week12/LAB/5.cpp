 #include<iostream>
 using namespace std;
  void eligile(int a);

 main(){
        int age=0;
        cout<<"Enter your age :";
        cin>>age;
        eligile(age);
 }
 void eligile(int a){

    if (a>=18)
    {
        cout<<"You are eligible:";

    }
    else{
        cout<<"You are not eligible:";
    }
 }