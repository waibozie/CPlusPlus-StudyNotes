#include <iostream>
#include <array>

int main()
{
    using namespace std;

    cout << "Enter an integer, 0 to quit" << endl;
    int elem, sum = 0;
    while (cin >> elem && elem != 0)
    {
        sum += elem;
        cout << "after " << elem << ", sum is " << sum << endl;
    }
    cout << "byte!" << endl;
    return 0;
}