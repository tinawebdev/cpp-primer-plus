#include <iostream>

int main()
{
    std::cout << "Enter the distance in kilometers:" << std::endl;
    float kilometers;
    std::cin >> kilometers;

    std::cout << "Enter the amount of spent gasoline:" << std::endl;
    float liters;
    std::cin >> liters;

    float result = liters / (kilometers / 100);

    std::cout << "You have used " << result << " liters per 100 kilometers." << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
