#include "wine.h"

Wine::Wine(const char* l, int y, const int yr[], const int bot[])
    : std::string(l), PairArray(y, y), years(y)
{
  for (int i{}; i < years; i++)
  {
    PairArray::first[i] = yr[i];
    PairArray::second[i] = bot[i];
  }
}

Wine::Wine(const char* l, int y)
    : std::string(l), PairArray(y, y), years(y)
{

}

void Wine::GetBottles()
{
  std::cout << "Enter " << Label() << " data for " << years << " year(s):" << std::endl;

  for (int i{}; i < years; i++)
  {
    std::cout << "Enter the year: ";
    std::cin >> PairArray::first[i];

    std::cout << "Enter the number of bottles for that year: ";
    std::cin >> PairArray::second[i];
  }
}

const std::string& Wine::Label() const
{
  return static_cast<const std::string&>(*this);
}

int Wine::sum() const
{
  int sum{};

  for (int i{}; i < years; i++)
  {
    sum += PairArray::second[i];
  }

  return sum;
}

void Wine::Show() const
{
  std::cout << "Wine: " << Label() << std::endl;
  std::cout << "\tYear\tBottles" << std::endl;

  for (int i{}; i < years; i++)
  {
    std::cout << '\t' << PairArray::first[i];
    std::cout << '\t' << PairArray::second[i];
    std::cout << std::endl;
  }
}
