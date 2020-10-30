#include <iostream>

const int Seasons = 4;
const char *Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

struct sa
{
    double expenses[Seasons];
};

void fill(sa *exp);
void show(const sa *exp);

int main()
{
    sa exp;
    fill(&exp);
    show(&exp);
    return 0;
}

void fill(sa *exp)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*exp).expenses[i];
    }
}

void show(const sa *exp)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << (*exp).expenses[i] << endl; total += (*exp).expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
