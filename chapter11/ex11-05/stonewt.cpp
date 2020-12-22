#include "stonewt.h"
Stonewt::Stonewt(double lbs, Mode m) {
  stone = int(lbs) / LBS_PER_STN;
  pds_left = int(lbs) % LBS_PER_STN + lbs - int(lbs);
  pounds = lbs;
  mode = m;
}

Stonewt::Stonewt(int stn, double lbs, Mode m) {
  stone = stn;
  pds_left = lbs;
  pounds = stn * LBS_PER_STN + lbs;
  mode = m;
}

Stonewt::Stonewt() {
  stone = 0;
  pounds = pds_left = 0.0;
  mode = STONE;
}

Stonewt::~Stonewt() {
}

void Stonewt::setMode(const Mode m) {
  switch (m) {
    case Stonewt::STONE:mode = Stonewt::STONE;
      break;
    case Stonewt::LBS_INT:mode = Stonewt::LBS_INT;
      break;
    case Stonewt::LBS_FLOAT:mode = Stonewt::LBS_FLOAT;
      break;
    default:std::cout << "Unknown argument. Setting mode to STONE." << std::endl;
      mode = Stonewt::STONE;
      break;
  }
}

Stonewt operator+(const Stonewt &s1, const Stonewt &s2) {
  return Stonewt(s1.pounds + s2.pounds);
}

Stonewt operator-(const Stonewt &s1, const Stonewt &s2) {
  return Stonewt(s1.pounds - s2.pounds);
}

Stonewt operator*(const Stonewt &s, const double d) {
  return Stonewt(s.pounds * d);
}

Stonewt operator*(const double d, const Stonewt &s) {
  return s * d;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s) {
  if (s.mode == s.STONE)
    os << s.stone << " stone, " << s.pds_left << " pounds.";
  if (s.mode == s.LBS_INT)
    os << int(s.pounds) << " integer pounds.";
  if (s.mode == s.LBS_FLOAT)
    os << s.pounds << " pounds.";

  return os;
}
