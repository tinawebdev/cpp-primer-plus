#include <iostream>
#include <vector>
#include "golf.h"

int main()
{
    int count;
    std::cout << "Enter the number of golfers: ";
    std::cin >> count;
    std::cin.get();

    std::vector<Golf> golfers;
    Golf foo;

    for (int i = 0; i < count; i++)
        golfers.push_back(foo);

    for (int i = 1; i < count; i++)
    {
        std::cout << "Golfer #" << i + 1 << std::endl;
        golfers[i].setgolf(i);
    }
 
    std::cout << "\nDisplaying golfers:\n";
    for (int i = 0; i < count; i++)
        golfers[i].showgolf();

    std::cout << std::endl;
    return 0;
}
