#include <iostream>

int main()
{
    using namespace std;
    int num, sum = 0;

    do {
        cout << "Enter a number (0 to stop): ";
        cin >> num;
        sum += num;		
        cout << "Result: " << sum << endl;
    } while (num);	

    return 0;
}
