#include<iostream>
using namespace std;
main()
{	
	string name;
	float num;
	float num2;
	float area;
	cout<<"Enter the type of geometric figure:";
	cin>>name;
	
	if(name=="square")
	{
		cout<<"Enter the number(of length)";
		cin>>num;
		area=num*num;
		cout<<"The area of a square is:"<<area;
	}

	if(name=="rectangle")
	{
		cout<<"Enter the number(of length)";
		cin>>num;
		cout<<"Enter the number(of width)";
		cin>>num2;
		area=num*num2;
		cout<<"The area of a rectangle is:"<<area;
	}
	if(name=="circle")
	{
		cout<<"Enter the number(of radius)";
		cin>>num;
		area=3.14*(num*num);
		cout<<"The area of a circle is:"<<area;
	}
	if(name=="triangle")
	{
		cout<<"Enter the number( length base)";
		cin>>num;
		cout<<"Enter the number(length height)";
		cin>>num2;
		area=(1/2)*num*num2;
		cout<<"The area of a triangle is:"<<area;
        }
}	