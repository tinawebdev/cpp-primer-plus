#include "complex0.h"

Complex::Complex(double a, double b) {
  real = a;
  imaginary = b;
}

Complex::~Complex() {
}

Complex Complex::operator~() const {
  Complex conjugate;
  conjugate.real = real;
  conjugate.imaginary = -imaginary;
  return conjugate;
}

Complex Complex::operator+(const Complex &c) const {
  Complex sum;
  sum.real = real + c.real;
  sum.imaginary = imaginary + c.imaginary;
  return sum;
}

Complex Complex::operator-(const Complex &c) const {
  Complex difference;
  difference.real = real - c.real;
  difference.imaginary = imaginary - c.imaginary;
  return difference;
}

Complex Complex::operator*(const Complex &c) const {
  Complex product;
  product.real = (real * c.real) - (imaginary * c.imaginary);
  product.imaginary = (real * c.imaginary) + (imaginary * c.real);
  return product;
}

Complex operator*(int m, const Complex &c) {
  Complex product;
  product.real = m * c.real;
  product.imaginary = m * c.imaginary;
  return product;
}

std::ostream &operator<<(std::ostream &os, const Complex &c) {
  os << "(" << c.real << "," << c.imaginary << "i)";
  return os;
}

std::istream &operator>>(std::istream &is, Complex &c) {
  std::cout << "real: ";
  is >> c.real;
  if (is) {
    std::cout << "imaginary: ";
    is >> c.imaginary;
  }
  return is;
}