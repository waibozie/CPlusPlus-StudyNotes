// program list 5.5
// bigstep.cpp -- count as directed

#include <iostream>

int main()
{
    using std::cin;
    using std::cout; // a using declaration
    using std::endl;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    return 0;
}