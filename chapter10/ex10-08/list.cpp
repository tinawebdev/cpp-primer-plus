#include <iostream>
#include "list.h"

void List::push(const Item & item)
{
  if (top < MAX) items[top++] = item;
}

void List::print() const
{
  for (int i = 0; i < MAX; i++)
	std::cout << "\nItem #" << i + 1 << ": " << items[i];
}

void List::visit(void(*pf)(Item & item))
{
  for (int i = 0; i < MAX; i++)
	(*pf)(items[i]);
}
