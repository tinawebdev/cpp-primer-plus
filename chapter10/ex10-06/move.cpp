#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
  x = a;
  y = b;
}

void Move::showmove() const
{
  std::cout << "Value of x is: " << x << "\nValue of y is: " << y << std::endl;
}

Move Move::add(const Move & m) const
{
  double m_x, m_y;
  m_x = this->x + m.x;
  m_y = this->y + m.y;
  Move newMove = {m_x, m_y};
  return newMove;
}

void Move::reset(double a, double b)
{
  x = a;
  y = b;
}
