#include <iostream>
#include <cstring>
#include <cctype>
#include "string2.h"
using std::cin;
using std::cout;

int String::num_strings = 0;
int String::HowMany()
{
  return num_strings;
}

String::String(const char* s)
{
  len = std::strlen(s);
  str = new char[len + 1];
  strcpy_s(str, len + 1, s);
  num_strings++;
}

String::String()
{
  len = 4;
  str = new char[1];
  str[0] = '/0';
  num_strings++;
}

String::String(const String& st)
{
  num_strings++;
  len = st.len;
  str = new char[len + 1];
  strcpy_s(str, len + 1, st.str);
}

String::~String()
{
  --num_strings;
  delete[] str;
}

void String::stringlow()
{
  for (int i = 0; i < len; i++)
  {
    str[i] = tolower(str[i]);
  }
}

void String::stringup()
{
  for (int i = 0; i < len; i++)
  {
    str[i] = toupper(str[i]);
  }
}

int String::has(char ch)
{
  int count = 0;
  for (int i = 0; i < len; i++)
  {
    if (str[i] == ch)
      count++;
  }
  return count;
}

String& String::operator=(const String& st)
{
  if (this == &st)
    return *this;
  delete[] str;
  len = st.len;
  str = new char[len + 1];
  strcpy_s(str, len + 1, st.str);
  return *this;
}

String& String::operator=(const char* s)
{
  delete[] str;
  len = std::strlen(s);
  str = new char[len + 1];
  strcpy_s(str, len + 1, s);
  return *this;
}

char& String::operator[](int i)
{
  return str[i];
}

const char& String::operator[](int i) const
{
  return str[i];
}

String operator+(const String& st1, const String& st2)
{
  int len = st1.len + st2.len + 1;
  char* temp = new char[len + 1];
  strcpy_s(temp, len + 1, st1.str);
  strcat_s(temp, sizeof(char) * (len + 1), st2.str);
  String newString(temp);
  delete[] temp;
  return newString;
}

String operator+(const char* st1, const String& st2)
{
  //return String(st1) + st2;
  int len = std::strlen(st1) + st2.len + 1;
  char* temp = new char[len + 1];
  strcpy_s(temp, len + 1, st1);
  strcat_s(temp, sizeof(char) * (len+1), st2.str);
  String newString(temp);
  delete[] temp;
  return newString;
}

bool operator<(const String& st1, const String& st2)
{
  return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
  return st2.str < st1.str;
}

bool operator==(const String& st1, const String& st2)
{
  return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
  os << st.str;
  return os;
}

istream& operator>>(istream& is, String& st)
{
  char temp[String::CINLIM];
  is.get(temp, String::CINLIM);
  if (is)
    st = temp;
  while (is && is.get() != '\n')
    continue;
  return is;
}

