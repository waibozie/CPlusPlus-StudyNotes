#include <iostream>
#include <string>

struct car
{
    std::string make;
    int year;
};

int main()
{
    using namespace std;

    int catalog;
    cout << "How many cars do you wish to catalog? ";
    cin >> catalog;

    car *cars = new car[catalog];
    if (cars == NULL)
    {
        exit(1);
    }

    for (int i = 0; i < catalog; i++)
    {
        cin.get(); // 消耗掉数字读取留下的空行
        cout << "Car #" << i + 1 << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].make);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
    }

    cout << "Here is your collection:\n";
    for (int i = 0; i < catalog; i++)
    {
        cout << cars[i].year << " " << cars[i].make << endl;
    }

    delete[] cars;

    return 0;
}