// bitfield.cpp -- bit field for lower device
#include <iostream>

struct torgle_register
{
    unsigned int SN : 4; // 4 bits for SN value
    unsigned int : 4;    // 4 bits unused
    bool goodIn : 1;     // valid input (1 bit)
    bool goodTorgle : 1; // successful torgling
};

int main()
{
    using namespace std;
    torgle_register tr = {14, true, false};

    cout << "torgle register"
         << "\nSN :" << tr.SN
         << "\ngoodIn: " << tr.goodIn
         << "\ngoodTorgle: " << tr.goodTorgle
         << endl;
    cout << "size of torgle register"
         << "total: " << sizeof(tr)
         << endl;

    return 0;
}