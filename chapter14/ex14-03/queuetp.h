#pragma once

template <typename T>
class QueueTp
{
private:
  const static int QUEUE_SIZE = 10;

  struct Node
  {
    T item;
    Node* next;
  };

  Node* front;
  Node* rear;

  int items;
  const int qSize;

  QueueTp(const QueueTp<T>& q) {}
  QueueTp<T>& operator=(const QueueTp<T>& q) {}
public:
  QueueTp(int qs = QUEUE_SIZE);
  ~QueueTp();
  bool Enqueue(const T& item);
  bool Dequeue(T& item);
  bool isEmpty() const { return items == 0; }
  bool isFull() const { return items == qSize; }
  int QueueCount() const { return items; }
};

template<typename T>
inline QueueTp<T>::QueueTp(int qs)
  :front(nullptr), rear(nullptr), items(0), qSize(qs)
{
}

template<typename T>
inline QueueTp<T>::~QueueTp()
{
  Node* temp;

  while (front != nullptr)
  {
    temp = front;
    front = front->next;
    delete temp;
  }
}

template<typename T>
inline bool QueueTp<T>::Enqueue(const T& item)
{
  if (isFull())
    return false;

  Node* add = new Node;
  add->item = item;
  add->next = nullptr;
  items++;

  if (front == nullptr)
    front = add;
  else
    rear->next = add;

  rear = add;

  return true;
}

template<typename T>
inline bool QueueTp<T>::Dequeue(T& item)
{
  if (front == nullptr)
    return false;

  item = front->item;
  items--;

  Node* temp = front;
  front = front->next;
  delete temp;

  if (items == 0)
    rear = nullptr;

  return true;
}
