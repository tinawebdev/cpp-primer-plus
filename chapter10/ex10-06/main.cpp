#include <iostream>
#include "move.h"

int main()
{
  std::cout << "Move 1:" << std::endl;
  Move move1;
  move1.showmove();
  std::cout << std::endl;

  std::cout << "Move 2:" << std::endl;
  Move move2(1.5, 2.5);
  move2.showmove();
  std::cout << std::endl;

  std::cout << "Move 3:" << std::endl;
  Move move3(1.5, 2.1);
  move3.showmove();
  std::cout << std::endl;

  std::cout << "Move 4:" << std::endl;
  Move move4(move2.add(move3));
  move4.showmove();
  std::cout << std::endl;

  std::cout << "Resetting Move 2:" << std::endl;
  move2.reset();
  move2.showmove();
  std::cout << std::endl;

  std::cout << "Setting new values for Move 2:" << std::endl;
  move2.reset(1.1, 2.2);
  move2.showmove();
  std::cout << std::endl;

  return 0;
}
