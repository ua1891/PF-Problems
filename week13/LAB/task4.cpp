 #include<iostream>
 using namespace std;
 int printSum();
 main(){
    int totalSum;

      totalSum =printSum();
      cout<<"Total sum is:"<<totalSum<<endl;
 }
 int printSum(){
    int R=0;
    int sum;
    cout<<"Enter the row size:";
    cin>>R;
    int arr[R][3];
    for (int i = 0; i <R; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<"Enter the element at position"<<"["<<i<<"]"<<"["<<j<<"]:";
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        
    }
    return sum;
 }
