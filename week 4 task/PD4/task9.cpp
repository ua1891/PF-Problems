#include<iostream>
using namespace std;

main()
{

	int age;
	float income;
	float credit_score;

	cout<<"Enter your age:";
	cin>>age;
	cout<<"Enter your monthly salary:";
	cin>>income;
	cout<<"Enter your credit score:";
	cin>>credit_score;
	
	if(age<18)
	{
			cout<<"You are not eligible for a loan.";
	}
  else{
		if(age>=18)
		{
			if(income<30000)
			{
			cout<< "Your income is too low for a loan.";
			}
		
		}

	if(income>30000)
	{
		if(credit_score>=700)
		{
			cout<<"Loan Approved!";
		}
		else
		{
			if(credit_score>=600)
			{
				cout<<"Loan Approved with higher interest rates.";
			}

			else
			{
				if(credit_score<600)
				{
					cout<<"Loan Denied due to low credit score.";
			        }
		       }
	       }
	}
	}

}