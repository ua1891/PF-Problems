 #include<iostream>
 using namespace std;
    void challanIssued(int checker);
 main(){
    int speed;
    cout<<"Enter the speed of car:";
    cin>>speed;
    challanIssued(speed);

 }
 void challanIssued(int checker){
    if (checker>100)
    {
        cout<<"Halt...YOU WILL BE CHALLENGED!!!";
    }
    else if (checker<=100)
    {
        cout<<"Perfect! You're going good";
    }
    
 }