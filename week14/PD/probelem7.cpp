 #include <iostream>
#include <fstream>
using namespace std;
void arra1();
void arry2();
void scalar();
void ori();
int arr[10][10];
int Rows,column;
main()
{

    arra1();
    ori();
    cout << "The transpose of the matrix  is:\n";
    scalar();
}
void arra1()
{
    cout<<"Enter the total number of Rows and column of matrix:"<<endl;
    cin>>Rows>>column;
    cout << "Enter the values of matrix:"<<endl;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<" Enter the value at "<<i<<" and "<<j<<" :";
            cin >>arr[i][j]; 
        }
        cout<<endl;
    }
}
void scalar()
{
    for (int j = 0; j < column; j++)
    {
        for (int i = 0; i < Rows; i++)
        {
           
                
                cout<<arr[i][j]<<" ";
            
            
        }
        cout << endl;
    }
}
void ori(){
    cout<<"The orignal matrix is\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
           
                
                cout<<arr[i][j]<<" ";
            
            
        }
        cout << endl;
    }
}
