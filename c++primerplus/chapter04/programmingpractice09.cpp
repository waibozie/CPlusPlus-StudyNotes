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
    } *snack = new CandyBar[3];

    snack[0] =
        {
            "Mocha Munch -1",
            2.3,
            500,
        };
    snack[1] =
        {
            "Mocha Munch -2",
            2.3,
            500,
        };
    snack[2] =
        {
            "Mocha Munch -3",
            2.3,
            500,
        };

    for (size_t i = 0; i < 3; i++)
    {
        cout << "Candy brand: " << snack[i].brand << endl
             << "Weight: " << snack[i].weight << endl
             << "Calories: " << snack[i].calories << endl;
    }

    delete [] snack;

    return 0;
}