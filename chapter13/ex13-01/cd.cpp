#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
  strcpy_s(performers, 50, s1);
  strcpy_s(label, 20, s2);
  selections = n;
  playtime = x;
}

Cd::Cd(const Cd& d)
{
  strcpy_s(performers, 50, d.performers);
  strcpy_s(label, 20, d.label);
  selections = d.selections;
  playtime = d.playtime;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
  std::cout << "Performer(s): " << performers << std::endl;
  std::cout << "Label: " << label << std::endl;
  std::cout << "Selections: " << selections << std::endl;
  std::cout << "Playtime: " << playtime << " minutes" << std::endl;
}

Cd& Cd::operator=(const Cd& d)
{
  if (this == &d)
    return *this;

  strcpy_s(performers, 50, d.performers);
  strcpy_s(label, 20, d.label);
  selections = d.selections;
  playtime = d.playtime;
}
