#include <iostream>
#include <cstring>

int main()
{
    const int CHAR_SIZE = 20;

    std::cout << "Enter your first name: ";
    char firstName[CHAR_SIZE];
    std::cin.getline(firstName, CHAR_SIZE);

    std::cout << "Enter your last name: ";
    char lastName[CHAR_SIZE];
    std::cin.getline(lastName, CHAR_SIZE);

    char fullName[CHAR_SIZE];
    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);

    std::cout << "Here's the information in a single string: " << fullName << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
