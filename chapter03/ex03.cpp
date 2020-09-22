#include <iostream>

int main()
{
    const int SECONDS_TO_MINUTE = 60;
    const int MINUTES_TO_DEGREE = 60;

    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;
    std::cout << "First, enter the degrees: ";
    float degrees = 0;
    std::cin >> degrees;
    std::cout << "Next, enter the minutes of arc: ";
    float minutes = 0;
    std::cin >> minutes;
    std::cout << "Finally, enter the seconds of arc: ";
    float seconds = 0;
    std::cin >> seconds;

    float result = degrees + (minutes + (seconds / SECONDS_TO_MINUTE)) / MINUTES_TO_DEGREE;
    std::cout << degrees << " degrees, " << minutes << " minutes, " 
              << seconds << " seconds = " << result << " degrees" << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
