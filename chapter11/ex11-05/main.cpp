#include <iostream>
#include "stonewt.h"

int main() {
  Stonewt one(10, 2);
  Stonewt two(4, 2.5);
  Stonewt three(275.1);
  Stonewt temp;

  std::cout << "One:\t" << one << std::endl;
  std::cout << "Two:\t" << two << std::endl;

  temp = one + two;
  std::cout << "\nOne + Two:\t" << temp << std::endl;

  temp = one - two;
  std::cout << "One - Two:\t" << temp << std::endl;

  temp = one * 2;
  std::cout << "One * 2:\t" << temp << std::endl;

  temp = 2 * two;
  std::cout << "2 * Two:\t" << temp << std::endl;

  std::cout << "\nThree:" << std::endl;
  three.setMode(Stonewt::LBS_INT);
  std::cout << three << std::endl;
  three.setMode(Stonewt::LBS_FLOAT);
  std::cout << three << std::endl;
  three.setMode(Stonewt::STONE);
  std::cout << three << std::endl;

  std::cin.get();
  return 0;
}
