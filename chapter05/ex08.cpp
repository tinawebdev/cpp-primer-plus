#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char word[ArSize];
    int count = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> word;

    while (strcmp(word, "done"))
    {
        cin >> word;
        count++;
    }

    cout << "You entered a total of " << count << " words" << endl;

    return 0;
}
