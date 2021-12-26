// programmingpractice04.cpp -- month count of year old
#include <iostream>

int convertAge2month(int);

int main()
{
    using namespace std;
    double age;

    cout << "Conver age to month" << endl
         << "Enter your age: ";
    cin >> age;
    cout << age << " age contain " << convertAge2month(age) << " months" << endl;

    return 0;
}

int convertAge2month(int age)
{
    return age * 12;
}