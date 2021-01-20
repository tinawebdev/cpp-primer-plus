#include <iostream>
#include "stack.h"

Stack::Stack(int n)
{
  top = 0;
  size = n;
  items = new Item[size];
}

Stack::Stack(const Stack& st)
{
  top = st.top;
  size = st.size;

  items = new Item[size];
  for (int i = 0; i < top; i++)
    items[i] = st.items[i];
}

Stack::~Stack()
{
  delete[] items;
}

bool Stack::isempty() const
{
  return top == 0;
}

bool Stack::isfull() const
{
  return top == size;
}

bool Stack::push(const Item& item)
{
  if (top < size)
  {
    items[top++] = item;
    return true;
  }
  else
    return false;
}

bool Stack::pop(Item& item)
{
  if (top > 0)
  {
    item = items[--top];
    return true;
  }
  else
    return false;
}

Stack& Stack::operator=(const Stack& st)
{
  if (this == &st)
    return *this;

  top = st.top;
  size = st.size;

  delete[] items;

  items = new Item[size];
  for (int i = 0; i < top; i++)
    items[i] = st.items[i];

  return *this;
}
