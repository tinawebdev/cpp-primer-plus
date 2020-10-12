#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    float weight;
    int calories;
};

int main()
{
    CandyBar snack[3] =
    {
        {"Mocha Much", 2.3, 350},
        {"Super Snack", 3.5, 420},
        {"Chocosnack", 3.1, 230}
    };

    std::cout << "name: " << snack[0].name << std::endl;
    std::cout << "weight: " << snack[0].weight << std::endl;
    std::cout << "calories: " << snack[0].calories << std::endl;

    std::cout << std::endl;

    std::cout << "name: " << snack[1].name << std::endl;
    std::cout << "weight: " << snack[1].weight << std::endl;
    std::cout << "calories: " << snack[1].calories << std::endl;

    std::cout << std::endl;

    std::cout << "name: " << snack[2].name << std::endl;
    std::cout << "weight: " << snack[2].weight << std::endl;
    std::cout << "calories: " << snack[2].calories << std::endl;

    return 0;
}
