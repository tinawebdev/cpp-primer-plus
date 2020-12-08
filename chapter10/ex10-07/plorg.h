class Plorg
{
 private:
  const static unsigned int SIZE = 20;
  char m_name[SIZE];
  int m_CI;
 public:
  Plorg(const char* name = "Plorga", int CI = 50);
  void changeCI(int newCI);
  void showPlorg();
};
