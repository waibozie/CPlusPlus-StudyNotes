#include <iostream>
#include <string>
#include <fstream>
struct Patron
{
    std::string name;
    double balance;
};

int main()
{
    using namespace std;

    ifstream inFile;
    inFile.open("./patrons.txt");
    if (!inFile.is_open())
    {
        cout << "open file './patrons.txt' failed.\n";
        exit(EXIT_FAILURE);
    }

    int patronCnt;
    inFile >> patronCnt;
    cout << "there are " << patronCnt << " patrons.\n";

    Patron *patrons = new Patron[patronCnt];
    for (int i = 0; i < patronCnt; i++)
    {
        while (inFile.get() != '\n')
            ;
        getline(inFile, patrons[i].name);
        inFile >> patrons[i].balance;
    }
    inFile.close();
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
