#include <iostream>
#include <string>

struct pizza
{
    std::string companyName;
    int diameter;
    float weight;
};

int main()
{
    pizza pepperoni;

    std::cout << "Enter the company name: ";
    std::getline(std::cin, pepperoni.companyName);

    std::cout << "Enter the diameter: ";
    std::cin >> pepperoni.diameter;

    std::cout << "Enter the weight: ";
    std::cin >> pepperoni.weight;

    std::cout << std::endl;

    std::cout << "Company name: " << pepperoni.companyName << std::endl;
    std::cout << "Diameter: " << pepperoni.diameter << std::endl;
    std::cout << "Weight: " << pepperoni.weight << std::endl;

    return 0;
}
