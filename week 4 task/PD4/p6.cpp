#include<iostream>
using namespace std;

  main()	
{	
	float speed;			
	cout<<"Enter the speed";
	cin>>speed;
  	if(speed<10)
	{
		cout<<"slow";
	}			
 	else
	{
		if(speed<=50)
		{
			cout<<"averge";
		}
 		else	
		{
			if(speed<=150)
			{
 				cout<<"fast";
                	}
			else
			{
				if(speed<=1000)
				{
					cout<<"ultra fast";
				}
				else
				{
					cout<<"extremely fast";
				}
			}
		}

	}
}