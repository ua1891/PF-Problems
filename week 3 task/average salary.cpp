#include<iostream>
using namespace std;
 main(){

int days;
int dollars;
int exchange;
cout<<"enter no.of days:";
cin>>days;

cout<<"enter dollar..";
cin>>dollars;

cout<<" enter exchange from usd to pkr..";
cin>>exchange;
 
float salary_per_month;
salary_per_month=days*dollars;

float salaryperYear;
salaryperYear=salary_per_month*12;

float salaryAfterBonus;
salaryAfterBonus=salaryperYear*2.5;

float salaryAfterTax;
salaryAfterTax=salaryAfterBonus*25/100;

float totalsalaryinrupees;
totalsalaryinrupees=salaryAfterTax*exchange;

float earningperdayinRS;
earningperdayinRS=totalsalaryinrupees/365;

cout<<" Average salary per day in rupees is.."<<earningperdayinRS;









  }