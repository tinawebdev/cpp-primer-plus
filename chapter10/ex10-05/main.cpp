#include <iostream>
#include "stack.h"

int main()
{
  Stack st;
  customer newCustomer;
  double runningTotal = 0;
  char ch;

  std::cout << "Please Enter: \n"
               "A - to add a customer \n"
               "P - to process a customer \n"
               "Q - to quit.";
  std::cout << std::endl;

  while (std::cin >> ch && toupper(ch) != 'Q')
  {
    while (std::cin.get() != '\n')
      continue;

    if (!isalpha(ch))
    {
      std::cout << '\a';
      continue;
    }

    switch (ch)
    {
      case 'A':
      case 'a':
        std::cout << "Enter the customer's name: ";
        getline(std::cin, newCustomer.fullname);

        std::cout << "Enter customer's payment: $: ";
        std::cin >> newCustomer.payment;

        if (st.isfull())
          std::cout << "The stack is already full.\n";
        else st.push(newCustomer);
        break;
      case 'P':
      case 'p':
        if (st.isempty())
          std::cout << "The stack is already empty.\n";
        else
        {
          st.pop(newCustomer);
          std::cout << "Customer " << newCustomer.fullname << " popped.\n";
          runningTotal += newCustomer.payment;
          std::cout << "Running total: $" << runningTotal << std::endl;
        }
        break;
    }

    std::cout << "Please Enter: \n"
                 "A - to add a customer \n"
                 "P - to process a customer \n"
                 "Q - to quit.";
    std::cout << std::endl;
  }
  std::cout << "Bye!\n";

  return 0;
}
