#include <iostream>
#include <array>

int main()
{
    std::array<float, 3> times;

    std::cout << "Enter the first 40m time in seconds: ";
    std::cin >> times[0];
    std::cout << "Enter the second 40m time in seconds: ";
    std::cin >> times[1];
    std::cout << "Enter the third 40m time in seconds: ";
    std::cin >> times[2];

    float average = (times[0] + times[1] + times[2]) / 3;

    std::cout << std::endl;
    std::cout << "The first time is: " << times[0] << " seconds." << std::endl;
    std::cout << "The second time is: " << times[1] << " seconds." << std::endl;
    std::cout << "The third time is: " << times[2] << " seconds." << std::endl;
    std::cout << std::endl;
    std::cout << "The average time is " << average << " seconds." << std::endl;

    std::cin.get();
    std::cin.get();

    return 0;
}
