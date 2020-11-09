#include <iostream>

const int ArSize = 5;

template <typename T> T max5(T arr[]);

int main() 
{ 
    int arrInt[ArSize] = {1, 2, 33, 4, 5};
    double arrDouble[ArSize] = {1.5, 2.5, 3.5, 44.5, 5.5};
    std::cout << max5(arrInt) << std::endl;
    std::cout << max5(arrDouble) << std::endl;
}

template <typename T> T max5(T arr[])
{
    T largest = arr[0];
    for (int i = 1; i < ArSize; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}
