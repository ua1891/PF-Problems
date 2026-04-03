 #include<iostream>
 using namespace std;
 main()
{       int n2=2;
    for (int i = 1; i <=5; i++)
    {
       cout<<i<<" ";     
    }
    cout<<endl;
    for ( int j = 1; j <=5 ; j++)
    {      int multiply=1;
       for ( int x = 1; x <=j; x++)
       {
         multiply=2*x;
        }
        cout<<multiply<<" ";
       
       
    }
    cout<<endl;
    for ( int s = 1; s <=5 ; s++)
    {      int multiply2=1;
       for ( int p = 1; p <=s; p++)
       {
           multiply2=3*p;
        
        }
        cout<<multiply2<<" ";
       
       
    }
    cout<<endl;
}