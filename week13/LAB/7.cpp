#include <iostream>
using namespace std;
    string check(string arr[7],string C);
main()
{
string field[7] = {
    " #             # ",
    " #             # ",
    " #             # ",
    " ############### ",
    "       #         ",
    "       #         ",
    "       #         "
};
    cout<<"Enter the cordinate at which ball is present:";
        string count;
        cin>>count;
             check(field,count);


    


}
    string check( string arr[7],string C){

      int row = C[0] - '0'; // Convert char to int
    int col = C[2] - '0'; // Assuming input like "3,8"

    if ((col > 1 && col < 14) && row < 3) {
        cout << "true" << endl;
    }
    else if ((col > 1 && col < 14) && row > 3) {
        cout << "false" << endl;
    }


       
        for (int i = 0; i <7; i++)
        {
            for (int j = 0; j <16 ; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    
    }
