#include <iostream>
#include "port.h"
#include "vintage_port.h"

int main()
{
  Port p1("Gallo", "tawny", 20);
  VintagePort vp1 = VintagePort("Fonseca Guimaraens", 10, "Old Velvet", 1998);

  std::cout << "Example program for the Port and VintagePort classes." << std::endl;

  std::cout << "\n* Drinking 2 bottles of p1's: " << p1.BottleCount() << " bottles.\n";
  std::cout << "Before:\n";
  std::cout << p1;
  std::cout << "\nAfter:\n";
  p1 -= 2;
  p1.Show();

  std::cout << "\n* Trying to subtract 20 more bottles of p1:" << std::endl;
  p1 -= 20;
  std::cout << "\n* Trying to add -20 bottles to p1:" << std::endl;
  p1 += -20;

  std::cout << "\n* Copying p1 into p2:\n";
  Port p2(p1);
  p2.Show();

  std::cout << "\n* Assigning p3 to p2 and showing p2's contents:\n";
  Port p3("Offley", "Offley Tawny", 5);
  p2 = p3;
  p2.Show();

  std::cout << "\n* Drinking 1 bottle of vp1's: " << vp1.BottleCount() << " bottles.\n";
  std::cout << "Before:\n";
  std::cout << vp1;
  std::cout << "\nAfter:\n";
  vp1 -= 1;
  vp1.Show();

  std::cout << "\n* Copying vp1 into vp2:\n";
  VintagePort vp2(vp1);
  std::cout << vp2;

  std::cout << "\n* Creating empty object vp3 and displaying its contents:\n";
  VintagePort vp3;
  vp3.Show();

  return 0;
}
