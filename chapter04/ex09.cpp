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
    CandyBar *snack = new CandyBar[3];

    snack[0].name = "Mocha Munch";
    snack[0].weight = 2.3;
    snack[0].calories = 350;

    snack[1].name = "Super Snack";
    snack[1].weight = 3.5;
    snack[1].calories = 420;
    
    snack[2].name = "Chocosnack";
    snack[2].weight = 3.1;
    snack[2].calories = 230;

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

    delete[] snack;

    return 0;
}
