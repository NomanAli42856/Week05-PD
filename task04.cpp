#include<iostream>
using namespace std;

int prohours(int hours,int days,int workers);

main()
{
    system("cls");

    int hours,days,workers,result;
    cout << "Enter the number of the hours for project : ";
    cin >> hours;
    cout << "Enter the number of days : ";
    cin >> days;
    cout << "Enter the number of workers : ";
    cin >> workers;
    result = prohours(hours,days,workers);
    if(result >= hours)
    {
      cout << "Yes! " << result-hours << " hours left." ;
    }

    if(result < hours)
    {
      cout << "Not enough time! " << hours-result << " hours needed." ;
    }
}


int prohours(int hours,int days,int workers)
{
   int nohours,trahours,remhours;
   nohours = 10*days*workers;
   trahours = 0.1*nohours;
   remhours = nohours - trahours;
   return remhours;

}