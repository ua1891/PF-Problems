#include<iostream>
using namespace std;
int printSum();
void orignalMatrix();
int  check();

//global
int arr[3][3];
main(){
  
    int reult;
    printSum();
    orignalMatrix();
        reult = check();
        if (reult==9)
        {
            cout<<"Matrix is diagonal";
        }
        else{
            cout<<"end";
        }
     
}
int printSum(){

   for (int i = 0; i <3; i++)
   {
       for (int j = 0; j<3; j++)
       {
           cout<<"Enter the element at position"<<"["<<i<<"]"<<"["<<j<<"]:";
           cin>>arr[i][j];
           
       }
       
   }


}
void orignalMatrix(){
    cout<<"Orignal matrix is:"<<endl;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"\t";
            
        }
        cout<<endl;
    }
    
 }
 int  check(){
    int count=0;
    for (int i = 0; i <3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j&&arr[i][j]==1)
            {
               count++;
                
            }
            else{
                count+=0;
            }
            if (i!=j&&arr[i][j]==0)
            {
                count+=1;
            }
            else{

            }
        }
        
    }
    return count;
 }
