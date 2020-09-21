#include <iostream>

int main()
{
    const int FOOT_IN_INCHES = 12;
    std::cout << "Enter your height in inches: __\b\b";
    int heightInInches = 0;
    std::cin >> heightInInches;
    int heightInFoot = heightInInches / FOOT_IN_INCHES;
    int inches = heightInInches % FOOT_IN_INCHES;
    std::cout << "You are " << heightInFoot << " feet " 
              << inches << " inches." << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
