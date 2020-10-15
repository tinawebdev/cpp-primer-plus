#include <iostream>
#include <string>

struct car
{
    std::string name;
    int year;
};

int main()
{

    int qty = 0;
    std::cout << "How many cars do you wish to catalog? ";
    (std::cin >> qty).get();

    if (qty > 0) 
    {
        car* records = new car[qty];

        for (int i = 0; i < qty; i++)
        {
            std::cout << "Car #" << i + 1 << ":" << std::endl;
            std::cout << "Please enter the make: ";
            std::getline(std::cin, records[i].name);
            std::cout << "Please enter the year made: ";
            (std::cin >> records[i].year).get();
        }

        std::cout << "Here is your collection:" << std::endl;
        for (int i = 0; i < qty; i++)
            std::cout << records[i].year << '\t' << records[i].name << std::endl;

        delete[] records;
    }
    else 
    {
        std::cout << "Bye!";
    }

    return 0;
}