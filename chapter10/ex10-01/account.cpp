#include <iostream>
#include "account.h"

BankAccount::BankAccount()
{
  name_ = "No name";
  accountNumber_ = "No account number";
  balance_ = 0.0;
}

BankAccount::BankAccount(std::string name, std::string accountNumber, double balance)
{
  name_ = name;
  accountNumber_ = accountNumber;
  balance_ = balance;
}

BankAccount::~BankAccount() { }

void BankAccount::display()
{
  std::cout << "\tAccount info: " << std::endl;
  std::cout << "Name: " << name_ << std::endl;
  std::cout << "Account number: " << accountNumber_ << std::endl;
  std::cout << "Balance: " << balance_ << std::endl;
}

void BankAccount::deposit(double money)
{
  balance_ += money;
  std::cout << "You deposited: $" << money << std::endl;
  std::cout << "Current balance: $" << balance_ << std::endl;
}

void BankAccount::withdraw(double money)
{
  balance_ -= money;
  std::cout << "You withdrew: $" << money << std::endl;
  std::cout << "Current balance: $" << balance_ << std::endl;
}
