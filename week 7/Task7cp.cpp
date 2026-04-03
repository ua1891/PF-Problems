#include <iostream>
using namespace std;
main()
{
    int integer=0;
    int number=0;
    float p1=0,p2=0,p3=0,p4=0,p5=0;
    float percentage1,percentage2,percentage3,percentage4,percentage5;
    cout<<"Enter the Enteger n of the range(1<=integer<=1000):";
    cin>>integer;

     for (int i = 0; i < integer; i++)
     {
        cout<<"Enter number:";
        cin>>number;

        if (number<200)
        {
            p1++;
        }
        else if (number>=200&&number<=399)
        {
            p2++;
        }
        else if (number>=400&&number<=599)
        {
            p3++;
        }
        else if (number>=600&&number<=799)
        {
            p4++;
        }
        else if(number>=800)
        {
            p5++;
        } 
        percentage1=p1/integer*100;
        percentage2=p2/integer*100;
        percentage3=p3/integer*100;
        percentage4=p4/integer*100;
        percentage5=p5/integer*100;
    }
        cout<<percentage1<<".00%"<<endl;
        cout<<percentage2<<".00%"<<endl;
        cout<<percentage3<<".00%"<<endl;
        cout<<percentage4<<".00%"<<endl;
        cout<<percentage5<<".00%"<<endl;
}