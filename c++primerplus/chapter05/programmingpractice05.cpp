#include <iostream>
#include <array>

int main()
{
    using namespace std;

    char *month[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };

    cout << "Please enter sells of C++ For Fools in each month" << endl;
    int sells[12];
    for (int i = 0; i < 12; i++)
    {
        cout << month[i] << " sells: ";
        cin >> sells[i];
    }

    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += sells[i];
    }
    cout << "total sells in year: " << sum << endl;

    return 0;
}