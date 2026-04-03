#include <iostream>
using namespace std;
void total_Price(int R, int W, int T);
main()
{
    int red, white, tulip;
    cout << "Enter the quantity of red, white and tulip roses:";
    cin >> red >> white >> tulip;
    total_Price(red, white, tulip);
}
void total_Price(int R, int W, int T)
{
    float discounted = 0;
    float RR = R * 2.00;
    float WR = W * 4.10;
    float TR = T * 2.50;
    float sum = RR + WR + TR;
    cout << "Orignal price is:" << sum << endl;
    if (sum > 200)
    {
        discounted = sum - (sum * 20.0 / 100.0);

        cout << " price after discount is:" << discounted << endl;
    }
}