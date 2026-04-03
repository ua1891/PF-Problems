 #include<iostream>
 using namespace std;
 main(){
    string name[4];
    cout<<"Enter the strings of your choice:";
    for (int i = 0; i <4; i++)
    {
        cin>>name[i];
    }
    if (name[0]==name[1]&&name[0]==name[2]&&name[0]==name[3])
    {
        cout<<"true";
    }
    else{
    cout<<"false";
 }
}