#include <iostream>
#include <cstring>
#include "crow.h"

int main()
{
    using namespace std;
    {
        cout << "enter inner closure\n";
        Cow c; // default constuctor
        c.ShowCow();

        Cow jojo("jojo", "listen music", 100.0);
        jojo.ShowCow();

        Cow yoyo = jojo;
        yoyo.ShowCow();

        c = jojo;
        c.ShowCow();
        cout << "exit inner closure\n";
    }
    return 0;
}