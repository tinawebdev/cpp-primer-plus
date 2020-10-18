#include <iostream>
#include <string>

struct patrons
{
    std::string name;
    double contribution;
};

int main()
{
    int records = 0;
    int noPatrons = 0;
    int noGrandPatrons = 0;

    std::cout << "Enter the number of contributors: ";
    std::cin >> records;
    std::cout << std::endl;

    patrons *list = new patrons[records];

    for (int i = 0; i < records; i++)
    {
        std::cout << "Enter the name of contributor " << i+1 << ": ";
        std::cin.get();
        std::getline(std::cin, list[i].name);
        std::cout << "Enter the contribution of contributor " << i+1 << ": ";
        std::cin >> list[i].contribution;
        std::cout << std::endl;
    }

    std::cout << "\nGrand Patrons\n";
    for (int i = 0; i < records; i++)
    {
        if (list[i].contribution >= 10000)
        {
            std::cout << list[i].name << std::endl;
            noGrandPatrons++;
        }
    }

    if (noGrandPatrons == 0) 
        std::cout << "None.\n";

    std::cout << "\nPatrons\n";
    for (int i = 0; i < records; i++)
    {
        if (list[i].contribution < 10000)
        {
            std::cout << list[i].name << std::endl;
            noPatrons++;
        }
    }

    if (noPatrons == 0)
        std::cout << "none\n";

    delete [] list;
    return 0;
}
