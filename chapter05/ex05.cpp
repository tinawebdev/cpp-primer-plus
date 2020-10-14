#include <iostream>
#include <array>
#include <string>

int main()
{
    using namespace std;
    array<string, 12> months = {"January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November", "December"};

    array<int, 12> monthSales;
    int totalSales = 0;

    for (int i = 0; i < 12; i++)
    {
        cout << months[i] << " sales: ";
        cin >> monthSales[i];
        totalSales += monthSales[i];
    }

    cout << endl
             << "Total sales: " << totalSales << " books.";

    return 0;
}
