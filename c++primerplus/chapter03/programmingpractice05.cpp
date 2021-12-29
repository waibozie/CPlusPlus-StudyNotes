// programmingpractice05.cpp -- population percent
#include <iostream>

int main()
{
    using namespace std;
    long long world, us;

    cout << "Enter the world's population: ";
    cin >> world;
    cout << "Enter the population of the US: ";
    cin >> us;
    cout << "The population of the us is "<< (double)us / world * 100.0 << "% of the world population.";
   

    return 0;
}