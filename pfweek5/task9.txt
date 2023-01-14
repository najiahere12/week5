#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float Neededhours, days, workers,workershours,workingtime,workinhr;
    cout << "Enter Needed Hours: ";
    cin >> Neededhours;
    cout << "Enter Number Days: ";
    cin >> days;
    cout << "Enter Number of Workers: ";
    cin >> workers;
     workershours =workers * 10;
     workingtime =days * workershours;
     workinhr =workingtime * 0.90;
    int finalhour =floor(workinhr);
    if (finalhour > Neededhours)
    {
        int remaining = finalhour - Neededhours;
        cout << "Yes! " << remaining << " hours left";
    }
    if(Neededhours >finalhour)
    {
        int remaining =Neededhours - finalhour;
        cout << "Not enough time! " << remaining <<" hours needed."; 
    }
}
