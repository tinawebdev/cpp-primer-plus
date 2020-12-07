#include <iostream>
#include "sales.h"

SALES::Sales::Sales()
  {
    total = 0;

    std::cout << "Enter sales for quarter 1: ";
    std::cin >> sales[0];
    max = sales[0];
    min = sales[0];
    total += sales[0];

    for (int i = 1; i < QUARTERS; i++)
    {
      std::cout << "Enter sales for quarter " << i + 1 <<  ": ";
      std::cin >> sales[i];
      total += sales[i];

      if (sales[i] > max) max = sales[i];
      if (sales[i] < min) min = sales[i];
    }

    average = total / QUARTERS;
    max = max;
    min = min;
  }

void SALES::Sales::showSales()
  {
    for (int i = 0; i < QUARTERS; i++)
    {
      std::cout << "Quarter #" << i + 1 << " sales: " << sales[i] << std::endl;
    }

    std::cout << "Maximum sales: " << max << std::endl;
    std::cout << "Minimum sales: " << min << std::endl;
    std::cout << "Average sales: " << average << std::endl;
  }
