#include <iostream>
#include <string>
#include <fstream>

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
    const int SIZE = 60;
    char filename[SIZE];
    std::ifstream inFile;

    std::cout << "Enter name of data file: ";
    std::cin.getline(filename, SIZE);
    inFile.open(filename);

    if(!inFile.is_open())
    {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    (inFile >> records).get();

    patrons *list = new patrons[records];

    for (int i = 0; i < records; i++)
    {
        std::getline(inFile, list[i].name);
        (inFile >> list[i].contribution).get();
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
        std::cout << "none\n";

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
