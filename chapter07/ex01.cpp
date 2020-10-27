#include <iostream>

float harmonic(int x, int y);

int main()
{
    int num1 = 1;
    int num2 = 1;

    std::cout << "Enter a pair of numbers (0 for terminate): ";

    while (std::cin >> num1 >> num2 && num1 != 0 && num2 !=0 )
    {
        std::cout << "Harmonic = " << harmonic(num1, num2) << std::endl;
        std::cout << "Enter a pair of numbers: ";
    }
    return 0;
}

float harmonic(int x, int y)
{
    return (2.0 * x * y) / (x + y);
}
