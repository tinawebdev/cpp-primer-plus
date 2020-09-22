#include <iostream>

int main()
{
    std::cout << "Enter the world's population:" << std::endl;
    unsigned long long worldPopulation;
    std::cin >> worldPopulation;
    std::cout << "Enter the population of the US:" << std::endl;
    unsigned long long countryPopulation;
    std::cin >> countryPopulation;
    double result = double(countryPopulation) * 100.0f / worldPopulation;
    std::cout << "The population of the US is " << result 
              << "% of the world population." << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
