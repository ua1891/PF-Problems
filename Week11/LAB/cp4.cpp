 #include<iostream>
 using namespace std;
 main(){
    string some="something";
    string user_value;

    cout<<"(Give me something)";
    cin>>user_value;
   
  cout<<some<<" ";
    for (int i = 0; user_value[i]!='\0'; i++)
    {
       cout<<user_value[i];
    }
    
   
 }