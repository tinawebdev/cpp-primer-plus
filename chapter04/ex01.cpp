#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your first name? ";
    std::string firstName;
    getline(std::cin, firstName);
    
    std::cout << "What is your last name? ";
    std::string lastName;
    getline(std::cin, lastName);
    
    std::cout << "What letter grade do you deserve? ";
    char grade;
    std::cin >> grade;
    
    std::cout << "What is your age? ";
    int age;
    std::cin >> age;
    
    std::cout << "Name: " << lastName << ", " << firstName << std::endl;
    std::cout << "Grade: " << static_cast<char>(grade + 1) << std::endl;
    std::cout << "Age: " << age << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
