#include <iostream>
#include "workermi.h"
#include "queuetp.h"

const int SIZE = 5;

int main()
{  
  QueueTp<Worker*> wpQueue;
  Worker* pw = nullptr;

  int ct;

  for (ct = 0; ct < SIZE; ct++)
  {
    char choice;
    std::cout << "Enter the employee category:" << std::endl;
    std::cout << "w: waiter\ts: singer" << std::endl;
    std::cout << "t: singing waiter\tq : quit" << std::endl;

    std::cin >> choice;
    while (strchr("wstq", choice) == NULL)
    {
      std::cout << "Please enter a w, s, t, or q: ";
      std::cin >> choice;
    }

    if (choice == 'q')
      break;

    switch (choice)
    {
    case 'w':
      pw = new Waiter;
      break;
    case 's':
      pw = new Singer;
      break;
    case 't':
      pw = new SingingWaiter;
      break;
    }

    std::cin.get();

    pw->Set();
    wpQueue.Enqueue(pw);

    std::cout << std::endl;
  }

  std::cout << "\nHere is your staff:" << std::endl;

  int i;

  for (i = 0; i < ct; i++)
  {
    std::cout << std::endl;
    wpQueue.Dequeue(pw);
    pw->Show();

    delete pw;
  }

  std::cout << "\nBye." << std::endl;

  return 0;
}
