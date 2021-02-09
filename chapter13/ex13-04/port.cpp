#include "port.h"
#include <cstring>

Port::Port(const char* br, const char* st, int b)
{
  brand = new char[strlen(br) + 1];
  strcpy_s(brand, strlen(br) + 1, br);
  strcpy_s(style, 20, st);
  bottles = b;
}

Port::Port(const Port& p)
{
  brand = new char[strlen(p.brand) + 1];
  strcpy_s(brand, strlen(p.brand) + 1, p.brand);
  strcpy_s(style, strlen(p.style) + 1, p.style);
  bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
  if (this == &p)
    return *this;

  delete[] brand;
  brand = new char[strlen(p.brand) + 1];
  strcpy_s(brand, strlen(p.brand) + 1, p.brand);
  strcpy_s(style, strlen(p.style) + 1, p.style);
  bottles = p.bottles;

  return *this;
}

Port& Port::operator+=(int b)
{
  if (b < 0)
  {
    operator-=(-b);
    return *this;
  }

  bottles += b;
  return *this;
}

Port& Port::operator-=(int b)
{
  if (b > bottles)
  {
    std::cout << "Cannot subtract " << b << " bottles from " << bottles << " available bottles.\n"
              << "Operation terminated." << std::endl;
    return *this;
  }

  bottles -= b;
  return *this;
}

void Port::Show() const
{
  std::cout << "Brand: " << brand << std::endl;
  std::cout << "Kind: " << style << std::endl;
  std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Port& p)
{
  os << "Brand: " << p.brand << std::endl;
  os << "Kind: " << p.style << std::endl;
  os << "Bottles: " << p.bottles << std::endl;

  return os;
}
