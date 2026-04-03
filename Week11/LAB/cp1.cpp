 #include<iostream>
 using namespace std;
 main(){
    int x;
    cout<<"Enter size:";
    cin>>x;
    float R[x];
    float n=0;
   
    cout<<"Enter the resisteance in series:";
    for (int i = 0; i <x; i++)
    {
        cin>>R[i];
        n+=R[i];
    }
   cout<<"The total resistance:"
    <<n;
 } 