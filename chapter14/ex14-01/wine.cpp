#include "wine.h"

Wine::Wine(const char* l, int y, const int yr[], const int bot[])
    : label(l), years(y)
{
  data.first.resize(years);
  data.second.resize(years);

  for (int i{}; i < years; i++)
  {
    data.first[i] = yr[i];
    data.second[i] = bot[i];
  }
}

Wine::Wine(const char* l, int y)
    : label(l), years(y)
{
  data.first.resize(years);
  data.second.resize(years);
}

void Wine::GetBottles()
{
  std::cout << "Enter " << label << " data for " << years << " year(s):" << std::endl;

  for (int i{}; i < years; i++)
  {
    std::cout << "Enter the year: ";
    std::cin >> data.first[i];

    std::cout << "Enter the number of bottles for that year: ";
    std::cin >> data.second[i];
  }
}

const std::string& Wine::Label() const
{
  return label;
}

int Wine::sum() const
{
  int sum{};

  for (int i{}; i < years; i++)
  {
    sum += data.second[i];
  }

  return sum;
}

void Wine::Show() const
{
  std::cout << "Wine: " << label << std::endl;
  std::cout << "\tYear\tBottles" << std::endl;

  for (int i{}; i < years; i++)
  {
    std::cout << '\t' << data.first[i];
    std::cout << '\t' << data.second[i];
    std::cout << std::endl;
  }
}
