 #include<iostream>
 using namespace std;
 main()
 {
    int amount;
    cout<<"Enter amount:";
    cin>>amount;
    
    if (amount%10!=0)
    {
        cout<<"Re enter the value";
    }
    else if (amount%10==0)
    {
        int thousnad=amount/1000;
        int remain=amount%1000;

        int five_hundered=remain/500;
      remain=remain%500;

       int hundered=remain/100;
        remain=remain%100;

       int fifty=remain/50;
         remain=remain%50;

       int ten=remain/10;

       cout<<"Total number of thousnad notes is:"<<thousnad<<endl;
       cout<<"Total number of five hundered notes is:"<<five_hundered<<endl;
       cout<<"Total number of hundered notes is:"<<hundered<<endl;
       cout<<"Total number of fifty notes is:"<<fifty<<endl;
       cout<<"Total number of ten notes is:"<<ten<<endl;


    }
 }