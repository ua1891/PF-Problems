 #include<iostream>
 using namespace std;
 main(){
    string array;
    cout<<"Enter the string:";
    cin>>array;

    for (int i = 0; array[i]!='\0'; i++)
    {
        if (array[i]!='a'&&array[i]!='e'&&array[i]!='i'&&array[i]!='o'&&array[i]!='u')
        {
          
            cout<<array[i];
        }       
        
    }
    
 }