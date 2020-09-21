#include <iostream>

int main()
{
    std::cout << "Enter your age in years: " << std::endl;
    int age = 0;
    std::cin >> age;

    std::cout << "You are " << age * 12 << " months old." << std::endl;

    std::cin.get();
    return 0;
}
