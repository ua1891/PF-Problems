 #include<iostream>
 using namespace std;
 main(){
    string name;
    cout<<"Enter the string";
    cin>>name;
    for (int i = 0;name[i] !='\0'; i++)
    {
        int asci=name[i];
          asci++;
          char new_Name=asci;
          cout<<new_Name;
    }
    
 }