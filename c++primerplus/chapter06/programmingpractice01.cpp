#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;

    while (cin.get(ch) && ch != '@')
    {
        if (isdigit(ch))
            continue;
        else if (isupper(ch))
            cout << char (towlower(ch));
        else if (islower(ch))
            cout << char (toupper(ch));
        else
            cout << ch;
    }
    cout << "Byte!\n";
    return 0;
}