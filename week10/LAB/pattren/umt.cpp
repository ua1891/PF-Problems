 #include<iostream>
 using namespace std;
 main()
 {
    for (int i = 1; i <=5; i++)
    {
        for ( int z=1;z<i;z++)
        {
            cout<<" ";
        }
        
        for ( int j=1;j<=5-i;j++)
        {
           cout<<"* ";
        }
        cout<<endl;
    }
    for (int x=2;x<=5;x++)
    {
        for ( int s =1; s <=5-x; s++)
        {
            cout<<" ";
        }
        for (int z=1;z<=x;z++)
        {
            cout<<z;
        }
        cout<<endl;
        
    }
    
 }