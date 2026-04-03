#include <iostream>
using namespace std;
int check(string Battleship[5][5], string F);
main()
{
    int  result;
    string arr[5][5] = {
        {".", ".", "*", "*", "*"}, // A\0
        {".", "*", ".", ".", "."}, // B\1
        {".", "*", ".", ".", "."}, // C\2
        {".", "*", ".", ".", "."}, // D\3
        {".", ".", "*", "*", "."}, // E\4
    };
    string fire;
    cout << "Enter the cordinate:" << endl;
    cin >> fire;
    result=check(arr, fire);
    if (result==1)
    {
        cout<<"Boom";
    }
        else{
            cout<<"Splash";
        }
}
int  check(string Battleship[5][5], string F)
{
    int count=0;
   int value;
    int j;
    if (F[0] == 'A')
    {
       value = 0;
    }
    else if (F[0] == 'B')
    {
       value = 1;
    }
    else if (F[0] == 'C')
    {
       value = 2;
    }
    else if (F[0] == 'D')
    {
       value = 3;
    }
    else if (F[0] == 'E')
    {
       value = 4;
    }
    if (F[1]>='1'&&F[1]<='5')
    {
        j=F[1]-'1';
    }
    
 
        if (Battleship[value][j]=="*")
        {
            count+=1;
        }
    
    
  
    return count;
    
}