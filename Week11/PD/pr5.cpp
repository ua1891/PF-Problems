 #include<iostream>
 using namespace std;
 main(){

    string one,two;

    cout<<"Enter the value of one:";
    cin>>one;
    cout<<"Enter the value of 2nd string:";
    cin>>two;
        int count;
    for (int i = 0; one[i]!='\0'; i++)
    {
        for (int j = 0; two[j] !='\0'; j++)
        {
            if (one[i]==two[j])
            {
                two[j]=' ';
                count++;
                break;
            }
            
        }
        
        
    }
    cout<<"common no.of digits are "<<count; 
    

 }