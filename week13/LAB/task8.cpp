 #include<iostream>
 using namespace std;
 
 
int sum(int arr[10][5]);
    void displaybefore(int ar[10][5]);
    void display_after(int ar[10][5],int G);
 
 int arr[10][5]; 
 int rowsize;
main(){
    int first;
    cout<<"Enter row size:";
    cin>>rowsize;
   for (int i = 0; i <rowsize; i++)
   {
       for (int j = 0; j<5; j++)
       {
           cout<<"Enter the element at position"<<"["<<i<<"]"<<"["<<j<<"]:";
           cin>>arr[i][j];
           
       }
       
   }
  first= sum(arr);
  cout<<"Before change\n";
  displaybefore(arr);
  cout<<"AFter change\n";
  display_after(arr,first);

   
    

}
int sum(int arr[10][5]){
    int maxsum=1;
    int colSum;
    int Colindex;
   
    for (int j = 0; j < 5; j++)
    {
        colSum=0;
        for (int i = 0; i <rowsize; i++)
        {
            colSum+=arr[i][j];
            
        }
        if (colSum>maxsum)
        {
            maxsum=colSum;
            Colindex=j;
        }
        
    }
     if (Colindex != 0) {
        for (int row = 0; row < rowsize; row++) {
            int temp = arr[row][0];
            arr[row][0] = arr[row][Colindex];
            arr[row][Colindex] = temp;
        }
    }
}
 void displaybefore(int ar[10][5]){

    for (int i = 0; i <rowsize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
                cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    
 }
  void display_after(int ar[10][5],int G){

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j <5 ; j++)
        {
            cout<<ar[i][j]<<" ";
            
        }
        cout<<endl;
        
        
    }

    
  }