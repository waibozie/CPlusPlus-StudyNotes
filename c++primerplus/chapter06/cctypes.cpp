// program list 6.8
// cctypes.cpp -- using the ctype.h library

#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    cout << "Enter text for analysis, and type @"
         << " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch); // get first character
    while (ch != '@')
    {
        if (isalpha(ch)) // is it an alphabetic character?
            chars++;
        else if (isspace(ch)) // is it whitespace character?
            whitespace++;
        else if (isdigit(ch)) // is it a digit?
            digits++;
        else if (ispunct(ch)) // is it puncuation?
            punct++;
        else
            others++;
        cin.get(ch); // get next character
    }

    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
    return 0;
}