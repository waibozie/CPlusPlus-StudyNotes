#include <iostream>
#include <string>

int main()
{
    using namespace std;

    struct CandyBar
    {
        string brand;
        double weight;
        long calories;
    } snack[] = {
        {
            "Mocha Munch -1",
            2.3,
            500,
        },
        {
            "Mocha Munch -2",
            2.3,
            500,
        },
        {
            "Mocha Munch -3",
            2.3,
            500,
        }};

    for (size_t i = 0; i < sizeof(snack) / sizeof(snack[0]); i++)
    {
        cout << "Candy brand: " << snack[i].brand << endl
             << "Weight: " << snack[i].weight << endl
             << "Calories: " << snack[i].calories << endl;
    }

    return 0;
}