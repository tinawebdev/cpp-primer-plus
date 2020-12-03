#include <iostream>
#include "account.h"

int main()
{
  BankAccount myAccount { "Bob", "12345", 100 };
  int choice = 0;

  std::cout << "Select an option (q to quit): " << std::endl;
  std::cout << "1. Deposit funds \t2. Withdraw funds \t3. Display balance" << std::endl;
  std::cin >> choice;

  while (std::cin)
  {
    double amount = 0.0;

    if (1 == choice)
    {
      std::cout << "Enter amount to deposit: ";
      std::cin >> amount;
      myAccount.deposit(amount);
    }
    else if (2 == choice)
    {
      std::cout << "Enter amount to withdraw: ";
      std::cin >> amount;
      myAccount.withdraw(amount);
    }
    else if (3 == choice)
    {
      myAccount.display();
    }
    else
    {
      std::cout << "Invalid input. Try again.";
    }

    std::cout << "Select an option (q to quit): " << std::endl;
    std::cin >> choice;
  }
  
  return 0;
}
