#include <iostream>
using namespace std;

  main(){
int sub1,sub2,sub3,sub4,sub5;
float total=500;

cout<<"Enter thr marks of your subjects:-"<<endl;

cout<<"Enter thr marks of your subject 1(out of 100):";
cin>>sub1;

cout<<"Enter thr marks of your subject 2(out of 100):";
cin>>sub2;

cout<<"Enter thr marks of your subject 3(out of 100):";
cin>>sub3;
cout<<"Enter thr marks of your subject 4(out of 100):";
cin>>sub4;
cout<<"Enter thr marks of your subject 5(out of 100):";
cin>>sub5;

int sum=sub1+sub2+sub3+sub4+sub5;
float percent=sum/total*100;

cout<<"total marks percentage:"<<percent<<endl;



if( percent>=70){
cout<<"you are a brillient student";


                                  }

     else{
cout<<"keep working hard";

                    }
      }