#include <iostream>
using namespace std;
int main()
{
    float count_of_cargo = 0;
    float Tonage_of_cargo = 0;
    float sum = 0, Average_price = 0;
    float P_by_minibus = 0.0, P2_by_truck = 0.0, p3_by_train = 0.0;

    cout << "Enter the count of cargo for transportation:";
    cin >> count_of_cargo;
    int minibus_1 = 0, truck_2 = 0, train_3 = 0;

    for (int i = 0; i < count_of_cargo; i++)
    {
        cout << "Enter the tonage of cargo:";
        cin >> Tonage_of_cargo;

        sum = sum + Tonage_of_cargo;

        if (Tonage_of_cargo <= 3)
        {
            minibus_1 = minibus_1 + Tonage_of_cargo;
        }
        if (Tonage_of_cargo > 4 && Tonage_of_cargo <= 11)
        {
            truck_2 += Tonage_of_cargo;
        }
        if (Tonage_of_cargo > 11)
        {
            train_3 += Tonage_of_cargo;
        }
    }

    P_by_minibus = minibus_1 / sum * 100.0;
    P2_by_truck = truck_2 / sum * 100.0;
    p3_by_train = train_3 / sum * 100.0;
    Average_price = (minibus_1 * 200 + truck_2 * 175 + train_3 * 120) / sum;

    cout << Average_price << endl;
    cout << P_by_minibus << "%" << endl;
    cout << P2_by_truck << "%" << endl;
    cout << p3_by_train << "%" << endl;
}
