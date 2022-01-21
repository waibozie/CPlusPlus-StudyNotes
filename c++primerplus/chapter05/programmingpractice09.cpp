#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string word;
    int sum = 0;

    cout << "Enter words (to stop, type the word \"done\"):" << endl;

    while (cin >> word && word != "done")
    {
        sum += 1;
    }
    cout << "You entered a total of " << sum << " words." << endl;

    return 0;
}