#include <iostream>
#include <array>

int main()
{
    using namespace std;

    array<double, 3> runscores;
    cout << "Enter your run score of 40 meters" << endl;
    cout << "First: ";
    cin >> runscores[0];

    cout << "Second: ";
    cin >> runscores[1];

    cout << "Last: ";
    cin >> runscores[2];

    double average = (runscores[1] + runscores[1] + runscores[2]) / 3;
    cout << "your average: " << average << endl;

    return 0;
}