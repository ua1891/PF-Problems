#include <iostream>
using namespace std;
void adition(int a, int b);
void subtraction(int a, int b);
void division(int a, int b);
void multiply(int a, int b);

main()
{

    int num1, num2;
    char op = '0';
    cout << "Enter the number one :";
    cin >> num1;
    cout << "Enter the number two:";
    cin >> num2;
    cout << "Enter the number the opreator:";
    cin >> op;
    if (op == '+')
    {
        adition(num1, num2);
    }
    if (op == '-')
    {
        subtraction(num1, num2);
    }
    if (op == '*')
    {
        multiply(num1, num2);
    }
    if (op == '/')
    {
        division(num1, num2);
    }
}
void adition(int a, int b){
    int sum=a+b;
    cout<<"The sum is:"<<sum;

}  
void subtraction(int a, int b){
    int sub=a-b;
    cout<<"The subtraction is:"<<sub;
    
}  
void division(int a, int b)
{
    int div=a/b;
    cout<<"The div is:"<<div;
}
void multiply(int a, int b){
    int mul=a*b;
    cout<<"The div is:"<<mul;
}

