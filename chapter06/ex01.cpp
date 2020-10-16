#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    cout << "Enter text, and type @ to terminate input.\n";

    char ch;
    cin.get(ch);

    while (ch != '@')
    {
        if (islower(ch))
            cout << char(toupper(ch));
        else if (isupper(ch))
            cout << char(tolower(ch));
        else if (!isalnum(ch))
            cout << ch;

        cin.get(ch);
    }

    return 0;
}
