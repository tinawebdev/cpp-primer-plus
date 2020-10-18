#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string word = "";
    int vowels = 0, consonants = 0, others = 0;

    std::cout << "Enter words (q to quit):" << std::endl;

    while (std::cin >> word && word != "q")
    {
        if (isalpha(word[0]))
        {
            switch (word[0])
            {
                case 'A': case 'a':
                case 'E': case 'e':
                case 'I': case 'i':
                case 'O': case 'o':
                case 'U': case 'u':
                case 'Y': case 'y':
                    vowels++; break;
                default: 
                    consonants++;
            }
        }
        else
        {
            others++;
        }
    }

    std::cout << vowels << " words beginning with vowels.\n"
         << consonants << " words beginning with consonants.\n"
         << others << " others.\n";

    return 0;
}
