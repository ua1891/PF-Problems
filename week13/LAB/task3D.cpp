#include <iostream>
using namespace std;
int converter();
int printCar(int cars[5][5], int col);
main()
{
        int result=0,End;
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = { {10, 7, 12, 10, 4},
                       {18, 11, 15, 17, 2},
                       {23, 19, 12, 16, 14},
                       {7, 12, 16, 0, 2},
                       {3, 5, 6, 2, 1} };
                      result=  converter();
                          End  =printCar(cars,result);
            cout<<"Total cars of this color is"<<End;

}
    int printCar(int cars[5][5], int col){
    int sum;
    for (int i = 0; i<5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j==col)
            {
                sum+=cars[i][j];
            }
            
        }
        
    }
    return sum;
    
}
int converter(){
    string color;
    int index;
    cout<<"Enter the color for which you wanna to find sum:";
    cin>>color;
    if (color=="Red")
    {
        index=0;
    }
    if (color=="Black")
    {
        int dex=1;
    }
    if (color=="Brown")
    {
        index=2;
    }
    if (color=="Blue")
    {
        index=3;
    }
    if (color=="Gray")
    {
        index=4;
    }
    return index;
}

