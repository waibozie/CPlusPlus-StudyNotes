// program list 4.15
//  pointer.cpp -- our first pointer variable

#include <iostream>

int main()
{
    using namespace std;

    int updates = 6;      // declare a variable
    int *p_updates;       // declare pointer to an int
    p_updates = &updates; // assign address of int pointer

    // express value two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}