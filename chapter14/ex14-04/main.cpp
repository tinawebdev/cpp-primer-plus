#include <iostream>
#include "person.h"

const short SIZE = 4;

int main()
{
  Person* pp[SIZE];

  int ct;

  for (ct = 0; ct < SIZE; ct++)
  {
    std::cout << "Enter the category:" << std::endl;
    std::cout << "g: Gunslinger\np: Poker Player" << std::endl;
    std::cout << "b: Bad Dude\nn: Person" << std::endl;
    std::cout << "q: quit" << std::endl;

    char choice;
    std::cin >> choice;

    while (strchr("gpbnq", choice) == NULL)
    {
      std::cout << "Please enter a g, p, b, n, or q: ";
      std::cin >> choice;
    }

    if (choice == 'q')
      break;

    switch (choice)
    {
    case 'g':
      pp[ct] = new Gunslinger;
      break;
    case 'p':
      pp[ct] = new PokerPlayer;
      break;
    case 'b':
      pp[ct] = new BadDude;
      break;
    case 'n':
      pp[ct] = new Person;
      break;
    }

    std::cin.get();

    pp[ct]->Set();

    std::cout << std::endl;
  }

  if (ct > 0)
  {
    std::cout << "\nLIST:" << std::endl;

    int i;

    for (i = 0; i < ct; i++)
    {
      std::cout << std::endl;
      pp[i]->Show();
    }

    for (i = 0; i < ct; i++)
      delete pp[i];
  }
  else
    std::cout << "\nList is empty. Bye." << std::endl;

  return 0;
}
