#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class Complex {
 private:
  double real;
  double imaginary;
 public:
  Complex(double a = 0, double b = 0);
  ~Complex();

  Complex operator~() const;
  Complex operator+(const Complex &c) const;
  Complex operator-(const Complex &c) const;
  Complex operator*(const Complex &c) const;

  friend Complex operator*(int m, const Complex &c);
  friend std::ostream &operator<<(std::ostream &os, const Complex &c);
  friend std::istream &operator>>(std::istream &os, Complex &c);
};

#endif
