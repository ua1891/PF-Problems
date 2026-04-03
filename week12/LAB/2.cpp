#include <iostream>
using namespace std;
void InchesToFeet(int feet);
main()
{

    int inches = 0;
    cout << "Enter the value in inches:";
    cin >> inches;
    InchesToFeet(inches);
}
    void InchesToFeet(int feet){

        int convert=feet/12;
        cout<<"Total feet is equal to:"<<convert;
    }