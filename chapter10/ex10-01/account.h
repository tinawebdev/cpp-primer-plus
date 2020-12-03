#include <iostream>
#include <string>

class BankAccount
{
  private:
    std::string name_;
    std::string accountNumber_;
    double balance_;
  public:
    BankAccount();
    BankAccount(std::string name, std::string accountNumber, double balance = 0.0);
    ~BankAccount();
    void display();
    void deposit(double money);
    void withdraw(double money);
};
  