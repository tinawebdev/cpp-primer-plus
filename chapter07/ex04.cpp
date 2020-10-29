#include <iostream>
long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total1, total2, choices;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed, and the number of mega number choices:\n";
    while ((cin >> total1 >> choices >> total2) && choices <= total1)
    {
        cout << "You have one chance in ";
        cout << probability(total1, choices) * probability(total2, 1);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n/p;
    return result;
}
