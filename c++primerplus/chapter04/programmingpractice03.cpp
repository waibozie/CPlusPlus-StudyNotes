#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char firstName[20];
    char lastName[20];

    cout << "Enter your first name: ";
    cin.getline(firstName, 20);
    cout << "Enter your last name: ";
    cin.getline(lastName, 20);

    cout << "Here's the information in a single string: " << lastName << ", " << firstName << endl;
    return 0;
}