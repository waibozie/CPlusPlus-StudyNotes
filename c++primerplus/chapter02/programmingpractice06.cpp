// programmingpractice06.cpp -- convert light year to astronomical units
#include <iostream>

double convertLightYear2AstronomicalUnit(double);

int main()
{
    using namespace std;
    double lightYear;

    cout << "Enter the number of light years: ";
    cin >> lightYear;
    cout << lightYear << " light years = " << convertLightYear2AstronomicalUnit(lightYear) << " astronomical units." << endl;

    return 0;
}

double convertLightYear2AstronomicalUnit(double lightYear)
{
    return lightYear * 63240;
}