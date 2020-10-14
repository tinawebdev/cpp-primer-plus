#include <iostream>

int main()
{
    using namespace std;
    double dafna, kleo;
    dafna = kleo = 100.0;
    for (int i = 1; dafna >= kleo; i++)
    {
        dafna += 10;
        kleo += kleo * 0.05;
        cout << "Year " << i << "\t\t" << "Dafna = " << dafna << '\t' << "Kleo = " << kleo << "\n";
    }
    return 0;
}
