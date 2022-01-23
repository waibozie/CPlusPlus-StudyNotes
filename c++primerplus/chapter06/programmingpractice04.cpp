#include <iostream>

const int strsize = 20;
// Benevolent Order of Programmers name structure
struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1=title, 2 = bopname
};

int main()
{
    using namespace std;

    bop bops[] = {
        {"Wimp Macho", "unknown", "Wimp Macho", 2},
        {"Raki Rhodes", "Jumior Programer", "unknown", 1},
        {"Celia Laiter", "unknown", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "unknown", 1},
        {"Pat Hand", "unknown", "LOOPY", 2},
    };
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name     b. display by title\n"
            "c. display by bopname  d. display by reference\n"
            "q. quit\n";
    cout << "Enter your choice: ";
    char choice;
    while (cin.get(choice))
    {
        switch (choice)
        {
        case 'a':
            for (int i = 0; i < 5; i++)
            {
                cout << bops[i].fullname << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                cout << bops[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                cout << bops[i].bopname << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < 5; i++)
            {
                switch (bops[i].preference)
                {
                case 0:
                    cout << bops[i].fullname << endl;
                    break;
                case 1:
                    cout << bops[i].title << endl;
                    break;
                case 2:
                    cout << bops[i].bopname << endl;
                    break;
                }
            }
            break;
        case 'q':
            cout << "Bye\n";
            break;
        case '\n':
            continue;
        default:
            while (cin.get() != '\n')
                ;
            cout << "ilegal input, Next choice: ";
            continue;
        }
        cout << "Next choice: ";
    }

    return 0;
}
