#include <iostream>
#include "person.h"

int main()
{
  Person one;
  Person two("Smythecraft");
  Person three("Dimwiddy", "Sam");

  one.Show();  
  one.FormalShow();
  std::cout << std::endl;
  two.Show();
  two.FormalShow();
  std::cout << std::endl;
  three.Show();
  three.FormalShow();

  return 0;
}
