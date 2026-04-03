#include <iostream>
using namespace std;
main()
{
    int num_1 = 0, ending;
    cout << "Enter the starting and ending value:";
    cin >> num_1 >> ending;
    for ( num_1; num_1 <= ending; num_1++)
    {
        if(num_1<=1){
            continue;
        }

        int count = 0;
        for (int j = 2; j < num_1; j++)
        {
            if (num_1 % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << num_1 << " ";
        }
    }
    
     
    
}