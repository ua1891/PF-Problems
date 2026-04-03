#include <iostream>
using namespace std;

void Cfuel(float F); 

 main() {  
    float distance = 0;
    cout << "Enter the distance you have to travel: ";
    cin >> distance;
    Cfuel(distance); 
}

void Cfuel(float F) {  
    float total = F * 10;
    if (total<100)
    {
        cout<<"100";
    }
    else{
        cout << "Total fuel needed by a car is: " << total;
    }
    
    
}
