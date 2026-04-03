#include <iostream>
using namespace std;
int timeForGame(int time);
int differ(int difference);
int min(int min);
int another(int orignal);
int global = 0, Norm = 0;
main()
{
    int minutes;
    int holiday;
    cout << "Enter holidays:";
    cin >> holiday;
    global = timeForGame(holiday);
    int ano=another(global);
    Norm = differ(ano);
    minutes = min(ano);
    if (global < 30000)
    {
        cout << "Tom sleep well" << endl;
        cout << Norm << " hours and" << minutes << " minutes less for play";
    }
    if (global > 30000)
    {
        Norm=-1*Norm;
        minutes=-1*minutes;
        cout << "Tom will run away" << endl;
        cout << Norm << " hours and" << minutes << " minutes for play";
    }
}
int timeForGame(int time)
{
    int WorkDays = 365 - time;
    int timeGame = (WorkDays * 63) + (time * 127);
    return timeGame;
}
int another(int orignal){
    int DiffFromNorm = 30000 -global;
    return DiffFromNorm;

}
int differ(int difference)
{
    int division = difference / 60;
    return division;
}

int min(int min)
{
    int minu = min % 60;
    return minu;
}