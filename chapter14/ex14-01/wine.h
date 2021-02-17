#pragma once

#include <iostream>
#include <valarray>
#include <string>

class Wine
{
private:
  using ArrayInt = std::valarray<int>;
  using PairArray = std::pair<ArrayInt, ArrayInt>;
  // or:
  //typedef std::valarray<int> ArrayInt;
  //typedef std::pair<ArrayInt, ArrayInt> PairArray;

  PairArray data;
  std::string label;
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
