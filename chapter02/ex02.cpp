#include <iostream>

int main()
{
    std::cout << "Enter a distance in furlongs: " << std::endl;
    float furlongs = 0;
    std::cin >> furlongs;
    float yards = furlongs * 220;
    std::cout << furlongs << " furlongs equals " << yards << " yards.";

    std::cin.get();
    return 0;
}
