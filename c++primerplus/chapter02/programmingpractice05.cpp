// programmingpractice05.cpp -- convert Celsius to Fahreneit
#include <iostream>

double convertCelsius2Fahreneit(double);

int main()
{
    using namespace std;
    double celsius;

    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << convertCelsius2Fahreneit(celsius) << " degrees Fahrenheit." << endl;

    return 0;
}

double convertCelsius2Fahreneit(double c)
{
    return 1.8 * c + 32.0;
}