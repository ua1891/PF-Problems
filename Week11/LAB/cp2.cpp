 #include<iostream>
 using namespace std;
 main(){
        int ar1[2];
        int ar2[5];
         
        cout<<"Enter array 1 element:";
        for (int i = 0; i <2; i++)
        {
            cin>>ar1[i];
        }
        cout<<endl;
        cout<<"Enter array 2 element:";
        for (int j = 0; j<5; j++)
        {
            cin>>ar2[j];
        }
        cout<<endl;

        cout<<"["<<ar1[0];
        for (int i = 0; i <5; i++)
        {
            cout<<ar2[i];
        }
        cout<<ar1[1]<<"]";
 }