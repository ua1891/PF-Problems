#include <iostream>
using namespace std;
int check(int arr[][3], int row);
main()
{
    int R;
    cout << "ENter the total number of rows:";
    cin >> R;
    int arr[R][3];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at position" << "[" << i << "]" << "[" << j << "]:";
            cin >> arr[i][j];
        }
    }
    int result = check(arr, R);
    cout << "Total number of identical rows is:" << result;
}

int check(int arr[][3], int row)
{

    arr[row][3];
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int col = 0; col < row; col++)
        { // we use the condition i!=col mean to skip it and move it to the next row

            if (arr[i][0] == arr[col][0] && arr[i][1] == arr[col][1] && arr[i][2] == arr[col][2] && i != col)
            {
                count++;
            }
        }
    }
    return count;
}
