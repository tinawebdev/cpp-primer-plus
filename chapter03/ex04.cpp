#include <iostream>

int main()
{
    const int SECONDS_PER_MINUTE = 60;
    const int SECONDS_PER_HOUR = 3600;
    const int SECONDS_PER_DAY = 86400;

    std::cout << "Enter the number of seconds:" << std::endl;
    long long inputSeconds = 0;
    std::cin >> inputSeconds;

    int days, hours, minutes, seconds;
    days = static_cast<int>(inputSeconds) / SECONDS_PER_DAY;
    hours = (inputSeconds % SECONDS_PER_DAY) / SECONDS_PER_HOUR;
    minutes = (inputSeconds % SECONDS_PER_HOUR) / SECONDS_PER_MINUTE;
    seconds = inputSeconds % SECONDS_PER_MINUTE;

    std::cout << inputSeconds << " seconds = " << days << " days, " 
              << hours << " hours, " << minutes << " minutes, " 
              << seconds << " seconds" << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
