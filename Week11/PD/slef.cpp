 #include<iostream>
 using namespace std;
 main(){

    int num[5];
        int largest=num[0];
    for (int i = 0; i <5; i++)
    {
        cin>>num[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (num[i]>largest)
        {
            largest=num[i];
        }
        
    }
    cout<<"Largest digit is :"<<largest;

 }