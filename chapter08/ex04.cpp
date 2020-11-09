#include <iostream>
using namespace std;
#include <cstring>

struct stringy {
    char * str;
    int ct;
};

void set(stringy &beany, char * test);
void show(const stringy &beany, int times = 1);
void show(const char * str, int times = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");    
    return 0;
}

void set(stringy &beany, char * test)
{
    int length = strlen(test);
    char * str = new char[length + 1];
    strcpy(str, test);
    beany.str = str;
    beany.ct = length;
}

void show(const stringy &beany, int times)
{
    for (int i = 0; i < times; i++)
    {
        std::cout << beany.str;
    }
}

void show(const char * str, int times)
{
    for (int i = 0; i < times; i++)
    {
        std::cout << str;
    }
}
