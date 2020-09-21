#include <iostream>

float CelsiusToFahrenheit(float c);

int main()
{
    std::cout << "Enter a temperature in Celsius: " << std::endl;
    float celsius = 0;
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius equals " 
              << CelsiusToFahrenheit(celsius) << " degrees Fahrenheit." 
              << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}

float CelsiusToFahrenheit(float c)
{
    return 1.8 * c + 32.0;
}
