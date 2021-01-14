#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow() : weight(0)
{
  strcpy_s(name, "No name");
  hobby = new char[10];
  strcpy_s(hobby, 10, "No hobby");
 }

Cow::Cow(const char* nm, const char* ho, double wt) : weight(wt)
{
  strcpy_s(name, nm);
  hobby = new char[strlen(ho) + 1];
  strcpy_s(hobby, strlen(ho) + 1, ho);
}

Cow::Cow(const Cow& c)
{
  strcpy_s(name, c.name);
  delete[] hobby;
  hobby = new char[strlen(c.hobby) + 1];
  strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
  weight = c.weight;
}

Cow::~Cow()
{
  delete[] hobby;
}

Cow & Cow::operator=(const Cow& c)
{
  if (this == &c)
    return *this;

  strcpy_s(name, c.name);
  delete[] hobby;
  hobby = new char[strlen(c.hobby) + 1];
  strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
  weight = c.weight;

  return *this;
}

void Cow::ShowCow() const
{
  std::cout << "\tName: " << name << std::endl;
  std::cout << "\tHobby: " << hobby << std::endl;
  std::cout << "\tWeight: " << weight << std::endl;
}
