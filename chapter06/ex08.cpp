#include <iostream>
#include <fstream>

const int SIZE = 60;

int main()
{
    using namespace std;

    char filename[SIZE];

    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    int count = 0;

    inFile >> ch;

    while(inFile.good())
    {
        ++count;
        inFile >> ch;
    }
    cout << "Number of characters in the file: " << count << endl;
    inFile.close();

    return 0;
}
