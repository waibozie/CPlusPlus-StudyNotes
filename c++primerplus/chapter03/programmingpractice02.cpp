// programmingpractice02.cpp -- BMI caculator

#include <iostream>

int main()
{
    using namespace std;

    const int feet2InchFactor = 12;
    const double inch2MeterFactor = 0.0254;
    const double kilogram2PoundFactor = 2.2;

    int feet, inch;
    double pound;

    cout << "BMI caculator" << endl;
    cout << "Enter your height, in feets and inchs" << endl;
    cout << "First, enter the feets: ";
    cin >> feet;
    cout << "Second, enter the inchs: ";
    cin >> inch;
    cout << "Enter your weight in pound:";
    cin >> pound;

    double meters = (feet * feet2InchFactor + inch) * inch2MeterFactor;
    double kilos = pound / kilogram2PoundFactor;
    cout << "your BMI is " << kilos / meters / meters << endl;

    return 0;
}