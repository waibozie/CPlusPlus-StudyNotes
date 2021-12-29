// programmingpractice06.cpp -- fuel consumption
#include <iostream>

int main()
{
    using namespace std;
    int mile, gallon;
    cout << "Enter the mile of car runned: ";
    cin >> mile;
    cout << "Enter the gallon of car consump: ";
    cin >> gallon;
    cout << "Your car can run " << mile / (double)gallon << " mile per gallon" << endl
         << endl;

    int kilometer, litre;
    cout << "Switch europe fuel consumption" << endl;
    cout << "Enter the kilometer of car runned: ";
    cin >> kilometer;
    cout << "Enter the litre of car consump: ";
    cin >> litre;
    cout << "Your car will consump: " << litre / (double)kilometer * 100 << "litre fuel after run 100 kilometer" << endl;

    return 0;
}