#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);

    cout << "Here's the information in a single string: " << lastName << ", " << firstName << endl;
    return 0;
}