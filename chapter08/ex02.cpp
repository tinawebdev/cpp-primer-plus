#include <iostream>
#include <cstring>

const int SLEN = 64;

struct candyBar
{
    char brand[SLEN];
    double weight;
    int calories;
};

void setValues(candyBar &bar, char * brand = "Millenium Munch", double weight = 2.85, int calories = 350);
void display(const candyBar &bar);

int main()
{
    candyBar bar;
    setValues(bar);
    display(bar);
    return 0;
}

void setValues(candyBar &bar, char *brand, double weight, int calories)
{
    strcpy(bar.brand, brand);
    bar.weight = weight;
    bar.calories = calories;
}

void display(const candyBar &bar)
{
    std::cout << "brand: " << bar.brand << std::endl;
    std::cout << "weight: " << bar.weight << std::endl;
    std::cout << "calories: " << bar.calories << std::endl;
}
