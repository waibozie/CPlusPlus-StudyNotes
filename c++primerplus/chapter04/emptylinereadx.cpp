// empyhlinereadx.cpp -- try the different action for empty line of getline() and get()
#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 5;
    char foo[ArSize];
    char bar[ArSize];

    cout << "get action\n";
    cout << "Enter foo: ";
    cin.get(foo, ArSize);
    cout << "Enter bar: ";
    cin.get(bar, ArSize);
    cout << "get action\nfoo: " << foo << endl;
    cout << "bar: " << bar << endl;

    int  c = cin.get();
    if (c != '\n')
    {
        cin.unget();
    }
    

    cout << "getline action\n";
    cout << "Enter foo: ";
    cin.getline(foo, ArSize);
    cin.clear();
    cout << "Enter bar: ";
    cin.getline(bar, ArSize);
    cout << "foo: " << foo << endl;
    cout << "bar: " << bar << endl;

    return 0;
}