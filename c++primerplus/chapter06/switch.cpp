// program list 6.10
// switch.cpp -- using the switch statement

#include <iostream>
using namespace std;
void showmenu(); // function prototypes
void report();
void confirt();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            cout << "\a\n";
            break;
        case 2:
            report();
            break;
        case 3:
            cout << "The boss was in all day.\n";
            break;
        case 4:
            confirt();
            break;

        default:
            cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Byte!\n";
    return 0;
}

void showmenu()
{
    cout << "Please enter 1, 2, 3, 4, or 5:\n"
            "1) alarm       2) report\n"
            "3) alibi       4) confort\n"
            "5) quit\n";
}

void report()
{
    cout << "It's been an excellent week for business.\n"
            "Sales are up 120%. Expense are down 35%.\n";
}

void confirt()
{
    cout << "Your employees think you the finest CEO\n"
            "in the industry. The board of directions think\n"
            "you are the finest CEO in industry.\n";
}
