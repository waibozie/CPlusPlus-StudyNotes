// program list 4.14
//  address.cpp -- using the & operator to find adresses

#include <iostream>

int main()
{
    using namespace std;

    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donut address = " << &donuts << endl;

    // NOTE: you may need to use  unsigned (&donuts)
    // and unsigned (&cups)

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;

    return 0;
}