#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
    ifstream inFile;
    inFile.open("./programmingpractice08.cpp");
    if (!inFile.is_open())
    {
        cout << "open file './programmingpractice08.cpp' failed.\n";
        exit(EXIT_FAILURE);
    }

    long charCnt = 0;
    // \r\n will be seen as \n
    while (inFile.get() != EOF)
    {

        charCnt++;
    }

    inFile.close();
    cout << "file './programmingpractice08.cpp' contains " << charCnt << " chars\n";
    return 0;
}