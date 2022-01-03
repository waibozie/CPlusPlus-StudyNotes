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

    Pizza p;
    cout << "Pizza brand: ";
    cin.getline(p.brand, 20);
    cout << "Pizza diameter: ";
    cin >> p.diameter;
    cout << "Pizza weight: ";
    cin >> p.weight;

    cout << "Pizza information" << endl
         << "brand: " << p.brand << endl
         << "diameter: " << p.diameter << endl
         << "weight: " << p.weight << endl;
    return 0;
}