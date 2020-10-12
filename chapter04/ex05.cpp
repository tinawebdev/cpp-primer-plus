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
    CandyBar snack =
    {
        "Mocha Much",
        2.3,
        350
    };

    std::cout << "name: " << snack.name << std::endl;
    std::cout << "weight: " << snack.weight << std::endl;
    std::cout << "calories: " << snack.calories << std::endl;

    return 0;
}
