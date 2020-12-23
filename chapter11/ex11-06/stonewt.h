#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt {
 public:
  enum Mode { STONE, LBS_INT, LBS_FLOAT };
 private:
  enum { LBS_PER_STN = 14 };
  int stone;
  double pds_left;
  double pounds;
  Mode mode;
 public:
  Stonewt(double lbs, Mode m = STONE);
  Stonewt(int stn, double lbs, Mode m = STONE);
  Stonewt();
  ~Stonewt();

  void setMode(Mode m);

  friend Stonewt operator+(const Stonewt &s1, const Stonewt &s2);
  friend Stonewt operator-(const Stonewt &s1, const Stonewt &s2);
  friend Stonewt operator*(const Stonewt &s1, const double d);
  friend Stonewt operator*(const double d, const Stonewt &s2);

  friend bool operator<(const Stonewt &st1, const Stonewt &st2);
  friend bool operator>(const Stonewt &st1, const Stonewt &st2);
  friend bool operator<=(const Stonewt &st1, const Stonewt &st2);
  friend bool operator>=(const Stonewt &st1, const Stonewt &st2);
  friend bool operator==(const Stonewt &st1, const Stonewt &st2);
  friend bool operator!=(const Stonewt &st1, const Stonewt &st2);

  friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

#endif
