#include "dma.h"
#include <cstring>

// abcDMA methods
abcDMA::abcDMA(const char* l, int r)
{
  label = new char[strlen(l) + 1];
  strcpy_s(label, strlen(l) + 1, l);
  rating = r;
}

abcDMA::abcDMA(const abcDMA& adma)
{
  label = new char[strlen(adma.label) + 1];
  strcpy_s(label, strlen(adma.label) + 1, adma.label);
  rating = adma.rating;
}

abcDMA::~abcDMA()
{
  delete[] label;
}

abcDMA& abcDMA::operator=(const abcDMA& adma)
{
  if (this == &adma)
    return *this;

  delete[] label;

  label = new char[strlen(adma.label) + 1];
  strcpy_s(label, strlen(adma.label) + 1, adma.label);
  rating = adma.rating;

  return *this;
}

std::ostream& operator<<(std::ostream& os, const abcDMA& adma)
{
  os << "Label: " << adma.label << std::endl;
  os << "Rating: " << adma.rating << std::endl;

  return os;
}

void abcDMA::View() const
{
  std::cout << "Label: " << label << std::endl;
  std::cout << "Rating: " << rating << std::endl;
}

// baseDMA methods
baseDMA::baseDMA(const char* l, int r)
  :abcDMA(l, r)
{
}

baseDMA::baseDMA(const baseDMA& bdma)
  : abcDMA(bdma)
{
}

std::ostream& operator<<(std::ostream& os, const baseDMA& bdma)
{
  os << "baseDMA - operator<<()" << std::endl;
  os << static_cast<const abcDMA&>(bdma);

  return os;
}

void baseDMA::View() const
{
  std::cout << "baseDMA - View()" << std::endl;
  std::cout << "Label: " << abcDMA::showLabel() << std::endl;
  std::cout << "Rating: " << abcDMA::showRating() << std::endl;
}

baseDMA& baseDMA::operator=(const baseDMA& bdma)
{
  if (this == &bdma)
    return *this;

  abcDMA::operator=(bdma);
  return *this;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char* c, const char* l, int r)
  : abcDMA(l, r)
{
  strcpy_s(color, COL_LEN - 1, c);
  color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const lacksDMA& ldma)
  :abcDMA(ldma)
{
  strcpy_s(color, COL_LEN - 1, ldma.color);
  color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
  std::cout << "lacksDMA - View()" << std::endl;
  std::cout << "Label: " << abcDMA::showLabel() << std::endl;
  std::cout << "Rating: " << abcDMA::showRating() << std::endl;
  std::cout << "Color: " << color << std::endl;
}

lacksDMA& lacksDMA::operator=(const lacksDMA& ldma)
{
  if (this == &ldma)
    return *this;

  abcDMA::operator=(ldma);

  strcpy_s(color, COL_LEN - 1, ldma.color);
  color[COL_LEN - 1] = '\0';

  return *this;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ldma)
{
  os << "lacksDMA - operator<<()" << std::endl;
  os << static_cast<const abcDMA&>(ldma);
  os << "Color: " << ldma.color << std::endl;

  return os;
}

// hasDMA methods
hasDMA::hasDMA(const char* s, const char* l, int r)
  : abcDMA(l, r)
{
  style = new char[strlen(s) + 1];
  strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const hasDMA& hdma)
  :abcDMA(hdma)
{
  style = new char[strlen(hdma.style) + 1];
  strcpy_s(style, strlen(hdma.style) + 1, hdma.style);
}

hasDMA::~hasDMA()
{
  delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hdma)
{
  if (this == &hdma)
    return *this;

  abcDMA::operator=(hdma);

  delete[] style;

  style = new char[strlen(hdma.style) + 1];
  strcpy_s(style, strlen(hdma.style) + 1, hdma.style);

  return *this;
}

void hasDMA::View() const
{
  std::cout << "hasDMA - View()" << std::endl;
  std::cout << "Label: " << abcDMA::showLabel() << std::endl;
  std::cout << "Rating: " << abcDMA::showRating() << std::endl;
  std::cout << "Style: " << style << std::endl;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hdma)
{
  os << "hasDMA - operator<<()" << std::endl;
  os << static_cast<const abcDMA&>(hdma);
  os << "Style: " << hdma.style << std::endl;

  return os;
}
