typedef int Item;

class List
{
 private:
  static const int MAX = 3;
  Item items[MAX] {};
  unsigned int top = 0;
 public:
  void push(const Item & item);
  bool isEmpty() const { return top == 0; };
  bool isFull() const { return top == MAX; };
  void print() const;
  void visit(void(*pf)(Item & item));
};