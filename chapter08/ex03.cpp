#include <iostream>
#include <string>
#include <cctype>

void convert(std::string &str);

int main()
{
    std::string str;

    std::cout << "Enter a string (q to quit): ";
    std::getline(std::cin, str);
    while (str != "q")
    {
        convert(str);
        std::cout << str << std::endl;
        std::cout << "New string (q to quit): ";
        std::getline(std::cin, str);
    }
    std::cout << "Bye.";
    
    return 0;
}

void convert(std::string &str)
{
    for (unsigned int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
}
