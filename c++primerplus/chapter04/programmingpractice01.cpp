#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string firstName;
    string lastName;
    char grade;
    unsigned int age;

    cout << "What is your first name? ";
    getline(cin, firstName);
    cout << "What is your last name? ";
    getline(cin, lastName);
    cout << "What letter grade do your deserve? ";
    cin >> grade;
    cout << "What is age? ";
    cin >> age;
    cout << lastName << ", " << firstName << endl
         << "Grade: " << grade << endl
         << "Age: " << age << endl;

    return 0;
}