#include <iostream>

long long factorial(unsigned int num);

int main()
{
    unsigned int num = 0;
    std::cout << "Enter an integer (q to quit)" << std::endl;
    while(std::cin >> num)
    {
        std::cout << "The factorial of " << num << " is " << factorial(num)
                  << "\nEnter another integer (q to quit): ";
    }
    std::cout << "Bye!" << std::endl;

    return 0;
}

long long factorial(unsigned int num)
{
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}
