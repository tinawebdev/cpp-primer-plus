#include <iostream>
#include <cstring>
#include "classic.h"

Classic::Classic(const char* title, const char* s1, const char* s2, int n, double x)
  : Cd(s1, s2, n, x)
{
  m_title = new char[strlen(title) + 1];
  strcpy_s(m_title, strlen(title) + 1, title);
}

Classic::Classic(const Cd& d, const char* title)
  : Cd(d)
{
  m_title = new char[strlen(title + 1)];
  strcpy_s(m_title, strlen(title) + 1, title);
}

Classic::~Classic()
{
  delete[] m_title;
}

void Classic::Report() const
{
  Cd::Report();
  std::cout << "Title: " << m_title << std::endl;
}

Classic& Classic::operator=(const Classic& d)
{
  if (this == &d)
    return *this;

  Cd::operator=(d);
  delete[] m_title;

  m_title = new char[strlen(d.m_title) + 1];
  strcpy_s(m_title, strlen(d.m_title) + 1, d.m_title);

  return *this;
}
