#include <iostream>
using namespace std;
void printCar(int cars[][5], int rowsize);
main()
{

    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = { {10, 7, 12, 10, 4},
                       {18, 11, 15, 17, 2},
                       {23, 19, 12, 16, 14},
                       {7, 12, 16, 0, 2},
                       {3, 5, 6, 2, 1} };
                        printCar( cars, rowSize);
}
void printCar(int cars[][5], int rowsize){
    for (int i = 0; i<rowsize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<cars[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

