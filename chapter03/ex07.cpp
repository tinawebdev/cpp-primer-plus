#include <iostream>

int main()
{
    const float GALLON_IN_LITERS = 3.875;
    const float ONE_HUNDRED_KM_IN_M = 62.14;
    
    std::cout << "How many liters of gasoline did you use per 100 kilometers:" << std::endl;
    float kilometers;
    std::cin >> kilometers;

    float gallons = kilometers / GALLON_IN_LITERS;    
    float result = ONE_HUNDRED_KM_IN_M / gallons;

    std::cout << "You used " << result << " miles per gallon." << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
