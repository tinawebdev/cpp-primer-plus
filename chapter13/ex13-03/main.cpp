#include <iostream>
#include <string>
#include "dma.h"

const int ARR_SIZE = 3;
const int LEN = 64;

int main()
{
  abcDMA* arr[ARR_SIZE];
  char label[LEN];
  char style[LEN];
  char color[LEN];
  int rating = 0;
  int choice = 0;

  for (int i = 0; i < ARR_SIZE; i++)
  {
    std::cout << "For element " << i + 1 << ", enter the label: ";
    std::cin.getline(label, LEN);

    std::cout << "Enter the rating: ";
    std::cin >> rating;

    std::cout << "Choose object type:" << std::endl;
    std::cout << "1 - baseDMA object" << std::endl;
    std::cout << "2 - hasDMA object" << std::endl;
    std::cout << "3 - lacksDMA object" << std::endl;
    std::cin >> choice;
    std::cin.get();

    switch (choice)
    {
    case 1:
      arr[i] = new baseDMA(label, rating);
      break;
    case 2:
      std::cout << "Enter the style: ";
      std::cin.getline(style, LEN);
      arr[i] = new hasDMA(style, label, rating);
      break;
    case 3:
      std::cout << "Enter the color: ";
      std::cin.getline(color, LEN);
      arr[i] = new lacksDMA(color, label, rating);
      break;
    default:
      std::cout << "Unrecognized input, setting object ";
      std::cout << "to baseDMA" << std::endl;
      arr[i] = new baseDMA(label, rating);
      break;
    }
  }

  std::cout << "Displaying the list:" << std::endl;

  for (int i = 0; i < ARR_SIZE; i++)
  {
    std::cout << "Element " << i + 1 << ":" << std::endl;
    arr[i]->View();
    std::cout << std::endl;
  }

  for (int i = 0; i < ARR_SIZE; i++)
  {
    delete arr[i];
  }

  return 0;
}
