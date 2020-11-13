#include <iostream>
#include <string>

void strcount(const std::string str);

int main()
{
    using namespace std;
    string str;
    cout << "Enter a line: \n";
    getline(cin, str);

    while (str !="") 
        {
            strcount(str); 
            cout << "Enter next line (empty line to quit):\n"; 
            getline(cin, str);
        } 
    cout << "Bye\n"; 
    
    return 0;
}

void strcount(const std::string str)
{
    using namespace std; 
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains ";
    while (count < str.size())
        count++; 
    total += count; 
    cout << count << " characters\n"; 
    cout << total << " characters total\n";
}
