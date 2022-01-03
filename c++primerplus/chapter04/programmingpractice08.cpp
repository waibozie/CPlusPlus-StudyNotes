#include <iostream>

struct Pizza
{
    char brand[20];
    double diameter;
    double weight;
};

int main()
{
    using namespace std;

    Pizza *p = new Pizza;
    cout << "Pizza diameter: ";
    cin >> p->diameter;
    cin.get(); // escape \n
    cout << "Pizza brand: ";
    cin.getline(p->brand, 20);
    cout << "Pizza weight: ";
    cin >> p->weight;

    cout << "Pizza information" << endl
         << "brand: " << p->brand << endl
         << "diameter: " << p->diameter << endl
         << "weight: " << p->weight << endl;

    delete p;
    return 0;
}