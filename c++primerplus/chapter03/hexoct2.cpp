// program list 3.4
// hexoct2.cpp -- display values in hex and octal
#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;  //decimal integer literal
    int waist = 42;  // hexadecimal integer literal
    int inseam = 42; // octal integer liteger

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << hex; // manipulator for changing number base
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << oct; // manipulator for changing number base
    cout << "inseam = " << inseam << " (042 in octal)" << endl;
    return 0;
}