#include <iostream>
int main()
{
    char ch;
    std::cout << "Please enter one of the following choices:\n"
        " c) carnivore\t p) pianist\n"
        " t) tree\t g) game\n";
    std::cin >> ch;
    while(ch !='c' && ch !='p' && ch !='t' && ch !='g')
    {
        std::cout << "Please enter a c, p, t, or g: ";
        std::cin >> ch;
    }
    switch(ch)
    {
        case 'c' : std::cout << "Carnivore\n"; break;
        case 'p' : std::cout << "Pianist\n"; break;
        case 't' : std::cout << "A maple is a tree.\n"; break;
        case 'g' : std::cout << "Game\n"; break;
    }
    return 0;
}
