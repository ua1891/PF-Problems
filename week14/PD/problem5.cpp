 #include <iostream>
#include <fstream>
using namespace std;
void arra1();
void arry2();
void scalar();
int arr[10][10];
int scalar1[10][10];
int Rows,column;
main()
{

    arra1();
    cout << "The scalar product is:";
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
            cin >>arr[i][j]; 
        }
        cout<<endl;
    }
}
void scalar()
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scalar1[i][j] =2*arr[i][j]; 
        }
        cout << endl;
    }
      for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
           
                
                cout<<scalar1[i][j]<<" ";
            
            
        }
        cout << endl;
    }
}
