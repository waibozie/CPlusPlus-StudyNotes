// programmingpractice03.cpp -- BMI caculator

#include <iostream>

int main()
{
    using namespace std;

    const int degree2MinuteFactor = 60;
    const int Minute2SecondFactor = 60;

    int degrees, minutes, seconds;

    cout << "Enter a latitude in degress, minutes, and seconds:" << endl;
    cout << "First, enter the degress: ";
    cin >> degrees;
    cout << "Next, enter the minutes if arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds if arc: ";
    cin >> seconds;

    cout << degrees << " degrees, "
         << minutes << " minutes, "
         << seconds << " seconds = "
         << degrees + (minutes * Minute2SecondFactor + seconds) / (double)Minute2SecondFactor / (double)degree2MinuteFactor << " degrees"
         << endl;
    return 0;
}