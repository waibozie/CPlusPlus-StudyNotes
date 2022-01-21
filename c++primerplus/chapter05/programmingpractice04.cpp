#include <iostream>
#include <array>

int main()
{
    using namespace std;

    int daphne = 100, cleo = 100;
    int year = 0;
    while (daphne <= cleo)
    {
        daphne = daphne * 0.05 + daphne;
        cleo += 10;
        year++;
        cout << "After " << year << " later, daphne: " << daphne << ", cleo: " << cleo << endl;
    }

    cout << "After " << year << " later, daphne earn more mony than cleo" << endl;

    return 0;
}