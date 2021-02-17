#pragma once

#include <iostream>
#include <valarray>
#include <string>

using ArrayInt = std::valarray<int>;
using PairArray = std::pair<ArrayInt, ArrayInt>;

class Wine : private PairArray, private std::string
{
private:
  int years;
public:
  Wine(const char* l, int y, const int yr[], const int bot[]);
  Wine(const char* l, int y);
  ~Wine() {}
  void GetBottles();
  const std::string& Label() const;
  int sum() const;
  void Show() const;
};
