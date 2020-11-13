#include <iostream>
#include <vector>
#include "golf.h"

int main()
{
    int count;
    int actCount;
    std::cout << "Enter the number of golfers: ";
    std::cin >> count;
    std::cin.get();
    std::cout << "Fist golfer is Ann Birdfree.\n";

    std::vector<golf> golfers;
    golf foo;

    for (int i = 0; i < count; i++)
        golfers.push_back(foo);

    setgolf(golfers[0], "Ann Birdfree", 24);

    for (actCount = 1; actCount < count; actCount++)
    {
        std::cout << "Golfer #" << actCount + 1 << std::endl;
        if (setgolf(golfers[actCount]) == 0)
            break;
    }
 
    std::cout << "\nDisplaying golfers:\n";
    for (int i = 0; i < actCount; i++)
        showgolf(golfers[i]);

    std::cout << std::endl;
    return 0;
}

