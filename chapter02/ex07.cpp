#include <iostream>

void DisplayHoursAndMinutes(int h, int m);

int main()
{
    int hours, minutes;
    
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    
    DisplayHoursAndMinutes(hours,minutes);
    
    std::cin.get();
    std::cin.get();
    return 0;
}

void DisplayHoursAndMinutes(int h, int m)
{
    std::cout << "Time: " << h << ":" << m << std::endl;
}
