#include <iostream>
using namespace std;
main()
{
    int N, M, S;
    cout << "Enter the first integer number:";
    cin >> N;
    cout << "Enter the integer number M(N<M<=10000):";
    cin >> M;
    cout << "Enter the stoping integer:";
    cin >> S;
    for (int i = M; i >= N; i--)
    {
        if (i / 2.0 == i / 2 && i / 3.0 == i / 3)
        {
            if (i == S)
            {
                break;
            }

            cout << i << " ";
        }
    }
}