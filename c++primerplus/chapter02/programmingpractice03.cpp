// programmingpractice03.cpp -- mice profile and action
#include <iostream>

void reportProfile(void);
void reportAction(void);

using namespace std;

int main()
{
    reportProfile();
    reportProfile();
    reportAction();
    reportAction();
    return 0;
}

void reportProfile(void)
{
    cout << "Three blind mice" << endl;
}

void reportAction()
{
    cout << "See how they run" << endl;
}
