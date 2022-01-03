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
    } snack = {
        "Mocha Munch",
        2.3,
        500,
    };

    cout << "Candy brand: " << snack.brand << endl
         << "Weight: " << snack.weight << endl
         << "Calories: " << snack.calories << endl;

    return 0;
}