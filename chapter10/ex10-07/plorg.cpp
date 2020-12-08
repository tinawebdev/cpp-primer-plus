#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char* name, int CI)
{
  strcpy(m_name, name);
  m_CI = CI;
}

void Plorg::changeCI(int newCI)
{
  m_CI = newCI;
}

void Plorg::showPlorg()
{
  std::cout << "My name is " << m_name << " and my CI is: " << m_CI << std::endl;
}