// program list 6.4
// ifelseif.cpp -- using the logical OR operator

#include <iostream>

int main()
{

    using namespace std;
    cout << "This program may reformat your hard disk\n"
         << "and  destory all your data.\n"
         << "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y') // y or Y
        cout << "You were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wish choice...byte\n";
    else
        cout << "That wasn't a y or n! Apparently you "
                "can't follow\ninstuctions, so "
                "I'll trash your disk anyway.\a\a\a\n";

    return 0;
}