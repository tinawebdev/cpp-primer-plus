#include <iostream>
#include "namespace.h"

namespace SALES
{
  void setSales(Sales & s, const double ar[], int n)
  {
    double max = ar[0];
    double min = ar[0];
    double total = 0;

    if (n > QUARTERS) n = QUARTERS;

    for(int i = 0; i < n; i++)
    {
      s.sales[i] = ar[i];
      total += s.sales[i];

      if (s.sales[i] > max) max = s.sales[i];
      if (s.sales[i] < min) min = s.sales[i];
    }

    s.average = total / n;
    s.max = max;
    s.min = min;		
  }
  
  void setSales(Sales & s)
  {
    double max;
    double min;
    double total = 0;

    std::cout << "Enter sales for quater 1: ";
    std::cin >> s.sales[0];
    max = s.sales[0];
    min = s.sales[0];
    total += s.sales[0];

    for (int i = 1; i < QUARTERS; i++)
    {
      std::cout << "Enter sales for quater " << i + 1 <<  ": ";
      std::cin >> s.sales[i];
      total += s.sales[i];

      if (s.sales[i] > max) max = s.sales[i];
      if (s.sales[i] < min) min = s.sales[i];
    }

    s.average = total / QUARTERS;
    s.max = max;
    s.min = min;		
  }
  
  void showSales(const Sales & s)
  {
    for (int i = 0; i < QUARTERS; i++)
    {
      std::cout << "Quarter #" << i + 1 << " sales: " << s.sales[i] << std::endl;
    }

    std::cout << "Maximum sales: " << s.max << std::endl;
    std::cout << "Minimum sales: " << s.min << std::endl;
    std::cout << "Average sales: " << s.average << std::endl;		
  }
}
