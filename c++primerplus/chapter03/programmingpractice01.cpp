// programmingpractice01.cpp -- convert user height to feet and inch

#include <iostream>

int main()
{
    using namespace std;

    const int factor = 12;

    int in;
    cout << "Enter your height(unit in):_____\b\b\b\b\b";
    cin >> in;

    int ft = in / factor;
    in = in % factor;

    cout << "Ohh, you are "
         << ft
         << " feet and "
         << in
         << " inch"
         << endl;
    return 0;
}