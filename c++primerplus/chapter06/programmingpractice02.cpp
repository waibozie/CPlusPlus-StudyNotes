#include <iostream>

int main()
{
    using namespace std;
    const int DonationSize = 10;
    double donations[DonationSize];
    int index = 0;
    while (cin >> donations[index] && ++index < DonationSize)
        ;
    if (index == 0)
    {
        cout << "bad input\n";
        exit(EXIT_FAILURE);
    }

    double sum = 0;
    for (int i = 0; i < index; i++)
    {
        sum += donations[i];
    }
    double avarage = sum / index;
    int largerThanAverageCnt = 0;
    for (int i = 0; i < index; i++)
    {
        if (donations[i] > avarage)
            largerThanAverageCnt++;
    }

    cout << avarage << " = average of donations, and " << largerThanAverageCnt << " large than average.\n";
    return 0;
}