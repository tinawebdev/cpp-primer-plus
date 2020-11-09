#include <iostream>
#include <string>

void display(std::string text, int n = 0);

int main()
{
    int n = 1;
    const std::string text {"text"};

    std::cout << "display(text):\n";
    display(text);

    std::cout << std::endl << "\ndisplay(text, n):\n";
    display(text, n);

    std::cout << std::endl << "\ndisplay(text, n):\n";
    display(text, n);

    std::cout << std::endl << "\ndisplay(text):\n";
    display(text);

    std::cout << std::endl;
    return 0;
}

void display (const std::string text, int n)
{
    static int calls = 1;

    if (n == 0)
    {
        std::cout << text;
    }
    else
    {
        for (int i = 0; i < calls; i++)
            std::cout << text << " ";
    }
    calls++;
}
