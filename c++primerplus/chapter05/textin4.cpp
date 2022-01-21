// program list 5.19
// textin4.cpp -- reading chars with cin.get()

#include <iostream>
int main(void)
{
    using namespace std;

    int ch;
    int count = 0;
    while ((ch = cin.get())!=EOF) // test for end-of-file
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl
         << count << " characters read\n";

    return 0;
}