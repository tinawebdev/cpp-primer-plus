#include <iostream>

const int ArSize = 10;

int fillArray(double * scores);
void showResults(double * scores, int size);
double showAverage(double * scores, int size);

int main()
{
    double * scores = new double[ArSize];

    std::cout << "Enter your golf scores: " << std::endl; 
    int size = fillArray(scores);
    if (size > 0)
    {
        std::cout << "Results: " << std::endl;
        showResults(scores, size);
        std::cout << "\nAverage value is: " << showAverage(scores, size) << std::endl;
    }
    else
    {
        std::cout << "No results" << std::endl;
    }

    delete [] scores;    
    return 0;
}

int fillArray(double * ar)
{
    int i;
    for (i=0; i<ArSize; i++)
    {
        std::cout << "Enter score #" << i+1 << ": ";
        std::cin >> ar[i];
        if (!std::cin)
        {
            std::cin.clear();
            std::cout << "Ending input." << std::endl;
            break;
        }
    }
    return i;
}

void showResults(double * ar, int size)
{
    for (int i=0; i<size; i++)
        std::cout << ar[i] << " ";
}

double showAverage(double * ar, int size)
{
    double sum = 0;
    for (int i=0; i<size; i++)
        sum += ar[i];
    return sum/size;
}
