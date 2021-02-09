#ifndef CLASSIC_H_
#define CLASSIC_H_
#include "cd.h"

class Classic : public Cd
{
private:
  char* m_title;
public:
  Classic(const char* title = "no title", const char* s1 = "no artist", const char* s2 = "no label", int n = 0, double x = 0.0);
  Classic(const Cd& d, const char* title = "no title");
  ~Classic();
  virtual void Report() const;
  Classic& operator=(const Classic& d);
};

#endif