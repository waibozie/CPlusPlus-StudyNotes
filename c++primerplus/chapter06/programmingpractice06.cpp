#include <iostream>
#include <string>
struct Patron
{
    std::string name;
    double balance;
};

int main()
{
    using namespace std;

    int patronCnt;
    cout << "How many patron have? ";
    cin >> patronCnt;

    Patron *patrons = new Patron[patronCnt];
    for (int i = 0; i < patronCnt; i++)
    {
        while (cin.get() != '\n')
            ;

        cout << "patron #" << i + 1 << endl;
        cout << "   name: ";
        getline(cin, patrons[i].name);
        cout << "   balance: ";
        cin >> patrons[i].balance;
    }
    bool none = true;

    cout << "Grand Patons\n";
    for (int i = 0; i < patronCnt; i++)
    {
        if (patrons[i].balance >= 10000)
        {
            cout << patrons[i].name << "\t" << patrons[i].balance << endl;
            none = false;
        }
    }
    if (none)
        cout << "none\n";

    cout << "Patons:\n";
    for (int i = 0; i < patronCnt; i++)
    {
        if (patrons[i].balance < 10000)
        {
            cout << patrons[i].name << "\t" << patrons[i].balance << endl;
            none = false;
        }
    }
    if (none)
        cout << "none\n";

    delete[] patrons;
    return 0;
}
