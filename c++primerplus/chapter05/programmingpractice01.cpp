#include <iostream>

int main()
{
    using namespace std;
    int first, second;
    cout << "Please enter two number" << endl
         << "First one: ";
    cin >> first;
    cout << "Second one: ";
    cin >> second;

    int sum = 0;
    for (int e = first; e <= second; e++)
    {
        sum += e;
    }
    cout << "sum is " << sum << endl;
    return 0;
}