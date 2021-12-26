// programmingpractice07.cpp -- display hour and minute
#include <iostream>
void displayHourAndMinute(int hours, int minutes);

using namespace std;

int main()
{

    int hours, minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    displayHourAndMinute(hours, minutes);
    return 0;
}

void displayHourAndMinute(int hours, int minutes)
{
    cout << hours << ":" << minutes << endl;
}