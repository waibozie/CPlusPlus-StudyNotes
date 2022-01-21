#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char word[128];
    int sum = 0;

    cout << "Enter words (to stop, type the word \"done\"):" << endl;

    while (cin >> word && strcmp(word, "done"))
    {
        sum += 1;
    }
    cout << "You entered a total of " << sum << " words." << endl;

    return 0;
}