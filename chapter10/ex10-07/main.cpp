#include <iostream>
#include "plorg.h"

int main()
{
  Plorg newPlorg;
  std::cout << "Default values for Plorg:" << std::endl;
  newPlorg.showPlorg();
  std::cout << std::endl;

  std::cout << "Changing Plorg's CI to 80:" << std::endl;
  newPlorg.changeCI(80);
  newPlorg.showPlorg();
  std::cout << std::endl;

  return 0;
}
