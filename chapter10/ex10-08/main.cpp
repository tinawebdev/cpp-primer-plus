#include <iostream>
#include "list.h"

template <typename T>
void square(T & x);

int main()
{
  List list;
  Item input;

  std::cout << "Is list empty? " << list.isEmpty() << std::endl;
  std::cout << "Is list full? " << list.isFull() << std::endl;
  std::cout << "\nList contents: ";
  list.print();
  std::cout << std::endl;

  std::cout << "\nEnter 3 values: " << std::endl;
  for (int i = 0; i < 3; i++)
  {
    std::cin >> input;
    list.push(input);
  }

  std::cout << "Is list empty? " << list.isEmpty() << std::endl;
  std::cout << "Is list full? " << list.isFull() << std::endl;
  std::cout << "\nList contents: ";
  list.print();
  std::cout << std::endl;

  std::cout << "\nThe square of all elements in the list: ";
  list.visit(square);
  list.print();
  std::cout << std::endl;

  return 0;
}

template<typename T>
void square(T & x)
{
  x *= x;
}
