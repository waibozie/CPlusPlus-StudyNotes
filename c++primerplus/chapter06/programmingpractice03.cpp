#include <iostream>

void showmenu();
void carnivore();
void pianist();
void tree();
void game();

int main()
{
    using namespace std;
    char ch;

    showmenu();
    while (cin.get(ch))
    {
        switch (ch)
        {
        case 'c':
            carnivore();
            break;
        case 'p':
            pianist();
            break;
        case 't':
            tree();
            break;
        case 'g':
            game();
            break;
        case '\n':
            continue;
        default:
            while (cin.get() != '\n')
                ;
            cout << "Please enter a c, p, t, or g: ";
            continue;
        }
        showmenu();
    }

    return 0;
}

void showmenu()
{
    std::cout << "Please enter one of the following choice: \n"
              << "c) carnivore     p) pianist\n"
              << "t) tree          g) game\n";
}

void carnivore()
{
    std::cout << "carnivore, come in soon.\n";
}
void pianist()
{
    std::cout << "pianist, come in soon.\n";
}
void tree()
{
    std::cout << "A map is a tree.\n";
}
void game()
{
    std::cout << "game, come in soon.\n";
}
