#include <iostream>
#include "cow.h"

int main()
{
  Cow cow1;
  std::cout << "cow1: " << std::endl;
  cow1.ShowCow();
  std::cout << std::endl;

  Cow cow2("Nicole", "Mooing", 500);
  std::cout << "cow2: " << std::endl;
  cow2.ShowCow();
  std::cout << std::endl;

  Cow cow3(cow2);
  std::cout << "cow3: " << std::endl;
  cow3.ShowCow();
  std::cout << std::endl;

  cow1 = cow3;
  std::cout << "cow1 = cow3: " << std::endl;
  cow1.ShowCow();
  std::cout << std::endl;

  return 0;
}
