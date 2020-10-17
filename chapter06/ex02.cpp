#include <iostream>
#include <array>

int main()
{
    using namespace std;
    const int ArSize = 10;
    array<double, ArSize> donations;
    int i = 0;
    int sum = 0;
    int average = 0;
    int count = 0;

    cout << "Enter value 1" << ":\n";

    while (i < ArSize && cin >> donations[i]) {
        sum += donations[i];
        i++;
        if (i < ArSize) 
            cout << "Enter a value " << i + 1 << ":\n";
    }

    average = sum / i;
    cout << "\nThe average of the " << i << " values is " << average << ".";

    for (int j = 0; j < i; j++)
    {
        if (donations[j] > average)
            count++;
    }
    
    cout << "\nThe number of values above the average is " << count << endl;

    return 0;
}
