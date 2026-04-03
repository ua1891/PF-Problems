 #include<iostream>
 using namespace std;

    void check(int One,int two);
  main(){
    int num1,num2;
    cout<<"Enter first integer:";
    cin>>num1;
    cout<<"Enter second integer:";
    cin>>num2;

    check(num1,num2);

  }
  void check(int One,int two){
    if (One==two)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
  }