 #include<iostream>
 using namespace std;
  main(){

    int num[4];
    int samllest=num[0];

    for (int i = 0; i<4; i++)
    {
        cin>>num[i];
    }
    for (int i = 0; i <4; i++)
    {
      if (num[i]<samllest)
      {
        /* code */
        samllest=num[i];
      }
      
    }
    cout<<samllest;
    
  }