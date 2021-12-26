// programmingpractice02.cpp -- conver long to yd
#include <iostream>

double convertLong2Yd(double);

int main()
{
    using namespace std;
    double lo;
    
    cout << "Conver long to yd, input your long: ";
    cin >> lo;
    cout << lo << " long = " << convertLong2Yd(lo) << " yd" << endl;
    
    return 0;
}

double convertLong2Yd(double lo)
{
    return lo * 220;
}