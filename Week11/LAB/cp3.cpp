#include <iostream>
using namespace std;
main()
{
#include <iostream>
    using namespace std;


        float pre[] = {0.25, 0.10, 0.05, 0.01};
        float user_Pres[4];
        int sum=0,total_payable;

        cout << "Enter your change value in the following order"
             << "(quarter,dimes,nickels,pennies)";
        for (int i = 0; i < 4; i++)
        {
            cin >> user_Pres[i];
        }

        for (int i = 0; i < 4; i++)
        {
            int mul =user_Pres[i]*pre[i];
            sum=sum+mul;
        }
        cout<<"Enter total amount you have to pay:";
        cin>>total_payable;
        if(sum>=total_payable)
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
}
