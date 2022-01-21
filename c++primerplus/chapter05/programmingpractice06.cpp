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

    cout << "Please enter sells of C++ For Fools of recent 3 year" << endl;
    int sells[3][12];
    for (int y = 0; y < 3; y++)
    {
        for (int i = 0; i < 12; i++)
        {
            cout << y + 1 << " year, " << month[i] << " sells: ";
            cin >> sells[y][i];
        }
    }

    int sum = 0;
    int yearSum = 0;
    for (int y = 0; y < 3; y++)
    {
        yearSum = 0;
        for (int i = 0; i < 12; i++)
        {
            yearSum += sells[y][i];
        }
        cout << y + 1 << " year, total sells " << yearSum << endl;
        sum += yearSum;
    }
    cout << "total sells in three year: " << sum << endl;

    return 0;
}