#include <iostream>
#include <string>
#include "golf.h"

void Golf::setgolf(int i)
{
  std::string tempName;
  int tempHandicap = 0;
  std::cout << "Enter the golfer's name: ";
  getline(std::cin, tempName);
  this->fullname = tempName;
  std::cout << "Enter the golfer's handicap: ";
  std::cin >> tempHandicap;
  std::cin.get();
  this->handicap = tempHandicap;
}

void Golf::showgolf()
{
    std::cout << "\nName: " << fullname;
    std::cout << "\nHandicap: " << handicap;
}
