#include <iostream>

double LightyearsToAstronomicalUnits(double lightYears);

int main()
{
    std::cout << "Enter a number of light years: " << std::endl;
    double lightYears = 0;
    std::cin >> lightYears;
    std::cout << lightYears << " light years equals " 
              << LightyearsToAstronomicalUnits(lightYears) 
              << " astronomical units." << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}

double LightyearsToAstronomicalUnits(double lightYears)
{
    return lightYears * 63240.0;
}
