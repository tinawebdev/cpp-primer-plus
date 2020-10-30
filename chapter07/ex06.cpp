#include <iostream>

const int ArSize = 5;

int fillArray(double values[], int ArSize);
void showArray(double values[], int size);
void reverseArray(double values[], int size);

int main()
{
    double values[ArSize];
    std::cout << "Fill array" << std::endl;
    int size = fillArray(values, ArSize);
    showArray(values, size);
    std::cout << "Reverse array" << std::endl;
    reverseArray(values, size);
    showArray(values, size);
    std::cout << "Reverse array except first and last element" << std::endl;
    reverseArray(values + 1, size - 2);
    showArray(values, size);

    return 0;
}

int fillArray(double values[], int ArSize)
{
    std::cout << "\nEnter a series of numbers (q to quit)" << std::endl;

    int i=0;
    for (i=0; i<ArSize; i++)
    {
        std::cout << "Enter number #" << i + 1 << ": ";
        std::cin >> values[i];
        if (!std::cin)
        {
            std::cin.clear();
            std::cout << "Ending input.\n";
            break;
        }
    }
    return i;
}

void showArray(double values[], int size)
{
    for (int i=0; i<size; i++)
    {
        std::cout << i+1 << ":" << values[i] << std::endl;
    }
}

void reverseArray(double values[], int size)
{
    double temp[ArSize];

    for (int i=0; i<size; i++)
        temp[size - (i+1)] = values[i];

    for (int i=0; i<size; i++)
        values[i] = temp[i];
}
