// programmingpractice04.cpp -- second to days, hours, minutes and seconds

#include <iostream>

int main()
{
    using namespace std;

    const int day2HourFactor = 24;
    const int hour2MinuteFactor = 60;
    const int minute2SecondFactor = 60;

    long long enter;

    cout << "Enter the number of seconds: ";
    cin >> enter;

    long long days, hours, minutes, seconds;
    minutes = enter / minute2SecondFactor;
    seconds = enter % minute2SecondFactor;

    hours = minutes / hour2MinuteFactor;
    minutes = minutes % hour2MinuteFactor;

    days = hours / day2HourFactor;
    hours = hours % day2HourFactor;

    cout << enter << " seconds = "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds"
         << endl;

    return 0;
}