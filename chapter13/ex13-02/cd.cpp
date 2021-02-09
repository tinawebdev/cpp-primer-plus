#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
  performers = new char[strlen(s1) + 1];
  strcpy_s(performers, strlen(s1) + 1, s1);

  label = new char[strlen(s2) + 1];
  strcpy_s(label, strlen(s2) + 1, s2);

  selections = n;
  playtime = x;
}

Cd::Cd(const Cd& d)
{
  performers = new char[strlen(d.performers) + 1];
  strcpy_s(performers, strlen(d.performers) + 1, d.performers);

  label = new char[strlen(d.label) + 1];
  strcpy_s(label, strlen(d.label) + 1, d.label);

  selections = d.selections;
  playtime = d.playtime;
}

Cd::~Cd()
{
  delete[] performers;
  delete[] label;
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

  delete[] performers;
  performers = new char[strlen(d.performers) + 1];
  strcpy_s(performers, strlen(d.performers) + 1, d.performers);

  delete[] label;
  label = new char[strlen(d.label) + 1];
  strcpy_s(label, strlen(d.label) + 1, d.label);

  selections = d.selections;
  playtime = d.playtime;
}
