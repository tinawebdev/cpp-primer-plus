#ifndef CD_H_
#define CD_H_

class Cd {
private:
  char performers[50];
  char label[20];
  int selections;
  double playtime;
public:
  Cd(const char* s1 = "no artist", const char* s2 = "no label", int n = 0, double x = 0.0);
  Cd(const Cd& d);
  virtual ~Cd();
  virtual void Report() const;
  Cd& operator=(const Cd& d);
};

#endif
