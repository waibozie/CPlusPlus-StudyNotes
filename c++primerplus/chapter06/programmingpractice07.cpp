#include <iostream>
#include <cctype>
#include <cstring>

int main()
{
    using namespace std;
    int vowels = 0, consonants = 0, others = 0;
    char word[20];

    cout << "Enter words (q to quit):\n";
    while (cin >> word && strcmp(word, "q"))
    {
        if (!isalpha(word[0]))
        {
            others++;
            continue;
        }

        switch (tolower(word[0]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowels++;
            break;
        default:
            consonants++;
        }
    }

    cout << vowels << " words beginning with vowels\n"
         << consonants << " words beginning with consonants\n"
         << others << " others\n";
    return 0;
}

// The 12 awesome oxen ambled
// quietly across 15 meters of lawn. q