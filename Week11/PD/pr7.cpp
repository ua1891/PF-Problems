#include <iostream>
using namespace std;
main()
{

    string Movies[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string dig;
    int count = 0;
    cout << "Enter the four digit pin:";
    cin >> dig;
    int alpha=0;

    for (int i = 0; dig[i] != '\0'; i++)
    {

        count++;
        if (dig[i]<0||dig[i]>9)
        {
            alpha=1;
            
        }
        
    }
   

    if (count == 4&&alpha==0)
    {
        for (int i = 0; i < 4; i++)
        {

            int Asci = dig[i];
            int OrignalNumber = Asci - 48;
            int index = OrignalNumber + i;
            if (index >= 10)
            {
                index = index - 10;
            }

            cout << Movies[index] << " ";
        }
    }
    else
    {
        cout << "you gave invalid input";
    }
}