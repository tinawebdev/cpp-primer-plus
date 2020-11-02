#include <iostream> 

const unsigned short CALC_FUNCTIONS = 2;
const char * OPERATORS[2] = { " + ", " * " };

double calculate(double num1, double num2, double(*pf)(double, double));
double add(double x, double y);
double multiply(double x, double y);

int main()
{
    double(*calcFunctions[CALC_FUNCTIONS])(double, double) = { add, multiply };
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter two numbers (or a letter to quit): ";
    while (std::cin >> num1 >> num2)
    {
        for (int i = 0; i < CALC_FUNCTIONS; i++)
        {
            std::cout << num1 << OPERATORS[i] << num2 << " = ";
            std::cout << calculate(num1, num2, calcFunctions[i]) << std::endl;
        }

        std::cout << "\nEnter another two numbers:" << std::endl;
    }
    return 0;
}

double calculate(double num1, double num2, double(*pf)(double, double))
{
    return (*pf)(num1, num2);
}

double add(double x, double y)
{
    return x + y;
}

double multiply(double x, double y)
{
    return x * y;
}
