#include<iostream>
using namespace std;
main()
{
    float num1,num2,num3,num4,num5,total_obtained,percentage;
    string name;
    cout<<"Enter the student name:";
    cin>>name;
    cout<<"Enter the obtained marks in English(out of 100):"<<endl;
    cin>>num1;
    cout<<"Enter the obtained marks in maths(out of 100):"<<endl;
    cin>>num2;
    cout<<"Enter the obtained marks in chemistry(out of 100):"<<endl;
    cin>>num3;
    cout<<"Enter the obtained marks in social science(out of 100):"<<endl;
    cin>>num4;
    cout<<"Enter the obtained marks in Biology(out of 100):"<<endl;
    cin>>num5;
    total_obtained=num1+num2+num3+num4+num5;
    percentage=total_obtained/500*100;
    string grade;
    if(percentage>90&&percentage<=100)
    {
        grade="A+";
    }
    else if(percentage>80&&percentage<=90)
    {
        grade="A";
    }
    else if(percentage>70&&percentage<=80)
    {
        grade="B+";
    }
    else if(percentage>60&&percentage<=70)
    {
        grade="B";
    }
    else if(percentage>50&&percentage<=60)
    {
        grade="C";
    }
    else if(percentage>40&&percentage<=50)
    {
        grade="D";
    }
    else if(percentage<=40)
    {
        grade="F";
    } 
    cout<<"Total obtained marks is:"<<total_obtained<<endl;
    cout<<"Obtained percentage:"<<percentage<<endl;
    cout<<"Obtained grade:"<<grade<<endl;   

}