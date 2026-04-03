 #include<iostream>
 using namespace std;
 main(){
    int num[10];
    int n;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter value:";
        cin>>num[i];
    }
    cout<<"Enter a scalar number:";
    cin>>n;
     for (int j = 0; j < 10; j++)
     {
        float mul=num[j]*n;
        cout<<num[j]<<" "<<mul<<endl;
     }
     
 }