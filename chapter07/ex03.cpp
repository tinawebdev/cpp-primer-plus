#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void displayBox(box b);
void setVolume(box * b);

int main()
{
    int choice = 0;
    box myBox {"MyBox", 10, 10, 10, 0};

    std::cout << "MyBox: \n1. Display dimensions \n2. Calculate volume\n";
    std::cout << "\nSelect an option: ";
    
    while (std::cin >> choice) {
        switch (choice)
        {
            case 1:
                displayBox(myBox);
                break;
            case 2:
                setVolume(&myBox);
                std::cout << "Volume: " << myBox.volume << std::endl;
                break;
        }
        std::cout << "\nSelect an option: ";
    }
}

void displayBox(box b)
{
    std::cout << "\nHeight: " << b.height << "\nWidth: " << b.width;
    std::cout << "\nLength: " << b.length << "\nVolume: " << b.volume;
    std::cout << "\nMaker: " << b.maker << std::endl;
}

void setVolume(box * b)
{
    b->volume = (b->height * b->width * b->length);
}
