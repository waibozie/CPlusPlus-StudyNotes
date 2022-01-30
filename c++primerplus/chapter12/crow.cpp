#include <iostream>
#include <cstring>
#include "crow.h"

Cow::Cow()
{
    std::cout << "new default constructor\n";
    new (this) Cow("", "", 0.0);
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    std::cout << "new constructor: [" << nm << ", " << ho << ", " << wt << "]\n";
    strcpy(name, nm);
    int len = strlen(ho);
    hobby = new char[len + 1];
    strcpy(hobby, ho);
    wight = wt;
}

Cow::Cow(const Cow &c)
{
    std::cout << "new copy constructor: [" << c.name << ", " << c.hobby << ", " << c.wight << "]\n";
    strcpy(name, c.name);
    int len = strlen(c.hobby);
    hobby = new char[len + 1];
    strcpy(hobby, c.hobby);
    wight = c.wight;
}

Cow::~Cow()
{
    std::cout << "delete cow: [" << name << ", " << hobby << ", " << wight << "]\n";
    delete[] hobby;
}

Cow & Cow::operator=(const Cow &c)
{
    std::cout << "assign operator: [" << name << ", " << hobby << ", " << wight << "] = ["
              << c.name << ", " << c.hobby << ", " << c.wight << "]\n";
    strcpy(name, c.name);
    delete[] hobby;
    int len = strlen(c.hobby);
    hobby = new char[len + 1];
    strcpy(hobby, c.hobby);
    wight = c.wight;
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "name: " << name << std::endl
              << "hobby: " << hobby << std::endl
              << "weight: " << wight << std::endl;
}