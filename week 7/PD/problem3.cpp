#include <iostream>
using namespace std;
main()
{
    int period = 0;
    int doctor = 7;
    int i, number;

    int treated_patients = 0, untreated_patient = 0;

    cout << "Enter the period of time(days):";
    cin >> period;

    for (i = 1; i <= period; i++)
    {
        cout << "Enter the number of patients:";
        cin >> number;
        if ((i % 3 == 0) && (untreated_patient - treated_patients > 0))
        {
            doctor++;
        }

        if (number > doctor)
        {
            treated_patients = treated_patients + doctor;
            untreated_patient += (number - doctor);
        }
        else
        {
            treated_patients = treated_patients + number;
        }
    }

    cout << "Treated patients:" << treated_patients << endl;
    cout << "untreated patients:" << untreated_patient;
}
