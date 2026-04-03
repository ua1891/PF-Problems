 #include<iostream>
 using namespace std;
 main(){
     int x;
        string num;
     cout<<"Enter word:";
     cin>>num;
    int count=0;
    for (int i = 0;num[i]!='\0'; i++)
    {
        if (num[i]=='a' ||num[i]=='e' ||num[i]=='i' ||num[i]=='o'||num[i]=='u')
        {
            count++;
            continue;
            
            
        }
        
    }
    cout<<count;
     

 }