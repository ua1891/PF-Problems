#include <iostream>
using namespace std;

void Cfuel(float F); 

 main() {  
    float distance = 0;
    cout << "Enter the distance you have to travel: ";
    cin >> distance;
    Cfuel(distance); 
}

void Cfuel(float F) {  // Function definition
    float total = F * 10;
    cout << "Total fuel needed by a car is: " << total;
    
}
