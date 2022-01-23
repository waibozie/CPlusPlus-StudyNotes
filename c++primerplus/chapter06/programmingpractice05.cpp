#include <iostream>

int calculateTaxi(int);

int main()
{
    using namespace std;

    int salary;
    cout << "Enter your salary, I will tell your how much taxi you should paid: ";
    while (cin >> salary && salary >= 0.0)
    {
        cout << "You should pay " << calculateTaxi(salary) << endl;
        cout << "Enter the next: ";
    }

    cout << "Byte!\n";
    return 0;
}

int calculateTaxi(int salary)
{
    int taxi;
    if (salary <= 5000)
        return 0;
    else if (salary > 5000 && salary <= 15000)
        return (salary - 5000) * 0.10;
    else if (salary > 15000 && salary <= 35000)
        return 10000 * 0.1 + (salary - 15000) * 0.15;
    else
        return 10000 * 0.1 + 20000 * 0.15 + (salary - 35000) * 0.2;
}
