// programmingpractice05.cpp -- fuel consumption convert
#include <iostream>

int main()
{
    using namespace std;
    const double gallon2LitreFactor = 3.875;
    const double kilometer2Mile = 0.6214;

    double europe;
    cout << "Enter europe fuel consumption: ";
    cin >> europe;
    
    double miles = 100 * kilometer2Mile;
    double fuel = europe / gallon2LitreFactor;
    cout << europe << "/100km = " << miles / fuel << " mpg" << endl;

    return 0;
}