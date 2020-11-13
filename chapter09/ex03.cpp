#include <iostream>
#include <cstring>
#include <new>

const int StructSize = 2;

struct chaff 
{ 
    char dross[20]; 
    int slag;
};

chaff buffer[sizeof(chaff) * StructSize];

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    chaff * input = new (buffer) chaff[StructSize];
    char str[20] {'\0'};

    for (int i = 0; i < StructSize; i++)
    {
        std::cout << "Enter name " << i + 1 << ": ";
        cin.getline(str, 20);
        strcpy(input[i].dross, str);
        std::cout << "Enter the quantity " << i + 1 << ": ";
        std::cin >> input[i].slag;
        std::cin.get();
    }
    std::cout << std::endl;

    for (int i = 0; i < StructSize; i++)
    {
        std::cout << "Dross for chaff " << i + 1 << " is: " << input[i].dross << std::endl;
        std::cout << "Slag for chaff " << i + 1 << " is: " << input[i].slag << std::endl;
    }

    return 0;
}
