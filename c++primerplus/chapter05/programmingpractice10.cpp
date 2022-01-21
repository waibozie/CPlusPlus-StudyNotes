#include <iostream>
#include <string>

int main()
{
    using namespace std;

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < rows; c++)
        {
            if (c < rows - r - 1)
            {
                cout << ".";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}