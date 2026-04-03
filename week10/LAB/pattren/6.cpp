 #include<iostream>
 using namespace std;
 main()
 {
    for (int i =1; i <=5; i++)
    {
        for (int N =1; N<i; N++)
        {
            cout<<" ";
        }
        
        for (int j = 5; j >=i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
    for ( int x = 2; x <=5; x++)
    {
        for (int s =1; s<=5-x; s++)
        {
            cout<<" ";
        }
        for(int y=1;y<=x;y++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
 }