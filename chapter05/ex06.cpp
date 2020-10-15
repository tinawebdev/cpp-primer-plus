#include <iostream>
#include <array>
#include <string>

int main()
{
    using namespace std;

    const int Years = 3;
    const int Months = 12;
    array <string, Months> months = { "January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November", "December" };
    int yearsSales[Years][Months];
    int totalSales = 0;
    int totalYearSales = 0;
    cout << "Book Sales" << endl;

    for (int i = 0; i < Years; i++) {
        cout << endl;
        cout << "Year " << i+1 << " sales: " << endl;

        for (int j = 0; j < Months; j++) {
            cout << months[j] << " sales: ";
            cin >> yearsSales[i][j];
            totalSales += yearsSales[i][j];
        }

        cout << endl;
        cout << "Total sales: " << totalSales << " books." << endl;
        totalYearSales += totalSales;
        totalSales = 0;
    }

    cout << "Total year sales: " << totalYearSales << " books." << endl;

    return 0;
}
