#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your favorite dessert: ";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    std::cin.get();
    std::cin.get();
    return 0;
}
