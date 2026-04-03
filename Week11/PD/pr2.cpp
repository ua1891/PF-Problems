 #include<iostream>
 using namespace std;
 main(){
  
    int x;
    cout<<"Enter the size of array:";
    cin>>x;
    int num[x];
    bool flag=false;

    for (int i = 0; i<x; i++)
    {
        cin>>num[i];
        

        if (num[i]==7)
        {
          flag=true;  
        }
       
    }
    if (flag==true)
    {
        cout<<"Boom!";
    }
    else{
        cout<<"there is no seven number in the array:";
    }

 }
