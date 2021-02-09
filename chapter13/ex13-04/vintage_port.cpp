#include "vintage_port.h"
#include <cstring>

VintagePort::VintagePort() : Port("none", "vintage")
{
  nickname = new char[strlen("none") + 1];
  strcpy_s(nickname, strlen("none") + 1, "none");
  year = 0;
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y)
  : Port(br, "vintage", b)
{
  nickname = new char[strlen(nn) + 1];
  strcpy_s(nickname, strlen(nn) + 1, nn);
  year = y;
}

VintagePort::VintagePort(const VintagePort& vp)
  : Port(vp)
{
  nickname = new char[strlen(vp.nickname) + 1];
  strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
  year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
  if (this == &vp)
    return *this;

  Port::operator=(vp);
  delete[] nickname;

  nickname = new char[strlen(vp.nickname) + 1];
  strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
  year = vp.year;

  return *this;
}

void VintagePort::Show() const
{
  Port::Show();
  std::cout << "Nickname: " << nickname << std::endl;
  std::cout << "Year: " << year << std::endl;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp)
{
  os << static_cast<const Port&>(vp);
  os << "Nickname: " << vp.nickname << std::endl;
  os << "Year: " << vp.year << std::endl;

  return os;
}
