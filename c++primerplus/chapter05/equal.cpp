// program list 5.10
// equal.cpp -- equality vs assignment

#include <iostream>

int main()
{
    using namespace std;
    int quizscores[10] =
        {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    cout << "Done it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout << "quiz " << i << " is a 2o\n";
    // Warning: you may prefer reading about this program
    // to actually running it.
    cout << "Done it dangerously wrong:\n";
    for (i = 0; quizscores[i] = 20; i++)
        cout << "quize " << i << " is a 20\n";

    return 0;
}