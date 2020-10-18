#include <iostream>

int main()
{
    int tvarp;

    std::cout << "Enter tvarps."<< std::endl;
    std::cout << "Enter a negative value or a non-numeric character to quit." << std::endl;
    std::cin >> tvarp;

    while(std::cin && tvarp >= 0)
    {
        if(tvarp <= 5000)
            std::cout << "tax = " << 0 << std::endl;
        else if(5000 < tvarp && tvarp <= 15000)
            std::cout << "tax = " << (tvarp-5000)*0.1 << std::endl;
        else if(15000 < tvarp && tvarp <= 35000)
            std::cout << "tax = " << 10000*0.1+(tvarp-15000)*0.15 << std::endl;
        else if(tvarp > 35000)
            std::cout << "tax = " << 10000*0.1+20000*0.15+(tvarp-35000)*0.2 << std::endl;
        std::cout << "Next: ";
        std::cin >> tvarp;
    }

    return 0;
}
